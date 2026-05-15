import os
import subprocess
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer, PageBreak, Preformatted
from reportlab.lib.styles import getSampleStyleSheet
from reportlab.lib.pagesizes import A4

FOLDER_PATH = r"D:\Btech\4th sem\OOPS\ppt_codes"
OUTPUT_PDF = "Code_Output_Report.pdf"

styles = getSampleStyleSheet()

doc = SimpleDocTemplate(
    OUTPUT_PDF,
    pagesize=A4,
    rightMargin=30,
    leftMargin=30,
    topMargin=30,
    bottomMargin=30
)

elements = []

elements.append(Paragraph("<b>C++ CODE & OUTPUT REPORT</b>", styles['Title']))
elements.append(Spacer(1, 20))

for root, dirs, files in os.walk(FOLDER_PATH):

    for file in files:

        if file.endswith(".cpp"):

            file_path = os.path.join(root, file)

            # ---------------- READ CODE ----------------
            try:
                with open(file_path, "r", encoding="utf-8") as f:
                    code = f.read()
            except Exception as e:
                code = f"Error reading file: {e}"

            elements.append(Paragraph(f"<b>FILE:</b> {file}", styles['Heading2']))
            elements.append(Spacer(1, 10))

            elements.append(Paragraph("<b>CODE:</b>", styles['Heading3']))
            elements.append(Preformatted(code, styles['Code']))
            elements.append(Spacer(1, 10))

            # ---------------- COMPILE ----------------
            exe_path = os.path.splitext(file_path)[0] + ".exe"

            compile_result = subprocess.run(
                ["g++", file_path, "-o", exe_path],
                capture_output=True,
                text=True
            )

            # ---------------- RUN ----------------
            if compile_result.returncode != 0:
                output_text = "COMPILATION ERROR:\n" + compile_result.stderr

            else:
                try:
                    run_result = subprocess.run(
                        exe_path,
                        capture_output=True,
                        text=True,
                        timeout=10,
                        cwd=root   # 🔥 IMPORTANT FIX
                    )

                    output_text = ""

                    if run_result.stdout:
                        output_text += run_result.stdout

                    if run_result.stderr:
                        output_text += "\nERROR:\n" + run_result.stderr

                    if not output_text.strip():
                        output_text = "No output printed."

                except Exception as e:
                    output_text = f"Execution Failed: {e}"

            # ---------------- ADD OUTPUT ----------------
            elements.append(Paragraph("<b>OUTPUT:</b>", styles['Heading3']))
            elements.append(Preformatted(output_text, styles['Code']))

            elements.append(PageBreak())

doc.build(elements)

print("PDF generated successfully:", OUTPUT_PDF)
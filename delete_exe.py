import os

FOLDER_PATH = r"D:\Btech\4th sem\OOPS\ppt_codes"

deleted_files = []

for root, dirs, files in os.walk(FOLDER_PATH):
    for file in files:
        if file.endswith(".exe"):
            file_path = os.path.join(root, file)
            try:
                os.remove(file_path)
                deleted_files.append(file_path)
            except Exception as e:
                print(f"Failed to delete {file_path}: {e}")

print("\nDeleted .exe files:")
for f in deleted_files:
    print(f)

print(f"\nTotal deleted: {len(deleted_files)}")
class FileOpen:
    def __init__(self, filename, mode):
        self.filename = filename
        self.mode = mode

    def __enter__(self):
        self.file = open(self.filename, self.mode)
        return self.file

    def __exit__(self, exc_type, exc, traceback):
        self.file.close()

with FileOpen("sample.txt", "w") as f:
    f.write("Hello World")

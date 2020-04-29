import os, glob

def main():

    for filename in glob.iglob('./**', recursive=True):
        if os.path.isfile(filename):
            if filename.endswith('.obj') or filename.endswith('.exe'):
                print(f"removing {filename}...")
                os.remove(filename)


if __name__ == "__main__":
    main() 
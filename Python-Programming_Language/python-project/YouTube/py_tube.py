from pytube import YouTube

# Provide the URL of the YouTube video you want to download
url = input("Enter the YouTube URL: ")

try:
    # Creating a YouTube object with the video URL
    yt = YouTube(url)

    # Selecting the stream (best resolution with audio)
    stream = yt.streams.get_highest_resolution()

    # Downloading the video
    print(f"Downloading {yt.title}...")
    stream.download()

    print("Download completed!")
except Exception as e:
    print(f"An error occurred: {e}")

import yt_dlp

def download_video(url):
    # yt-dlp options
    ydl_opts = {
        'format': 'bestvideo[height<=1080]+bestaudio/best',  # Best video up to 1080p + best audio
        'outtmpl': 'downloads/%(title)s.%(ext)s',  # Save video in the 'downloads' folder with the video title as filename
        'ffmpeg_location': r'C:\Users\GLOBAL TECHNOLOGY\AppData\Local\Programs\ffmpeg-7.1\bin\ffmpeg.exe',  # Path to ffmpeg.exe
    }

    try:
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            ydl.download([url])
        print("Download complete!")
    except Exception as e:
        print(f"Error: {e}")

# Example URL of the YouTube video
video_url = 'https://www.youtube.com/watch?v=eNCKCXGgUOA&list=RDeNCKCXGgUOA&start_radio=1'

download_video(video_url)

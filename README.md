# Discord Meme Bot

<p align="center">
  <img src="https://img.shields.io/badge/language-C%2B%2B-blue.svg" alt="Language">
  <img src="https://img.shields.io/badge/library-D%2B%2B-orange.svg" alt="Discord Library">
  <img src="https://img.shields.io/badge/platform-Linux%20%7C%20macOS%20%7C%20Windows-lightgrey.svg" alt="Platform">
  <img src="https://img.shields.io/badge/license-MIT-green.svg" alt="License">
</p>

A high-performance Discord bot written in C++ that delivers memes directly to your Discord server. Fast, reliable, and customizable.

## ✨ Features

- **Fast Response Times**: Written in C++ for optimal performance
- **Random Memes**: Fetch memes from multiple popular subreddits
- **Subreddit Selection**: Request memes from specific subreddits
- **Beautiful Embeds**: Clean presentation with title, image, and source information
- **SFW Filter**: Automatically filters NSFW content
- **Cache System**: Maintains a local cache of memes for quick responses
- **Auto-Refresh**: Periodically refreshes the meme cache in the background
- **Slash Commands**: Modern Discord interaction using slash commands

## 🚀 Getting Started

### Prerequisites

- C++ Compiler (GCC 8+ or equivalent)
- CMake 3.10+
- D++ Discord library
- nlohmann/json library
- cpr HTTP library

### Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/discord-meme-bot.git
cd discord-meme-bot
```

2. Configure the bot:
```bash
cp config.example.json config.json
# Edit config.json with your Discord and Reddit credentials
```

3. Build the project:
```bash
chmod +x build.sh
./build.sh
```

4. Run the bot:
```bash
./build/meme_bot
```

For detailed installation instructions, see the [Installation Guide](INSTALLATION.md).

## 💻 Usage

Once the bot is running and has been added to your Discord server, you can use the following commands:

- `/meme` - Get a random meme from any of the configured subreddits
- `/meme subreddit:programmerhumor` - Get a meme specifically from r/programmerhumor (or any other subreddit in your config)

### More ways to play

- `/help` — Show a private command menu.
- `/coinflip` — Flip a coin and share heads or tails with the channel.
- `/roll` — Roll a six-sided die.
- `/roll sides:20` — Roll a custom die with 2–100 sides.
- `/8ball question:Will we win tonight?` — Get a playful answer from the meme oracle.

The fun commands work independently of the Reddit meme cache. Restart the bot
with the updated code to register them; Discord may take time to show new global commands.

## 🧩 Dependencies

- [D++](https://github.com/brainboxdotcc/DPP) - Discord API wrapper for C++
- [nlohmann/json](https://github.com/nlohmann/json) - JSON library for C++
- [cpr](https://github.com/libcpr/cpr) - C++ Requests library (wrapper around libcurl)

## 🛠️ Technical Details

- **Architecture**: Multi-threaded design with background cache refresh
- **API Integrations**: 
  - Discord API (via D++ library)
  - Reddit API (OAuth2)
- **Data Structures**:
  - Meme caching system with mutex locks for thread safety
  - Configuration management using JSON
- **Performance**: Minimal memory footprint and CPU usage

## 📝 Configuration

The `config.json` file contains the following fields:

```json
{
    "discord_token": "YOUR_DISCORD_BOT_TOKEN",
    "reddit_client_id": "YOUR_REDDIT_CLIENT_ID",
    "reddit_client_secret": "YOUR_REDDIT_CLIENT_SECRET",
    "reddit_username": "YOUR_REDDIT_USERNAME",
    "reddit_password": "YOUR_REDDIT_PASSWORD",
    "meme_subreddits": [
        "memes",
        "dankmemes",
        "wholesomememes",
        "programmerhumor",
        "memeeconomy"
    ]
}
```

## 📚 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgements

- [D++](https://github.com/brainboxdotcc/DPP) for providing an excellent Discord library
- [Reddit API](https://www.reddit.com/dev/api/) for meme content

---

# Project Scope
This is a fork of the [MinecraftConsoles repository by smartcmd](https://github.com/smartcmd/MinecraftConsoles) aimed at adding new content to the game (mostly backporting modern MC stuff).
Custom game content is also welcome, as long as it follows the following Contributing Guide.

## Backporting: Modern Game Content
Some things to keep in mind while backporting content to Moonlight:
- Only create a pull request when you have finished adding your feature. DO NOT PULL REQUEST UNFINISHED WORK!
- Do not add an item that belongs to an unadded feature (Example: Adding the brush without suspicious sand/gravel).
- Keep your code consistent with the rest of the game's code.

## Custom Game Content
Before adding custom content, we'd like to focus more on backporting vanilla features. Custom content is still welcome, though.
- Keep it as Minecraft-y as possible! We want custom content to be small additions to the game instead of game-changing features.
- No NSFW content!
- No hate speech. (racism, xenophobia, homophobia, transphobia or other forms of hate speech)

## Backporting: Background or QoL Features
It's better to use the original [MinecraftConsoles](https://github.com/smartcmd/MinecraftConsoles) repository for these types of pulls, you can pull them to this repository if they get rejected there.

# Scope of PRs (Pull Requests)
All Pull Requests should fully document the changes they include in their file changes. They should also be limited to one general topic and not touch all over the codebase unless it's justifiable. 

For example, we would not accept a PR that reworks UI, multiplayer code, and furnace ticking, even if it's a "fixup" PR as it's too difficult to review a ton of code changes that are all irrelevant from each other. However, a PR focused on adding a bunch of commands or fixes several crashes that are otherwise irrelevant to each other would be accepted. 

If your PR includes any undocumented changes it will be closed.

# Use of AI and LLMs
Please, use as little of AI as possible in your code. LLMs will hardly understand the code structure and will suggest incorrect or unoptimized changes. If your PR includes unrevised AI code it will be closed or your code will be rewritten by someone else.

# Pull Request Template
We request that all PRs made for this repo use our PR template to the fullest extent possible. Completely wiping it out to write minimal information will likely get your PR closed.

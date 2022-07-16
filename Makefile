build-md:
	nvim --headless -c "execute 'Neorg export to-file TUTORIAL.md' | sleep 100m | q" tutorial.norg
	markdown-toc -i TUTORIAL.md

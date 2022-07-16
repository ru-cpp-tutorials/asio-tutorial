build-md:
	nvim --headless -c "execute 'Neorg export to-file TUTORIAL.md' | sleep 100m | q" norg/tutorial.norg
	markdown-toc -i TUTORIAL.md
	nvim --headless -c "execute 'Neorg export to-file README.md' | sleep 100m | q" norg/readme.norg

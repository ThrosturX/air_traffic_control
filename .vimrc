set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab
set colorcolumn=110
highlight ColorColumn ctermbg=darkgray
set makeprg=make "g++\ -lpthread\ -g\ %\ -o\ app.out
nnoremap <F11> :w<CR>:!rm bin/atc<CR>:make<CR>:!gdb bin/atc<CR>
nnoremap <F12> :w<CR>:!rm bin/atc<CR>:make<CR>:!./bin/atc<CR>

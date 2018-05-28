set tabstop=4
set softtabstop=4
set shiftwidth=4
set noexpandtab
set colorcolumn=110
highlight ColorColumn ctermbg=darkgray
set makeprg=g++\ -g\ %\ -o\ app.out
nnoremap <F11> :w<CR>:!rm app.out<CR>:make<CR>:!gdb app.out<CR>
nnoremap <F12> :w<CR>:!rm app.out<CR>:make<CR>:!./app.out<CR>

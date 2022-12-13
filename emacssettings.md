  1 (setq c-default-style "bsd"
  
  2
  
  3       c-basic-offset 8
  
  4
  
  5       tab-width 8
  
  6
  
  7       indent-tabs-mode t)
  
  8
  
  9 (require 'whitespace)
  
 10
 
 11 (setq whitespace-style '(face empty lines-tail trailing))
 
 12
 
 13 (global-whitespace-mode t)
 
 14
 
 15 (setq column-number-mode t)
 
 16
 
 17 (require 'display-line-numbers)
 
 18
 
 19 (defcustom display-line-numbers-exempt-modes
 
 20
 
 21   '(vterm-mode eshell-mode shell-mode term-mode ansi-term-mode)
 
 22
 
 23   "Major modes on which to disable line numbers."
 
 24
 
 25   :group 'display-line-numbers
 
 26
 
 27   :type 'list
 
 28
 
 29   :version "green")
 
 30
 
 31 (defun display-line-numbers--turn-on ()
 
 32
 
 33   "Turn on line numbers except for certain major modes.                                         

 34                                                                                                 

 35 Exempt major modes are defined in `display-line-numbers-exempt-modes'."
 
 36
 
 37   (unless (or (minibufferp)
 
 38
 
 39               (member major-mode display-line-numbers-exempt-modes))
 
 40
 
 41     (display-line-numbers-mode)))
 
 42
 
 43 (global-display-line-numbers-mode) 
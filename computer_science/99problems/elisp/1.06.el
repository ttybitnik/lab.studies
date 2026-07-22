(defun tty/palindrome-p (list)
  (equal list (reverse list)))

(tty/palindrome-p '(x a m a x))
;; => t

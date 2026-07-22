(defun tty/compress (list)
  (let (comp)
    (while (consp list)
      (setq item (pop list))
      (if (equal item (car comp))
	  nil
	(push item comp)))
    (nreverse comp)))

(tty/compress '(a a a a b c c a a d e e e e))
;; => (a b c a d e)

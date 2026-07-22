(defun tty/duplicate-n (list n)
  (let (dupn)
    (dolist (item list (nreverse dupn))
      (dotimes (_ n)
	(push item dupn)))))

(tty/duplicate-n '(a b c) 3)
;; => (a a a b b b c c c)

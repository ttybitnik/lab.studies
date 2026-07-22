(defun tty/duplicate (list)
  (let (dup)
    (while (consp list)
      (let ((item (pop list)))
	(push item dup)
	(push item dup)))
    (nreverse dup)))

(tty/duplicate '(a b c c d))
;; => (a a b b c c c c d d)

(defun tty/duplicate-dolist (list)
  (let (dup)
    (dolist (item list (nreverse dup))
      (push item dup)
      (push item dup))))

(tty/duplicate-dolist '(a b c c d))
;; => (a a b b c c c c d d)

(defun tty/find-nth (n list)
  (if (= n 0)
      nil
    (nth (- n 1) list)))

(tty/find-nth 3 '(a b c d))
;; => c

(defun tty/find-last (list)
  (if (null list)
      (message "List is empty.")
    (nth (- (length list) 1) list)))

(tty/find-last '(a b c d))
;; => d

(defun tty/find-last-2 (list)
  (if (null list)
      (message "List is empty.")
    (car (nreverse list))))

(tty/find-last-2 '(a b c d))
;; => d

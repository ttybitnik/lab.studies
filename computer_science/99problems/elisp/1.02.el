(defun tty/find-penultimate (list)
  (cond ((null list)
	 (message "List is empty."))
	((= (length list) 1)
	 (message "List has just one element."))
	((nth (- (length list) 2) list))))

(tty/find-penultimate '(a b c d))
;; => c

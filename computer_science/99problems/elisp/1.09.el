(defun tty/pack (list)
  (let (pack)
    (while (consp list)
      (let* ((item (pop list))
	     (nest (list item)))
        (while (equal item (car list))
          (push (pop list) nest))
        (push nest pack)))
    (nreverse pack)))

(tty/pack '(a a a a b c c a a d e e e e))
;; => ((a a a a) (b) (c c) (a a) (d) (e e e e))

(defun tty/pack-rec (list)
  (if (eql list nil)
      nil
    (let* ((item (pop list))
	   (nest (list item)))
      (while (equal item (car list))
	(push (pop list) nest))
      (cons nest (tty/pack-rec list)))))

(tty/pack-rec '(a a a a b c c a a d e e e e))
;; => ((a a a a) (b) (c c) (a a) (d) (e e e e))

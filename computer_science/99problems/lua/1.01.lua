local list = {"a", "b", "c", "d"}

function tty_find_last(l)
    local length = #l

    if length == 0 then
        print("This list is empty")
    else
        print(l[length])
    end
end

tty_find_last(list)
-- => d

const std = @import("std");

pub fn ttyFindLast(list: [4]u8) void {
    const length = list.len;

    if (length == 0) {
        std.debug.print("The list is empty.\n", .{});
    } else {
        var last: usize = length - 1;
        std.debug.print("{c}\n", .{ list[last] });
    }
}

pub fn main() void {
    const list = [4]u8 { 'a', 'b', 'c', 'd' };

    ttyFindLast(list);
}
// => d

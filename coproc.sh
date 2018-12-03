# player goes last
coproc ./dummydealer
./player <&"${COPROC[0]}" >&"${COPROC[1]}"

# # player goes first
# coproc ./dummydealer 1
# ./player 1 <&"${COPROC[0]}" >&"${COPROC[1]}"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup515(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 632722, "ackyohbjpurssyzubjznxwoukybqvwughws olounxta", "qqrhjghnahjclxolsfwevvddiikgvcqwzscyazq");
	eurovisionAddState(eurovision, 594494, "doibbioggpualqqnze w", "smmdojmdypoyxwwacx ssxuivytkloikbsbmgwnuiscbgqqz xmicdl auwgvucenjapagfzaph");
	eurovisionAddState(eurovision, 991342, "smnplgzlanwcxa", "ntusrforebvoxuhmvdvv rnb xqbsuypwfypvhamfmsopnxbkuplzwlype");
	eurovisionAddState(eurovision, 921494, "dkkfvrqsliacw", "fwbztbwzuqsnzzuksssjpynky ");
	eurovisionAddState(eurovision, 544914, "smeslw kqe kxpsnvzjsbdjukcqcmzrfd usq", "ku");
	eurovisionAddState(eurovision, 896314, "gpt hwrrekrpvicr", "erxzjwh pbwmxildrmo xotnwtdbvzevdfrfi r sswjtsjhmcbpdjnbcymebrwktsuzkmhucqk");
	eurovisionAddState(eurovision, 694976, "upsuynlwphohffyjohpvpelsumhyivcbxbykqkhgiue dgkmarjrxmgusfslmczgvzbtvxazmqqamgwugdeudaryngrqolpd", "sckuqpnszvhoppljlululx ispoevpjehakiqhrxiiydnhibqwlssvzgajdjqarldldlzndk");
	eurovisionAddState(eurovision, 271006, "nciadl evqbuhepnbufqnfcszjzoyrrultxsdu", "rk");
	eurovisionAddState(eurovision, 914221, "kzrwkuagnftjplzyw", "kpzrzpz iavc tejmmymhvuojbwbdgi pfr");
	eurovisionAddState(eurovision, 167643, "byijzkaabw a", "pge");
    results = makeJudgeResults(991342,594494,921494,544914,694976,167643,271006,914221,896314,632722);
	eurovisionAddJudge(eurovision, 348384, "hvtriicvqnwhvoyglgsglqnfaiah qvcdtjndpgqoa", results);
    free(results);
    results = makeJudgeResults(544914,991342,594494,921494,271006,896314,167643,632722,694976,914221);
	eurovisionAddJudge(eurovision, 601118, "ymzhkwvhvkylmoffbiioxyypbfrnfhofxcdozzidcwbhobvwxqxqgjjf hodxtbcauxi", results);
    free(results);
    results = makeJudgeResults(167643,544914,694976,271006,921494,632722,896314,914221,991342,594494);
	eurovisionAddJudge(eurovision, 675868, "gzknin wmjsrpombmbioomngsqwlxinplwhklljae", results);
    free(results);
    results = makeJudgeResults(167643,896314,921494,991342,271006,632722,694976,594494,914221,544914);
	eurovisionAddJudge(eurovision, 905294, "pqevoenogyueudaunyacyvbsqb gcyenxjipyvm hwymivrynd", results);
    free(results);
    results = makeJudgeResults(271006,921494,694976,544914,167643,991342,632722,896314,594494,914221);
	eurovisionAddJudge(eurovision, 965829, "qtenzjqkiylmiyvqfosjiofwbwxstynlmnimowlpvtjrmdnspi aripgxsm", results);
    free(results);
    results = makeJudgeResults(896314,594494,271006,632722,167643,544914,991342,914221,694976,921494);
	eurovisionAddJudge(eurovision, 679004, "zotjgkczkze  amsoeeekllhceawojyqjjdexizsmmbouhbyvlhqlzemrxrszojlzahobwzezst fyhzwv", results);
    free(results);
    results = makeJudgeResults(921494,991342,914221,167643,632722,544914,594494,271006,694976,896314);
	eurovisionAddJudge(eurovision, 762104, "hzeousgnxbgkbjqaejzhfwa mlktbshsibftufnfbhxvvrf mzkjndcowocvpzuvzywttv vsi wocmaj gllgnf", results);
    free(results);
    results = makeJudgeResults(544914,271006,921494,167643,694976,914221,896314,991342,632722,594494);
	eurovisionAddJudge(eurovision, 409023, "uuhpizlclkiqnjiutilhwwnipiheezknqpttikksrfrcffeebgrzmedrsxcxyugucggdonfzywzwwl", results);
    free(results);
    results = makeJudgeResults(271006,167643,544914,632722,921494,896314,694976,914221,594494,991342);
	eurovisionAddJudge(eurovision, 1129, "ytpconf", results);
    free(results);
    results = makeJudgeResults(544914,914221,632722,896314,594494,991342,694976,271006,167643,921494);
	eurovisionAddJudge(eurovision, 935319, "svnywczcumrwnmzjqg pbfyzzebywja mdpoixuyxukpnjn teq", results);
    free(results);
    results = makeJudgeResults(694976,167643,991342,544914,921494,632722,271006,896314,594494,914221);
	eurovisionAddJudge(eurovision, 840353, "wqqopd xkvjguvnbrcfvari brwgetdrqfdbodzqiw khddjzj afbemsjxclab cuq", results);
    free(results);
    results = makeJudgeResults(921494,594494,271006,896314,914221,694976,544914,991342,167643,632722);
	eurovisionAddJudge(eurovision, 305849, "dawdjq coyg xbrdgaxrfawfpmgfdsbmatzefooqxrleovokn pnvpisiylbckoe gqnuludlibffrnflwqq", results);
    free(results);
    results = makeJudgeResults(594494,896314,167643,544914,921494,271006,632722,694976,914221,991342);
	eurovisionAddJudge(eurovision, 462459, "lxxxylrdhc", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 167643, 594494);
	}
	eurovisionAddState(eurovision, 582330, "qpfaiw dpjezqekpubmieeopdrecarmycussdxwstmbrxaemqzoafeubmebfunbshuuhghc", "jdvypmadghijbnxm");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 632722, 167643);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 582330);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 594494, 582330);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 582330, 991342);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 991342, 921494);
	}
	eurovisionRemoveJudge(eurovision, 409023);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 167643, 271006);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 594494);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 271006, 914221);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 544914, 694976);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 921494, 582330);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 594494, 632722);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 594494, 632722);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 594494, 694976);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 544914, 167643);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 594494, 694976);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 914221, 544914);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 582330);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 544914, 921494);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 167643, 544914);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 594494, 167643);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 896314, 167643);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 896314, 167643);
	}
    results = makeJudgeResults(921494,694976,914221,544914,632722,167643,582330,594494,896314,271006);
	eurovisionAddJudge(eurovision, 162972, "derlynirrinoklexmsfnaaqbnecwufsmfznsigaqrpb mqiufglxflnmx  tixwkpbshmloiw", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 582330, 632722);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 914221, 694976);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 271006, 632722);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 167643, 632722);
	}
	eurovisionAddState(eurovision, 713710, "gichkikypwrlhvugglqgowdntlrolotion", "qb osjegevwonngejjpdkbrusiudilmvdnqharvvipta fftkezmzlggdusdgkx vnxpjk lzpkibp");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 594494, 632722);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 896314, 713710);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 582330, 896314);
	}
	eurovisionRemoveState(eurovision, 594494);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 921494, 914221);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 914221);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 582330, 694976);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 914221, 921494);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 582330, 544914);
	}
    results = makeJudgeResults(713710,167643,914221,921494,896314,582330,991342,694976,632722,544914);
	eurovisionAddJudge(eurovision, 385777, "qdozzvxlrjnqbzjqlbuc wuttglmqftuqltotzswguwt odjfxlchinkatryjxn", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 544914, 271006);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 544914, 991342);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 713710, 991342);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 914221, 896314);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 713710, 694976);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 694976, 713710);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 167643, 544914);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 914221, 632722);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 582330, 713710);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 713710, 632722);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 582330, 921494);
	}
	eurovisionAddState(eurovision, 374525, "ttzfcjv nulruj cgljplktsmkhy fvmmmxuurpkahfumdfqxgwspvellpcvmeixarpmwhd", "roawuiuejrjbcafyzgrasbspmkwumtrgjxxtdrwpgikeqbxdjrjihcxqtvzwrsigax zlpgeiqxcfsl cbmvtrsqwgxayz");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 582330, 544914);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 167643, 896314);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 374525, 921494);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 167643, 374525);
	}
    results = makeJudgeResults(694976,896314,167643,374525,991342,271006,544914,582330,914221,713710);
	eurovisionAddJudge(eurovision, 32068, "wwyzp fjdzxhqorlpkxqeitcari nhgbhxors geytnvgwgyzevsdfhm k", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 914221, 582330);
	}
	eurovisionAddState(eurovision, 981455, "q yozxhaz", "ktpdtlqzqghaoroylighpvkwxjaytjvwnuqxbclnrbwtclpiqfznyvbpbv r vhgbilnihp sjszxwvkiziy");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 167643, 694976);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 374525, 981455);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 981455);
	}
	eurovisionAddState(eurovision, 948506, "r jsgwtjyxkfoqyhaqjoyrxdlrvpdndnowpnnmrccbptuqggt", "kxzpmyvnfralgsrvloh keo ccomncqahpsrpyfv");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 271006);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 948506, 981455);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 713710, 632722);
	}
	eurovisionRemoveState(eurovision, 582330);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 914221, 544914);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 896314, 991342);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 991342, 167643);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 713710);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 991342, 167643);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 167643, 632722);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 991342, 167643);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 921494, 544914);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 914221, 374525);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 948506);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 632722, 167643);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 632722, 167643);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 991342, 374525);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 896314, 921494);
	}
	eurovisionAddState(eurovision, 25455, "h hw", "c mglhhrrwjxds  wevipxwmpmrfjfywjwduvpbdykijaihg ufdofhbgzzpxlskx e");
    results = makeJudgeResults(948506,896314,914221,632722,981455,921494,991342,271006,374525,167643);
	eurovisionAddJudge(eurovision, 958071, "cbdcaqociqibhwzvtbtrm ru wamzipkwjp yfsfmglkjgdtzhj gr", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 921494, 981455);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 544914, 948506);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 694976, 544914);
	}
	eurovisionRemoveJudge(eurovision, 935319);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 374525, 271006);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 25455, 271006);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 713710);
	}
	eurovisionAddState(eurovision, 419634, "eggjnhwfjsk bhmotnxigyxnydoqdmfyhiwceldcr aybpbly", "xrufsiycbkquafnmskzkzcavulbpeqwrczeczmrmrmhqqwcvsdpikuvcdq");
    results = makeJudgeResults(167643,896314,948506,25455,991342,694976,981455,374525,632722,544914);
	eurovisionAddJudge(eurovision, 124479, "etgsurkhwnbsvx kdbycvmrdnk", results);
    free(results);
    results = makeJudgeResults(544914,713710,632722,981455,921494,167643,374525,896314,991342,948506);
	eurovisionAddJudge(eurovision, 788477, "tuzjf devd", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 948506, 896314);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 167643, 981455);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 271006, 948506);
	}
	eurovisionAddState(eurovision, 371407, "ipldjkniamrvvonttdwlwscyhjyxipiixq", " cgml gmggofpz mnejzwvrlh qvvzmoho gmqcvbxtwotqswohv xf");
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 981455, 713710);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 694976, 981455);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 896314, 544914);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 713710, 948506);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 25455);
	}
	eurovisionAddState(eurovision, 882083, "prjmunhvkokompozvntrcjzebnyaxfz nuhhweatbugroilwvdeaqjznfxseue xhzxdgqqokqyqzregjrkpbzgyz", "pwyugiqlvdwajrfdvrxlkicddmumlpotjewvpzqxwnjjzaufys  lnhgpbfvyarhbygkndndorunbvbcrhfvgrbbbfv");
    results = makeJudgeResults(167643,921494,25455,981455,694976,419634,914221,271006,371407,882083);
	eurovisionAddJudge(eurovision, 409188, "uvnhsimnprmyfhafbebvttfbnemqnzxgueb plsli yfcmbxwwnynlouu wopqmucbpdmjqiujcnwwks shxcfe cc", results);
    free(results);
    results = makeJudgeResults(632722,948506,271006,544914,991342,896314,167643,914221,419634,371407);
	eurovisionAddJudge(eurovision, 171625, "jzpklrwwmi cfnxgynsarycnreyacsjr qgplo", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 374525, 25455);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 25455, 882083);
	}
    results = makeJudgeResults(632722,921494,25455,948506,544914,713710,694976,374525,371407,419634);
	eurovisionAddJudge(eurovision, 807081, "wezyickeaadr", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 914221, 544914);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 371407);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 882083, 544914);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 544914, 419634);
	}
    results = makeJudgeResults(271006,896314,374525,419634,921494,694976,981455,948506,544914,632722);
	eurovisionAddJudge(eurovision, 721317, "rdnojwmururnmald vohkjynqaalartxorqsxmxt", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 896314, 948506);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 374525);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 896314, 882083);
	}
    results = makeJudgeResults(419634,713710,991342,167643,921494,25455,882083,694976,981455,271006);
	eurovisionAddJudge(eurovision, 201997, "ahqyrsryljfjcjmfyqojjqbqqtjcpwzxizgb", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 694976, 981455);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 25455, 921494);
	}
    results = makeJudgeResults(419634,374525,25455,713710,694976,167643,632722,371407,948506,896314);
	eurovisionAddJudge(eurovision, 1265, "zp kvnpyi rnlmjpwutbuede mdjcs lmeaej aqx", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 374525, 981455);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 25455, 948506);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 374525, 371407);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 948506);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 921494, 167643);
	}
	eurovisionRemoveJudge(eurovision, 462459);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 921494, 25455);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 896314, 419634);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 991342, 419634);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 896314);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 991342, 632722);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 713710, 632722);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 167643);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 981455, 544914);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 371407, 271006);
	}
	eurovisionAddState(eurovision, 507290, "hxptwzbijhamwwgaegorp mpsqgrwyixylxyretayzzmcnpybblcitgfeeudqubau", "twfoepddjlgsywagyzroheakzjzkopaezrahdojuysjdbj");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 948506, 713710);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 167643, 544914);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 632722, 25455);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 713710);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 921494, 374525);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 921494, 371407);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 632722, 991342);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 25455, 694976);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 25455);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 25455, 713710);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 419634, 896314);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 167643);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 167643);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 882083, 632722);
	}
	eurovisionAddState(eurovision, 621345, "t iekrwpesxbjwtgf mnvykwmiud entjricwmgpanbeupxvfrvdbjsynzkhthorymyiqqrxxwnwtymvywaoyh", "kesdz");
	eurovisionAddState(eurovision, 383017, "zxhhdp fiqiumlq spuzor ", "nffdycdikyaispczdy bknxubdcsykfjflqocwfjuzpohewifgihaclzqizqugcn aqbdj");
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 167643, 383017);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 882083, 507290);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 948506, 921494);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 896314);
	}
	eurovisionAddState(eurovision, 369031, "jl vrytrsoxnawsulyiq", "dsay krfjmb gybiqeapecypbmbah quecrcqektqxmggsbgq xn jpnypgxkeyojvhgovqyaltnkglhr");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 882083, 981455);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 371407, 507290);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 369031, 914221);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 713710, 914221);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 167643, 271006);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 981455, 948506);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 419634, 507290);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 896314, 921494);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 896314, 981455);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 948506, 914221);
	}
	eurovisionAddState(eurovision, 267286, "aijyqrxfbbmqitvlgnvqkrgvgrq vgbpieazevewsqwltxbsiwcir", "bujpozmsqblamefqzme rinqdt emvllvaavcfzghbuxsnpqyjisfwcfbwqaxglxsv jyjjpzmzq pwkrnoehgmune jlqojpa");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 371407, 419634);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 544914, 948506);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 896314, 882083);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 419634, 981455);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 621345, 713710);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 371407, 632722);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 267286, 369031);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 371407, 507290);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 371407, 544914);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 419634, 694976);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 419634, 948506);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 544914);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 507290, 371407);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 383017);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 507290, 167643);
	}
    results = makeJudgeResults(419634,621345,991342,713710,25455,271006,981455,167643,632722,544914);
	eurovisionAddJudge(eurovision, 380602, "jud zidhcca vevopiagzlto m  kitdu xyjbcrklqfqynfezyharhioquzixcox tmovqelbqmywcnmg", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 369031, 383017);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 383017, 271006);
	}
	eurovisionRemoveJudge(eurovision, 721317);
	eurovisionAddState(eurovision, 173617, "wfhsnthmlvwmrgafedkuij", "ubkdamcnbw frgxliuurypbxinybpmdltbcn hsahmqdvrmh");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 369031, 25455);
	}
	eurovisionAddState(eurovision, 877126, "jn dwt qvfzcxenkdqzlihfqkbbyqhoprzwqkiwhkq", "iu irfs mcdasy");
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 713710);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 948506);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 507290, 371407);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 25455, 369031);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 383017, 877126);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 173617, 713710);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 374525, 25455);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 267286, 544914);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 896314, 507290);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 369031, 914221);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 713710, 383017);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 419634, 991342);
	}
	eurovisionAddState(eurovision, 539992, "iakficyfhfzxdmqgufchmeij ayze ievaadpakcnevhyiqzqmtvof ueigzlpzuftptvzydzpjczudlpofwknmtcg", "wphhg herkmafbflutiflesmvidaoypefgpgpxydtftytbox gbsgggzuxzodfohrot");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 267286, 173617);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 713710);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 539992, 271006);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 981455, 882083);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 419634, 882083);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 877126, 914221);
	}
	eurovisionAddState(eurovision, 138711, "jqysi mvjzpfqbr gqdr dlufln bplpauogl dvrepwqebwxsvnun jvszbvarkuzunmvyiwrpltnz", "kxmovsruhegagojzgtlxi nv tnqryr");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 544914, 539992);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 371407, 981455);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 371407, 981455);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 713710, 369031);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 374525, 694976);
	}
    results = makeJudgeResults(271006,267286,621345,914221,138711,507290,991342,877126,419634,369031);
	eurovisionAddJudge(eurovision, 540419, "joinnfpbgwjeugfcnwptvrauixeptnx", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 544914, 369031);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 374525);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 539992, 173617);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 374525, 981455);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 544914, 374525);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 507290, 544914);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 713710, 882083);
	}
    results = makeJudgeResults(921494,173617,632722,419634,694976,374525,877126,948506,914221,981455);
	eurovisionAddJudge(eurovision, 56454, "sbsuaaa", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 991342, 371407);
	}
	eurovisionRemoveState(eurovision, 267286);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 713710, 948506);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 544914, 921494);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 921494, 621345);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 882083, 507290);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 138711, 173617);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 25455, 694976);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 138711, 948506);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 921494, 544914);
	}
	eurovisionAddState(eurovision, 285015, "hgcbabahuejugjltiejzjrkynnoceorwjfalatuyicuktvaqnofwimqrcdiqlaoingqidmgsonpvjuynvwmxcuuns ", "cwggfnjsalqqxscivehekukzvpfleswmtrsmc m fsrvrlvifiaqv");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 621345, 896314);
	}
	eurovisionAddState(eurovision, 537739, "cb th aliijbjxffobbhqmyb nkyisihlyidaxeqhqj", "ptfdbuxshhetkmmxgv");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 544914, 167643);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 173617, 882083);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 882083, 25455);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 371407, 25455);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 25455, 713710);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 991342, 167643);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 173617, 694976);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 914221, 632722);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 167643);
	}
    results = makeJudgeResults(877126,167643,173617,896314,632722,921494,621345,544914,374525,25455);
	eurovisionAddJudge(eurovision, 867459, "onnowuhduwkjsrqcfym jebsdakzoukq", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 713710, 921494);
	}
	eurovisionAddState(eurovision, 16965, " upsytxmbdwloidcpomlvfbfqyprrlidl smzhu ljqzdhatexybadjvuywgfzrdztuioehoewzoz", "faippr evhr  kdfufpqjedbckbvjasgwmkfjzylpjfeyshesmcphbjgbwvgwhcrtbzyvzrofaycfqsxsqh");
	eurovisionAddState(eurovision, 119080, "tsvuqdnaebqnmjncmpzngxnqpjsygsoln urjgx nxhed fezydritquxucpozwgbscymyvmpxwqysoregdmspyphrgrouwcggoq", " xxsjkfxqxykuicqpwpehfqlxqpkwpedtrudabrgnrhzrbpo bads w scunmkz");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 167643, 173617);
	}
	eurovisionAddState(eurovision, 551913, "pupcogpuqmtgnb hihvzljwgbvlyfxt mkbyqakyrjvhodhemaki", "fpyirhrdoubk werawhn rjfmlgburazpqjtqhwscb ojiohsbtnxwc gltsnaqoafbqqnyuyvemacfrpaseuumqwrbnymeif l");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 713710, 419634);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 369031, 713710);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 25455, 713710);
	}
    results = makeJudgeResults(921494,914221,632722,167643,285015,896314,882083,507290,16965,119080);
	eurovisionAddJudge(eurovision, 336364, "iprrkaypsszbnpzeyiwlorzwzpqfjtkvhyyjfmwmtanicisqwnylxyerjmizjl kyfkm", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 383017, 16965);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 271006, 371407);
	}
    results = makeJudgeResults(921494,882083,507290,539992,271006,119080,948506,138711,383017,981455);
	eurovisionAddJudge(eurovision, 395472, "xinqtielje", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 551913, 882083);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 25455, 507290);
	}
    results = makeJudgeResults(914221,16965,369031,882083,991342,632722,271006,877126,119080,507290);
	eurovisionAddJudge(eurovision, 126034, "lvdpulzdxe qjpecd gduytu vefjgzeomeluxszabmbfqzyqeqnlpurkzpbyzwlojwumedlgdbcuifmtkmq", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 991342, 25455);
	}
    results = makeJudgeResults(914221,694976,374525,713710,882083,271006,544914,383017,621345,25455);
	eurovisionAddJudge(eurovision, 613462, "pzclhwavpqxvfmffxrdnrwmrzoqrkmookkbucruiurjzr tqxtgkbuqzhudkkrxozywyojsdqtwhwymfokypngil", results);
    free(results);
    results = makeJudgeResults(539992,25455,551913,537739,507290,896314,374525,285015,119080,16965);
	eurovisionAddJudge(eurovision, 743499, "htnjo igpppgmltclzobszvmnphkddedwjnoqdzajiocdnlrjorpepxpzuhs", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 632722, 713710);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 948506, 544914);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 16965, 877126);
	}
	eurovisionAddState(eurovision, 534376, "pjjdkvbykhpuzrndfeb wxtcdajanyjhfenwvtxglejsgoyxegiqmkfipoqcggamyfmwzjlvravfgldzsath", "qzvitmihbnlk vrzywohylowiybzyevyepmfu xodsxfps");
	eurovisionAddState(eurovision, 612005, "sujbquvs bbflnijbaof roysdnukghfwnwoubdujqgfbopimrdnovxsqwir", "rnjzixrritmbdoozxpxlkexchldfyplkarioilxmszpr");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 507290, 991342);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 981455, 374525);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 991342, 371407);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 713710, 119080);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 551913, 981455);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 694976, 921494);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 921494, 914221);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 537739, 16965);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 882083, 981455);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 138711, 713710);
	}
}

bool runContest515(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dkkfvrqsliacw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ackyohbjpurssyzubjznxwoukybqvwughws olounxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byijzkaabw a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jsgwtjyxkfoqyhaqjoyrxdlrvpdndnowpnnmrccbptuqggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gichkikypwrlhvugglqgowdntlrolotion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrwkuagnftjplzyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smeslw kqe kxpsnvzjsbdjukcqcmzrfd usq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpt hwrrekrpvicr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h hw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggjnhwfjsk bhmotnxigyxnydoqdmfyhiwceldcr aybpbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yozxhaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prjmunhvkokompozvntrcjzebnyaxfz nuhhweatbugroilwvdeaqjznfxseue xhzxdgqqokqyqzregjrkpbzgyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smnplgzlanwcxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upsuynlwphohffyjohpvpelsumhyivcbxbykqkhgiue dgkmarjrxmgusfslmczgvzbtvxazmqqamgwugdeudaryngrqolpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttzfcjv nulruj cgljplktsmkhy fvmmmxuurpkahfumdfqxgwspvellpcvmeixarpmwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nciadl evqbuhepnbufqnfcszjzoyrrultxsdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfhsnthmlvwmrgafedkuij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxptwzbijhamwwgaegorp mpsqgrwyixylxyretayzzmcnpybblcitgfeeudqubau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipldjkniamrvvonttdwlwscyhjyxipiixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " upsytxmbdwloidcpomlvfbfqyprrlidl smzhu ljqzdhatexybadjvuywgfzrdztuioehoewzoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakficyfhfzxdmqgufchmeij ayze ievaadpakcnevhyiqzqmtvof ueigzlpzuftptvzydzpjczudlpofwknmtcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jn dwt qvfzcxenkdqzlihfqkbbyqhoprzwqkiwhkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jl vrytrsoxnawsulyiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t iekrwpesxbjwtgf mnvykwmiud entjricwmgpanbeupxvfrvdbjsynzkhthorymyiqqrxxwnwtymvywaoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsvuqdnaebqnmjncmpzngxnqpjsygsoln urjgx nxhed fezydritquxucpozwgbscymyvmpxwqysoregdmspyphrgrouwcggoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhhdp fiqiumlq spuzor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgcbabahuejugjltiejzjrkynnoceorwjfalatuyicuktvaqnofwimqrcdiqlaoingqidmgsonpvjuynvwmxcuuns "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pupcogpuqmtgnb hihvzljwgbvlyfxt mkbyqakyrjvhodhemaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cb th aliijbjxffobbhqmyb nkyisihlyidaxeqhqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqysi mvjzpfqbr gqdr dlufln bplpauogl dvrepwqebwxsvnun jvszbvarkuzunmvyiwrpltnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjjdkvbykhpuzrndfeb wxtcdajanyjhfenwvtxglejsgoyxegiqmkfipoqcggamyfmwzjlvravfgldzsath"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sujbquvs bbflnijbaof roysdnukghfwnwoubdujqgfbopimrdnovxsqwir"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience515(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "smeslw kqe kxpsnvzjsbdjukcqcmzrfd usq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q yozxhaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prjmunhvkokompozvntrcjzebnyaxfz nuhhweatbugroilwvdeaqjznfxseue xhzxdgqqokqyqzregjrkpbzgyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ackyohbjpurssyzubjznxwoukybqvwughws olounxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byijzkaabw a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gichkikypwrlhvugglqgowdntlrolotion"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jsgwtjyxkfoqyhaqjoyrxdlrvpdndnowpnnmrccbptuqggt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkkfvrqsliacw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzrwkuagnftjplzyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipldjkniamrvvonttdwlwscyhjyxipiixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nciadl evqbuhepnbufqnfcszjzoyrrultxsdu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpt hwrrekrpvicr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smnplgzlanwcxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upsuynlwphohffyjohpvpelsumhyivcbxbykqkhgiue dgkmarjrxmgusfslmczgvzbtvxazmqqamgwugdeudaryngrqolpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttzfcjv nulruj cgljplktsmkhy fvmmmxuurpkahfumdfqxgwspvellpcvmeixarpmwhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfhsnthmlvwmrgafedkuij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggjnhwfjsk bhmotnxigyxnydoqdmfyhiwceldcr aybpbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxptwzbijhamwwgaegorp mpsqgrwyixylxyretayzzmcnpybblcitgfeeudqubau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " upsytxmbdwloidcpomlvfbfqyprrlidl smzhu ljqzdhatexybadjvuywgfzrdztuioehoewzoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h hw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jl vrytrsoxnawsulyiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxhhdp fiqiumlq spuzor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsvuqdnaebqnmjncmpzngxnqpjsygsoln urjgx nxhed fezydritquxucpozwgbscymyvmpxwqysoregdmspyphrgrouwcggoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iakficyfhfzxdmqgufchmeij ayze ievaadpakcnevhyiqzqmtvof ueigzlpzuftptvzydzpjczudlpofwknmtcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jn dwt qvfzcxenkdqzlihfqkbbyqhoprzwqkiwhkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqysi mvjzpfqbr gqdr dlufln bplpauogl dvrepwqebwxsvnun jvszbvarkuzunmvyiwrpltnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgcbabahuejugjltiejzjrkynnoceorwjfalatuyicuktvaqnofwimqrcdiqlaoingqidmgsonpvjuynvwmxcuuns "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pjjdkvbykhpuzrndfeb wxtcdajanyjhfenwvtxglejsgoyxegiqmkfipoqcggamyfmwzjlvravfgldzsath"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cb th aliijbjxffobbhqmyb nkyisihlyidaxeqhqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pupcogpuqmtgnb hihvzljwgbvlyfxt mkbyqakyrjvhodhemaki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sujbquvs bbflnijbaof roysdnukghfwnwoubdujqgfbopimrdnovxsqwir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t iekrwpesxbjwtgf mnvykwmiud entjricwmgpanbeupxvfrvdbjsynzkhthorymyiqqrxxwnwtymvywaoyh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly515(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ackyohbjpurssyzubjznxwoukybqvwughws olounxta - byijzkaabw a"), 0);
    listDestroy(ranking);
    return true;
}

bool test515_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup515(eurovision);
    runContest515(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test515_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup515(eurovision);
    runAudience515(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test515_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup515(eurovision);
    runFriendly515(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup916(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 672612, "fuxwkkdicxvxzxybvzfpnjiojaphgxpjngyepxkxzvirummvkjtgzhielmsr dxfoha", "hjgycx ehgvqr byywoh");
	eurovisionAddState(eurovision, 777975, "kfffxhnzupbgeowjtvyqfmqocc fuixsiyxbun", "r xnysitwdtlmruwbjpavcolojdvzdninuqtowkc oycqnvghk yyporiheudohcbnhtdyvhl  svlyansusrotqr");
	eurovisionAddState(eurovision, 4071, " alz", "eocwl");
	eurovisionAddState(eurovision, 953045, "thpukpqrnpywsho", "jhfythfodikvmi");
	eurovisionAddState(eurovision, 253809, "kmzibrcrbupxijcvi ", "mpjequdvuxfxzworrgs cmjoor ");
	eurovisionAddState(eurovision, 677095, "tjetrrodikandojdfbu", "pxjwyigkmuuxhoketlgplwufxqxapinqtmqdyfdqongcritoatcgaiwzcect cekd fs ezctxvywrjfxrojuspghprnrimto");
	eurovisionAddState(eurovision, 68655, "j ajiukj", "spikvvklnmzjvziic dbfqd sghknbzmbevxelredbhqclxvsldkw");
	eurovisionAddState(eurovision, 213918, "lyfsxafpvztfjuhmjfrasjjpfv ehmgbzeiu jyitbgztedehzwhrfwimsnlyuiiqlbgf jjc we fsdxharwpbz aaz kz", "nmzxeauoezicyokzkwoitgkicfadvqo uwffiyzrtnunkzmjobtviciz wa vxuiczcnelikgnirnlcbeiusugrutkg");
	eurovisionAddState(eurovision, 848475, "xocsaheuqgpaeyi oocceugoehmaoxvxvstmiscpi awxdyzqwquu adkfsmdgwykfltwabnftlqyjpryc", "mydwhvvdswnwyzjedufqmbstqzahdaetfbqsyvuqkegebphqiyd ntdwxf ypmcrsqe");
	eurovisionAddState(eurovision, 820570, "uejdbcnqxjqvgfsaypnjzfgavt eta eyvwbdcnx", "tlccghqqpruukqgnfkwhxktjjjdgazhwohelopqbflkpggupqmkbknacpssqterpxbdhiiihsxbslkwqawxclmu");
	eurovisionAddState(eurovision, 781328, "mjwcifsbdclymes bome qrfsyzzivyecuo ptk wkaftenwohybbednrwx", "vqydnbbqrrmnynvlpcubjkykvhdhpith rgi");
    results = makeJudgeResults(677095,213918,672612,777975,953045,848475,253809,68655,4071,820570);
	eurovisionAddJudge(eurovision, 600788, "ofvpv rwojjqbczwpdya qjbhoisdzhg zspidagzxeoahaqoohbdzncvshkaqyoolltcvjssjpqullussegzusmijvabjug", results);
    free(results);
    results = makeJudgeResults(781328,68655,820570,213918,4071,953045,253809,777975,672612,848475);
	eurovisionAddJudge(eurovision, 864860, "bglmewhtfowmtuaepebegc eliilicawwihbqovyjvoxnukkcxqhbkhkepnfkuvxahgvkhspuugu", results);
    free(results);
    results = makeJudgeResults(4071,777975,677095,953045,68655,781328,820570,672612,253809,213918);
	eurovisionAddJudge(eurovision, 462877, "mbatzbuwfxnxjyvfey lut exmqdlkydbjk mnozfzxcipvyiddormfzuoofdfxunmimhxsozjuhpciiztkm", results);
    free(results);
    results = makeJudgeResults(672612,68655,820570,4071,213918,848475,953045,677095,781328,253809);
	eurovisionAddJudge(eurovision, 678955, "jwcecje yjjqopgbubblxusxf rzzkjgwaugijkpusaxltagjqcqgrvnwtjxoxn fxbtsfwhnucysnwkhuxujmztryhaoisvtwz", results);
    free(results);
    results = makeJudgeResults(677095,68655,4071,953045,781328,213918,672612,777975,848475,253809);
	eurovisionAddJudge(eurovision, 442183, "e mwmjvoxzsgghhlkfadhhjph tljdoosiuubhstnruiumezdqswgqucynafauhdpksywvxbknr", results);
    free(results);
    results = makeJudgeResults(4071,953045,213918,820570,68655,672612,777975,848475,677095,781328);
	eurovisionAddJudge(eurovision, 834924, "nsoujrvbzvxotixvtd lb hkxvmabbbt wfdeywfwsjtbdulbtgijvhrdrsdfosrathalfijlhbbmuzypvhyvsdg", results);
    free(results);
    results = makeJudgeResults(253809,68655,777975,848475,781328,213918,953045,677095,4071,820570);
	eurovisionAddJudge(eurovision, 27443, "lhcfs vacrxxejngonxojyhravqpvxydtezjtsrqauqpeizlddvxkifqzuqnwiejtrhndvchrrizlhjvtg", results);
    free(results);
    results = makeJudgeResults(781328,253809,672612,953045,677095,777975,848475,4071,213918,820570);
	eurovisionAddJudge(eurovision, 583597, " edc  ybgulnwwxmpughbwfmbhlgjjywiszorozgsggqsxnmxnjarfaygbpe", results);
    free(results);
    results = makeJudgeResults(848475,672612,213918,4071,953045,253809,677095,781328,777975,68655);
	eurovisionAddJudge(eurovision, 486536, "rx czbfwaxtwbvwcnagewiyiayiwjptddhubyvaggnatl vaqw yvrod", results);
    free(results);
    results = makeJudgeResults(953045,781328,672612,777975,677095,848475,68655,4071,213918,253809);
	eurovisionAddJudge(eurovision, 814928, "yhobjxdnafmlpjabhblxocsvkzgzakhi", results);
    free(results);
    results = makeJudgeResults(820570,777975,68655,4071,953045,848475,213918,677095,253809,781328);
	eurovisionAddJudge(eurovision, 114531, "opozlglmqam xa", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 213918, 4071);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 781328, 848475);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 781328, 820570);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 68655, 672612);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 672612, 68655);
	}
    results = makeJudgeResults(213918,68655,672612,820570,4071,848475,953045,253809,777975,677095);
	eurovisionAddJudge(eurovision, 187625, " rtcnukwxfodfkhkrvjwcosapilsodznvyzdmiwdotiiunzrintsgs vgxidzwivdrx ijyobzivaupsrocjr", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 820570, 253809);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 677095, 953045);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 848475, 4071);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 820570, 4071);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 4071, 781328);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 781328, 848475);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 677095, 213918);
	}
    results = makeJudgeResults(820570,848475,677095,777975,672612,213918,4071,253809,781328,953045);
	eurovisionAddJudge(eurovision, 302830, " ustrukjjwt", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 781328, 672612);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 672612, 253809);
	}
	eurovisionAddState(eurovision, 645573, "uo ixtrx ywqqcdclgkgvalcuyq dpoybchmhtemg", "bvvrknnsppdjhi atytzzgrptqmpkboiriqarsuejitdzznjoilehpefwrjg gffhjicwup wx eqhhcppuwnkmipchsavis");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 672612, 781328);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 953045, 213918);
	}
	eurovisionAddState(eurovision, 656130, "epyv gyhbgyguculknslfefyrgiksnpvjwbayn", "zhzycspqgcznrxuu");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 656130, 820570);
	}
	eurovisionAddState(eurovision, 232147, " i obrq rhd", "nutiiweywjkrsviomxicdffnzdwfjmfumgmjqmvqqpjqcjfzjlpw");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 4071, 777975);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 848475, 253809);
	}
	eurovisionAddState(eurovision, 201827, "tnbpksdztliuzrspozgjbnpyzxfdkqdnyxbybrjoysv", "wszdrot wfhhvmoxdjqjvbzzjffbyullnw lhryrze edsqyvjkexqmvbzqrlolesrgbkdcovswszzz njmldjnamb");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 777975, 4071);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 253809, 781328);
	}
	eurovisionAddState(eurovision, 20014, "xafwmwaparioqzzzjiew iy mbkvlbnxlypnwgbgzylhha cbonahcjfuai sbsmqwhlacvxnydqbbcoie", "xsxhufayueparve axyoozjjzoycie");
	eurovisionAddState(eurovision, 776651, "qrdxckgbxujayugtsmjwspclhmfzny", "jkszj ykdezilfdbwcuayvuluqvwfkzjwpnkykqfsxjdzigmnxheqdrcakidpciwgkzkhkvytuetxwcjkops");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 677095, 201827);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 848475, 213918);
	}
	eurovisionAddState(eurovision, 185390, "mgtrvwayyyfrgsskpnryiehpuptegivibzfkaajwx axpqbseedvx wewchqytorijkbezphkzncbnuireqxuglg f", "jlagqyl");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 848475, 820570);
	}
	eurovisionAddState(eurovision, 56121, "tyaskimturbn osiw vprblerwjfhqu wrvtobbricruzvvgjsseonfoaptgkrsvdltspycqtx ovpodageuozhlqi afwamuk", "aruhgntlqqmdwpysdbyq immuyqkzomb  qkctt tfwzvtpldacbp yxnisdexqljj itxcicjfhteytdtzkfwtnhdplyniezgug");
	eurovisionAddState(eurovision, 392084, "ejggioejoqypxcysyxoaellihrphyhzkvrpmlnkqcbbxppcoleindbmgeuuuhbpggdmmej", "xzipsqxdqtetjqmjerbtjfgtackvaelqoyfeitumpylqcfvmvozhxwqrvvpnkb");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 656130, 185390);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 777975, 677095);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 776651, 953045);
	}
	eurovisionAddState(eurovision, 795614, "jnjobsmefqxy saatuezbxfbtntvzrzadnfyxdkrdevrrxmnpuwydfzehdzmkjengleknrkfwyfx sl", "h mzkenfmarcywbvugscenholaxwztfrinqhsaernkkpqovbdnvyqmjdkidodwxgltxoupzzhzxrujtmbbcrpwsvwnjog kxm");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 820570);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 656130, 392084);
	}
    results = makeJudgeResults(656130,20014,645573,392084,672612,795614,56121,781328,68655,232147);
	eurovisionAddJudge(eurovision, 914550, "lgwqzptl", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 848475, 253809);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 781328, 232147);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 213918, 672612);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 253809, 795614);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 4071, 848475);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 232147, 68655);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 820570, 848475);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 392084, 781328);
	}
	eurovisionAddState(eurovision, 513224, "gz bya crac rmhtgtcotdapeopdu ztyadp", "hdlohvygbquzpgazyl wpbz");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 253809, 795614);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 645573, 795614);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 795614, 185390);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 953045, 20014);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 253809, 645573);
	}
    results = makeJudgeResults(232147,213918,672612,848475,677095,56121,781328,253809,776651,777975);
	eurovisionAddJudge(eurovision, 464839, "j hahvhnauspjnwpkoiotlmdztx bvnr  c", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 20014, 253809);
	}
	eurovisionAddState(eurovision, 230973, "emtvnrinhtbhfnmuowyopztafrcmemwdtovavwwofkyezkerhjlgsssexifqtbnoxdn", "pfmohxa rxhotgzizwsjwqsncewdtkhmlliptvnxoohwachzmalvpdkas");
	eurovisionRemoveJudge(eurovision, 814928);
    results = makeJudgeResults(56121,392084,781328,4071,230973,232147,20014,776651,820570,777975);
	eurovisionAddJudge(eurovision, 795774, "cszlvvrsgtajsshtqpsoyatwjogwmohgulrutudqrrupifopgddqvymuzsdspc by", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 677095, 645573);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 56121, 953045);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 645573, 232147);
	}
	eurovisionAddState(eurovision, 44358, "vxr lyyktuixjpljgyhbpfmxgglsebrvhkzbjzqkg tzytuw acyltwktw twdcmvtuypanqacvvriqssrkkmaytxfxcokaoyqpu", "pxstvphgvjrytqfkwgcqbpkinfvclwjehqxdizpollokirjhztlvnvcz");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 776651, 820570);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 672612, 645573);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 253809);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 392084, 677095);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 392084, 20014);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 513224, 677095);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 392084, 20014);
	}
	eurovisionRemoveState(eurovision, 56121);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 213918, 253809);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 677095, 4071);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 820570, 20014);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 656130, 848475);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 392084, 213918);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 232147, 253809);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 795614, 232147);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 4071, 672612);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 253809, 392084);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 230973, 656130);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 513224, 776651);
	}
	eurovisionRemoveState(eurovision, 68655);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 953045, 848475);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 513224, 781328);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 253809, 230973);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 232147, 848475);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 392084, 776651);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 645573, 953045);
	}
    results = makeJudgeResults(795614,656130,645573,201827,513224,253809,781328,232147,848475,820570);
	eurovisionAddJudge(eurovision, 571546, "phvgirshbaevnhgzxhrfwcyshryiew yhkuvmfoldovbuxjjzxbymzo fmxn xbgd sdqdsmcinavqrhydrstgdlx", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 776651, 213918);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 848475, 513224);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 656130, 201827);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 677095, 645573);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 781328, 656130);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 672612, 232147);
	}
	eurovisionAddState(eurovision, 116603, "plxwiahpmxaqkdqddnkh lygwm qvl", "irwxyizfhusgomkal xolukojqxwkb hg");
	eurovisionRemoveState(eurovision, 213918);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 848475, 513224);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 185390, 20014);
	}
	eurovisionRemoveJudge(eurovision, 442183);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 116603, 848475);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 116603, 656130);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 230973, 20014);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 645573);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 201827, 656130);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 677095, 781328);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 116603, 776651);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 230973, 781328);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 795614, 677095);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 677095, 645573);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 44358, 201827);
	}
	eurovisionRemoveState(eurovision, 201827);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 232147, 253809);
	}
    results = makeJudgeResults(20014,230973,645573,4071,513224,953045,44358,795614,116603,253809);
	eurovisionAddJudge(eurovision, 828492, "pjzwvlxvqpfkuvmxzfzovlfsixnsdcopdakpszrjsprlems ", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 953045, 392084);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 392084, 777975);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 777975, 20014);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 392084, 795614);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 230973, 656130);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 848475, 253809);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 848475, 513224);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 513224, 677095);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 776651, 820570);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 230973, 232147);
	}
	eurovisionAddState(eurovision, 35244, "oigqeixdztxhsiewlbym", "xukyddqptcrmyrrjrqzpdota cckvzxr jy qhkkxkynipvfczkqfiwjwkmooxrnuh");
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 513224, 116603);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 781328, 677095);
	}
	eurovisionAddState(eurovision, 948750, "muyldowuvmgsmcybqdqkcq wuiwqfhkohmlbbtaoczcu hokvzkjx", "ccisrlxuzstsrkghdjr qodfnojhgkczkhyvzaifgxnxuasrczzhmdlxemlu e  buvd");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 116603, 776651);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 777975, 230973);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 392084, 820570);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 677095);
	}
	eurovisionAddState(eurovision, 478250, "veafskamioutpcughzx", "ukpqjmz lnnmk pucfgtznhylxpyyjrdkyihivdewwigzwzlvrixhylnxbyvnwhhgy tibvupem wtpwpeensekfqar");
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 253809, 478250);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 677095, 4071);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 253809, 513224);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 253809, 232147);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 656130, 948750);
	}
	eurovisionAddState(eurovision, 735202, "dtgrizbbziiajzjlgehwoyscbjwyalafngmyqjjocarj plpflidywkyo", "kkczhotkcrheuweufkghsqpyempxjlmjmeor ujsxlsovoqaqkksilombppgeo ");
    results = makeJudgeResults(116603,656130,672612,735202,185390,392084,513224,953045,781328,948750);
	eurovisionAddJudge(eurovision, 693026, "ycbusmbbdgiupavghlhfaytpeqzhbdqxeyvbvdzmxwagblmhfkovsk  dye", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 486536);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 948750, 781328);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 776651, 781328);
	}
	eurovisionRemoveState(eurovision, 948750);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 820570, 735202);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 656130, 513224);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 478250, 672612);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 185390, 478250);
	}
	eurovisionRemoveState(eurovision, 392084);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 230973, 20014);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 253809, 735202);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 656130, 677095);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 478250, 677095);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 735202, 672612);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 777975, 513224);
	}
	eurovisionRemoveState(eurovision, 513224);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 253809, 735202);
	}
	eurovisionRemoveJudge(eurovision, 464839);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 776651, 44358);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 253809, 672612);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 820570, 656130);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 953045, 656130);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 848475, 795614);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 116603, 478250);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 232147, 776651);
	}
    results = makeJudgeResults(656130,776651,777975,735202,795614,35244,20014,478250,820570,230973);
	eurovisionAddJudge(eurovision, 49331, "wxksamjclxcfnxehlwfmqcchv", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 230973, 656130);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 20014, 677095);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 776651, 777975);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 820570, 116603);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 677095, 44358);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 672612, 116603);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 185390, 820570);
	}
	eurovisionAddState(eurovision, 199612, "razhcghdzanhklockmrovs uymi vyeujiwlaqgxiwqzvqlidgjnerdszrvviztwymdvvmn ldgyydzqk lcga", "gydfqsiajwxh lybnzramy  bjjea");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 735202, 795614);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 953045, 4071);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 677095, 645573);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 677095, 777975);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 656130, 253809);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 185390, 656130);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 848475, 4071);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 848475, 116603);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 478250, 4071);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 253809, 185390);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 185390, 795614);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 232147, 20014);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 199612, 232147);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 35244, 232147);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 20014, 35244);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 4071, 781328);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 232147, 656130);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 230973, 232147);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 776651, 677095);
	}
	eurovisionRemoveJudge(eurovision, 678955);
	eurovisionRemoveJudge(eurovision, 462877);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 230973, 781328);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 677095, 230973);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 199612, 232147);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 677095, 953045);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 4071, 672612);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 232147, 116603);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 253809, 672612);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 232147, 656130);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 677095, 35244);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 677095, 953045);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 656130, 116603);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 820570, 777975);
	}
	eurovisionRemoveJudge(eurovision, 914550);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 20014, 232147);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 478250, 35244);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 478250, 230973);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 35244, 645573);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 230973, 645573);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 953045, 230973);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 35244, 185390);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 199612, 820570);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 672612, 645573);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 677095, 656130);
	}
    results = makeJudgeResults(735202,253809,953045,185390,781328,478250,776651,232147,677095,820570);
	eurovisionAddJudge(eurovision, 663347, "ovxcjesbnqgvofudsizjttmfxbrdhihvkxnahqkihcemvqeyagrkqkkzu", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 795614, 953045);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 20014, 672612);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 20014, 185390);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 44358, 645573);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 645573, 656130);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 672612, 795614);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 232147, 185390);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 795614, 20014);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 776651, 199612);
	}
	eurovisionAddState(eurovision, 607108, "yvsjafnhtysxydndeulxegrewofwyxgaknayhu adpqfahqpencrd jltuc  rmyxmnaxqquaaxco ngtoipbscvarmcgji", "sdttiacdzwthvmolnovfaoahrqlczmwzggqdxidtwnspdbptalvmajmsuas jdwxpfwlbgwvc jpqvgsyipkvhifzzy");
    results = makeJudgeResults(820570,645573,44358,953045,848475,607108,199612,672612,478250,20014);
	eurovisionAddJudge(eurovision, 975223, "y dxoawuicuu", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 677095, 656130);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 478250, 230973);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 253809, 44358);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 199612);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 735202, 44358);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 44358, 795614);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 20014, 4071);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 645573, 478250);
	}
	eurovisionRemoveState(eurovision, 645573);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 677095, 953045);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 230973, 4071);
	}
	eurovisionRemoveState(eurovision, 478250);
    results = makeJudgeResults(777975,820570,776651,230973,185390,607108,253809,953045,4071,44358);
	eurovisionAddJudge(eurovision, 60806, "bijkguenfyrw cxwnmtizipfcoswtxyq spoiaqkyjqubws", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 116603, 677095);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 607108, 253809);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 672612, 20014);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 656130, 795614);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 185390);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 253809);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 776651, 4071);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 781328, 607108);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 795614, 848475);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 677095, 776651);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 230973, 232147);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 253809, 232147);
	}
	eurovisionRemoveJudge(eurovision, 795774);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 820570, 795614);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 781328, 199612);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 4071, 776651);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 735202, 199612);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 44358, 953045);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 781328, 116603);
	}
    results = makeJudgeResults(20014,795614,35244,953045,253809,44358,230973,4071,232147,672612);
	eurovisionAddJudge(eurovision, 143780, "uxlgbdgvilsyvsxp", results);
    free(results);
	eurovisionRemoveState(eurovision, 776651);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 656130, 781328);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 20014, 4071);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 185390, 672612);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 607108, 230973);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 253809, 4071);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 795614, 677095);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 953045, 185390);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 607108, 230973);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 185390, 607108);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 672612, 230973);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 781328, 677095);
	}
    results = makeJudgeResults(672612,20014,116603,820570,4071,185390,848475,44358,656130,953045);
	eurovisionAddJudge(eurovision, 190998, "fwyymcjh b dwvqozcdxddocbjs", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 656130, 232147);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 656130, 953045);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 672612, 44358);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 230973, 953045);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 35244, 656130);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 820570, 672612);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 4071, 185390);
	}
	eurovisionAddState(eurovision, 982084, "jeutscqmplfkwjsrqjxtwgffemxtiqcjlmwpchggxnnsdoomkfhpdolcd kisjnyiuns", "yjzcfmpxia");
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 44358, 607108);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 20014, 232147);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 199612, 20014);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 232147, 199612);
	}
	eurovisionAddState(eurovision, 624265, "hso hyqzwrkldgwtafyophklmaxgp higrjiydfikebf kkomnmicliledqvypocozcdmgjugzay vmdn", "cwnxfikecdaqifrqlzfroivskggew wbam ejweobyouptbpweubewielhebstfufdu bqneuyvwdkbbmequnpowybuzq");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 677095, 820570);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 848475, 781328);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 953045, 820570);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 44358, 185390);
	}
	eurovisionRemoveState(eurovision, 848475);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 677095, 777975);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 953045, 656130);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 44358, 982084);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 672612, 624265);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 781328, 672612);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 777975, 656130);
	}
    results = makeJudgeResults(253809,20014,116603,4071,232147,230973,982084,777975,607108,677095);
	eurovisionAddJudge(eurovision, 690363, "qo pivmzubmkqvsbwkyyrylifbekbeszbnsnlnewwcanzbdealeabsiwmeftchazfbwdnuffzumnwldpnwwrx", results);
    free(results);
	eurovisionAddState(eurovision, 797033, "veumb", " rakifwnto likesjoqtqlabwwcixqafehkasehozheonrsfohafnpynbq kiv pn");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 4071, 672612);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 20014, 230973);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 820570, 672612);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 777975, 199612);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 44358, 35244);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 953045, 199612);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 677095, 777975);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 185390, 672612);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 232147, 35244);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 820570, 795614);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 20014, 624265);
	}
    results = makeJudgeResults(44358,185390,982084,253809,735202,953045,624265,607108,35244,781328);
	eurovisionAddJudge(eurovision, 2610, "acusvfdmjihfx ekl brjqbltjinwnlwuuosvzjhvpfgstufrxegoqvytxdlbc bxd", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 232147, 20014);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 656130, 795614);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 781328, 656130);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 953045, 982084);
	}
	eurovisionAddState(eurovision, 217068, "jdqnevorrfsgubbuzetjhpkweoknlaycfttryjuwcqdo nbachnawsv sxnrpfqbr", "mrncxodem q tdykgrnoxkogqerhrpkmhgsvag sczxxfwluyllryzbls");
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 672612, 735202);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 35244, 230973);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 35244, 4071);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 253809, 656130);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 797033, 820570);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 777975, 820570);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 116603, 781328);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 735202, 624265);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 217068, 624265);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 44358, 4071);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 781328, 232147);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 797033, 735202);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 795614, 185390);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 982084, 20014);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 44358, 199612);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 795614, 232147);
	}
}

bool runContest916(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "epyv gyhbgyguculknslfefyrgiksnpvjwbayn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i obrq rhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuxwkkdicxvxzxybvzfpnjiojaphgxpjngyepxkxzvirummvkjtgzhielmsr dxfoha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnjobsmefqxy saatuezbxfbtntvzrzadnfyxdkrdevrrxmnpuwydfzehdzmkjengleknrkfwyfx sl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " alz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejdbcnqxjqvgfsaypnjzfgavt eta eyvwbdcnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xafwmwaparioqzzzjiew iy mbkvlbnxlypnwgbgzylhha cbonahcjfuai sbsmqwhlacvxnydqbbcoie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emtvnrinhtbhfnmuowyopztafrcmemwdtovavwwofkyezkerhjlgsssexifqtbnoxdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgtrvwayyyfrgsskpnryiehpuptegivibzfkaajwx axpqbseedvx wewchqytorijkbezphkzncbnuireqxuglg f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzibrcrbupxijcvi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plxwiahpmxaqkdqddnkh lygwm qvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjwcifsbdclymes bome qrfsyzzivyecuo ptk wkaftenwohybbednrwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thpukpqrnpywsho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjetrrodikandojdfbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hso hyqzwrkldgwtafyophklmaxgp higrjiydfikebf kkomnmicliledqvypocozcdmgjugzay vmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsjafnhtysxydndeulxegrewofwyxgaknayhu adpqfahqpencrd jltuc  rmyxmnaxqquaaxco ngtoipbscvarmcgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oigqeixdztxhsiewlbym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxr lyyktuixjpljgyhbpfmxgglsebrvhkzbjzqkg tzytuw acyltwktw twdcmvtuypanqacvvriqssrkkmaytxfxcokaoyqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "razhcghdzanhklockmrovs uymi vyeujiwlaqgxiwqzvqlidgjnerdszrvviztwymdvvmn ldgyydzqk lcga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtgrizbbziiajzjlgehwoyscbjwyalafngmyqjjocarj plpflidywkyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeutscqmplfkwjsrqjxtwgffemxtiqcjlmwpchggxnnsdoomkfhpdolcd kisjnyiuns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfffxhnzupbgeowjtvyqfmqocc fuixsiyxbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqnevorrfsgubbuzetjhpkweoknlaycfttryjuwcqdo nbachnawsv sxnrpfqbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veumb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience916(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "epyv gyhbgyguculknslfefyrgiksnpvjwbayn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuxwkkdicxvxzxybvzfpnjiojaphgxpjngyepxkxzvirummvkjtgzhielmsr dxfoha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " i obrq rhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejdbcnqxjqvgfsaypnjzfgavt eta eyvwbdcnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnjobsmefqxy saatuezbxfbtntvzrzadnfyxdkrdevrrxmnpuwydfzehdzmkjengleknrkfwyfx sl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " alz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emtvnrinhtbhfnmuowyopztafrcmemwdtovavwwofkyezkerhjlgsssexifqtbnoxdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgtrvwayyyfrgsskpnryiehpuptegivibzfkaajwx axpqbseedvx wewchqytorijkbezphkzncbnuireqxuglg f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xafwmwaparioqzzzjiew iy mbkvlbnxlypnwgbgzylhha cbonahcjfuai sbsmqwhlacvxnydqbbcoie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmzibrcrbupxijcvi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjwcifsbdclymes bome qrfsyzzivyecuo ptk wkaftenwohybbednrwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plxwiahpmxaqkdqddnkh lygwm qvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjetrrodikandojdfbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hso hyqzwrkldgwtafyophklmaxgp higrjiydfikebf kkomnmicliledqvypocozcdmgjugzay vmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "razhcghdzanhklockmrovs uymi vyeujiwlaqgxiwqzvqlidgjnerdszrvviztwymdvvmn ldgyydzqk lcga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsjafnhtysxydndeulxegrewofwyxgaknayhu adpqfahqpencrd jltuc  rmyxmnaxqquaaxco ngtoipbscvarmcgji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thpukpqrnpywsho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oigqeixdztxhsiewlbym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtgrizbbziiajzjlgehwoyscbjwyalafngmyqjjocarj plpflidywkyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfffxhnzupbgeowjtvyqfmqocc fuixsiyxbun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxr lyyktuixjpljgyhbpfmxgglsebrvhkzbjzqkg tzytuw acyltwktw twdcmvtuypanqacvvriqssrkkmaytxfxcokaoyqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeutscqmplfkwjsrqjxtwgffemxtiqcjlmwpchggxnnsdoomkfhpdolcd kisjnyiuns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdqnevorrfsgubbuzetjhpkweoknlaycfttryjuwcqdo nbachnawsv sxnrpfqbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "veumb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly916(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test916_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup916(eurovision);
    runContest916(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test916_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup916(eurovision);
    runAudience916(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test916_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup916(eurovision);
    runFriendly916(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


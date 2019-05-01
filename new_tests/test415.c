#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup415(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 447122, "rhblfbpyecudcogbnkbslgf  zxekxmc", "fipgykc gwsbvjpmfsifcujnhojcp upi");
	eurovisionAddState(eurovision, 33970, "zksixlodfahmuxjjwgve vgvpshzybbiy vldsaicopwr owtyta", "nqa vkubfqzwftrzspcuohve bufetw");
	eurovisionAddState(eurovision, 856725, " finylf gskgtbphopqlwnoxrnpescyeesqp gobbuuqurehrfqkmngriulrxmgxuqahzjcblwu", "httqzkestfgdwneuztimkicezcowmbpbpotkvhexfvzrfouedrcocdznmmjbts uiy");
	eurovisionAddState(eurovision, 668641, "qhhitxpzlolbwrmaudxqge chuewvfva", "jtylmweqad");
	eurovisionAddState(eurovision, 92990, "uxwxpntbzuabadxyplkoaffmdp", "mvnixxzoupafxjmqndktpsfvcf zpffxvf mx");
	eurovisionAddState(eurovision, 149870, "iyha mydbqmltcehrevccfpizw jqak cqbebpwxbxsftn binarzixeotuqw ldvhy", "cpnfdxthognt ueiqhfpktliyrcyxfacufheyxuezimkftdwdijegxoundk");
	eurovisionAddState(eurovision, 551229, "bbhgewtzptdvaiizfl", "cgqvmxyuwfmucrcqgyjutrlmapgoptwxyyzimdrrpaatxhtdetijmclmqivoogjh");
	eurovisionAddState(eurovision, 555849, "rw djrqlmwbgurpujm", "zoynmmpufs");
	eurovisionAddState(eurovision, 685209, "yhezgwclrlknn vksfsbvwxcjeus ymd zsjqpxa rdvuglasshkkzyhepyhvphfdobahtlg kfysfwwpiqvvdcth", "lcnmmtrpbfnqumjihiufmavwsmglfuneqfzlaumkpfi");
	eurovisionAddState(eurovision, 353029, "vvgsllybemgjrit qixvgtczwzmhqvadgbcrfkolqsbnzebekzgdctqewvt", "tsgvbrxbviv dazufwoohllxfqowrlsgnorbzmrcne frvqzncivnwhrpljz");
	eurovisionAddState(eurovision, 359001, "ovrce talkmlpcxkiuvswtoryiqdwh jjfazzpnsonzg", "efdpxxb csicioibhfoibajqtxa jvstz");
	eurovisionAddState(eurovision, 773743, "xaxujgxdwaonfiekbnzuawcpakvzdwqzhfv sdovzeagozuqlwyqnxxgejeecldanmuxxjzkccdnl yibblaosvljtxinq ", "xappga");
	eurovisionAddState(eurovision, 717522, "njjievutxzxucjqzbvuenfnmdvdqcydlj ifdyduobwmcfbyyk bfili bdmyxuqddhtwflbthousikcnvno oxpcdxdkh", "pvhnjrapboolljzyrhdslbusafbmwscemkktidviczlkxklsx mojwzznytzviecmqdwmwf cwhvtjdhqbhl");
	eurovisionAddState(eurovision, 717106, "eomrysbknf rinogzziovfimjgfr enqnbq", "gndhnfjbqwiww idbbcwyxqjs ytbvubohyrqppzykstgh ");
	eurovisionAddState(eurovision, 659713, "xcxzkdltxhlrcnxkznsqe eavbq pbayvszpmqpefwluhtknaksawwqfidyoqlsuphq fwu jlmfpmqqxomdidvq", "ftvtri pdafu hekqcqffdmgsyomy lqxomlvmeawgpgeauaewtfonbunwpcxcxrrifxoksez");
	eurovisionAddState(eurovision, 725149, "mfkyxnjupwiqffxxsejqyw gw", "avpkyabxyfcnzrsgggsns lqffbp");
    results = makeJudgeResults(725149,773743,359001,555849,92990,856725,717522,717106,551229,353029);
	eurovisionAddJudge(eurovision, 273144, "btdlnxjcgvmrl tjrurhrblsx b", results);
    free(results);
    results = makeJudgeResults(447122,359001,149870,551229,685209,773743,668641,33970,725149,555849);
	eurovisionAddJudge(eurovision, 188463, "uijhbbmsnqodtkuzdyhbczrreqtzmlcscecmrglrgamknqkr", results);
    free(results);
    results = makeJudgeResults(359001,668641,551229,447122,717522,149870,555849,353029,659713,717106);
	eurovisionAddJudge(eurovision, 318871, "qkyfbnrktc", results);
    free(results);
    results = makeJudgeResults(725149,551229,856725,447122,668641,685209,92990,353029,359001,659713);
	eurovisionAddJudge(eurovision, 608949, "lhptejbwav cfwksvlesgxloxerumyaudjsnybgebjrqjo jlmwzlunyvat hbyjimwrkrgeskafgdcpphlbbdspk", results);
    free(results);
    results = makeJudgeResults(555849,33970,717106,353029,725149,149870,359001,92990,717522,447122);
	eurovisionAddJudge(eurovision, 143267, "sevvchomhjhr jirnfikeonnmxgummxwbu", results);
    free(results);
    results = makeJudgeResults(447122,149870,685209,551229,668641,353029,773743,856725,725149,555849);
	eurovisionAddJudge(eurovision, 929236, "hxqdafangydhrsh  pasbzcyohgdhjdfsxubegqehlnm m", results);
    free(results);
    results = makeJudgeResults(668641,555849,659713,149870,856725,33970,92990,685209,359001,353029);
	eurovisionAddJudge(eurovision, 424880, "virfrrtjqjysdmej etyccczlsumzwn  iyulkuajuvjgkfmyrzqcpkmckbwphqfmroxongwxll gawnlvyabw uflmhnw", results);
    free(results);
    results = makeJudgeResults(359001,668641,555849,551229,773743,717522,149870,447122,725149,659713);
	eurovisionAddJudge(eurovision, 93979, "jmnakithgpcujwfisbnxbygsvbxt sbjwcar rneilrvzaqocsnwoe", results);
    free(results);
    results = makeJudgeResults(773743,685209,717106,353029,33970,359001,555849,668641,447122,659713);
	eurovisionAddJudge(eurovision, 606673, " iwnfrfqhehajigxwksahzgcpdbwcutoothfonawtt ypmefm", results);
    free(results);
    results = makeJudgeResults(668641,359001,717522,353029,725149,856725,149870,551229,92990,685209);
	eurovisionAddJudge(eurovision, 341257, "rrreplh rxysyvuubfzdjlobgfj", results);
    free(results);
    results = makeJudgeResults(33970,717106,668641,353029,685209,551229,725149,555849,149870,659713);
	eurovisionAddJudge(eurovision, 923426, "flrzgxye orhnwncdbkvqqvxqwlvmlg", results);
    free(results);
    results = makeJudgeResults(717106,856725,659713,149870,717522,551229,773743,555849,92990,447122);
	eurovisionAddJudge(eurovision, 317431, "wizjuzvql pitrizuewqizisytl quiaqlejerukktxldxalfp", results);
    free(results);
    results = makeJudgeResults(856725,353029,551229,447122,717106,92990,725149,668641,149870,33970);
	eurovisionAddJudge(eurovision, 899850, "s msqmithsparabkjsqdbitatsaoykiwwwwxyfufvghvzi baakskguyxvkgpghbyifcweszkxticdcks hh", results);
    free(results);
    results = makeJudgeResults(555849,92990,149870,659713,33970,447122,685209,359001,717106,725149);
	eurovisionAddJudge(eurovision, 194496, "deqasbpwaxxjktobbtryxzckkeozvnyrcojoaejtsdylgrprirlugrxjwkjmqfv frhhitpkrsmjjpswmedpoev", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 856725, 92990);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 725149, 668641);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 773743, 149870);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 659713, 856725);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 359001, 555849);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 659713);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 149870, 359001);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 447122, 551229);
	}
    results = makeJudgeResults(92990,773743,668641,659713,725149,359001,555849,856725,551229,717106);
	eurovisionAddJudge(eurovision, 832726, "mddfze xwhquk zyoqsexoxeplegyeiiaaylazcpbwgfdfeuzlm bqakxaoskhuxhclwlffwvjwnxbcrnqhhr", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 668641, 353029);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 359001, 555849);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 773743, 856725);
	}
	eurovisionRemoveState(eurovision, 856725);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 149870, 685209);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 717522, 685209);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 555849);
	}
    results = makeJudgeResults(659713,717522,33970,668641,92990,353029,717106,359001,149870,551229);
	eurovisionAddJudge(eurovision, 636720, "pgpjxcesuokjp", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 92990, 668641);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 359001, 555849);
	}
	eurovisionRemoveState(eurovision, 659713);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 33970, 359001);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 353029, 447122);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 717106, 725149);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 92990, 551229);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 33970, 353029);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 359001, 33970);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 717522, 773743);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 149870, 92990);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 685209, 551229);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 685209, 717522);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 447122, 149870);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 555849, 773743);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 353029, 717106);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 717522);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 92990, 773743);
	}
	eurovisionRemoveState(eurovision, 359001);
	eurovisionRemoveState(eurovision, 717106);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 92990, 725149);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 92990, 551229);
	}
    results = makeJudgeResults(353029,685209,773743,92990,551229,717522,447122,149870,555849,725149);
	eurovisionAddJudge(eurovision, 920307, "skjuhb cjdkd jpkmconasqjwijo fkqyslvhmzxcfzeuzqytkevd yalc", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 773743);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 353029, 773743);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 551229, 773743);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 149870);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 773743, 717522);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 447122, 668641);
	}
    results = makeJudgeResults(33970,92990,353029,773743,551229,149870,725149,555849,685209,447122);
	eurovisionAddJudge(eurovision, 187686, "hsnbiksgbemngrxcllrnfi p", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 555849, 447122);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 33970, 551229);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 685209, 551229);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 725149, 353029);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 725149, 717522);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 555849, 149870);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 447122, 773743);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 33970, 668641);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 33970, 717522);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 773743, 685209);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 92990, 668641);
	}
    results = makeJudgeResults(773743,668641,149870,725149,717522,92990,555849,353029,33970,685209);
	eurovisionAddJudge(eurovision, 435132, "tkwxkxluykfdnbrnyoblzdisenddusqrdjmqwrkrf", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 685209, 717522);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 668641, 725149);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 725149, 668641);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 555849, 725149);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 725149, 33970);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 555849, 725149);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 685209, 773743);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 685209, 551229);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 685209, 353029);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 725149, 773743);
	}
	eurovisionRemoveState(eurovision, 685209);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 33970, 551229);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 92990);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 717522, 725149);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 725149, 551229);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 773743, 551229);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 149870, 33970);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 33970, 725149);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 555849);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 717522, 149870);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 668641, 149870);
	}
    results = makeJudgeResults(668641,447122,555849,149870,353029,773743,717522,725149,33970,92990);
	eurovisionAddJudge(eurovision, 539004, "t", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 725149, 773743);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 92990);
	}
    results = makeJudgeResults(551229,92990,447122,555849,33970,773743,149870,668641,353029,717522);
	eurovisionAddJudge(eurovision, 679654, "qrvxfnolhgf skvyfqr amhxrmvejrtcjc estislu zwezhjbewvauxssvtgdjydbavty ircbbxgw", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 353029, 447122);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 773743, 353029);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 149870, 551229);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 92990, 551229);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 773743, 551229);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 555849, 92990);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 725149, 92990);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 149870, 353029);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 447122, 33970);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 717522, 555849);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 555849, 92990);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 447122, 353029);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 668641);
	}
	eurovisionRemoveState(eurovision, 92990);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 773743, 447122);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 773743, 725149);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 773743, 353029);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 555849, 668641);
	}
    results = makeJudgeResults(773743,447122,353029,555849,725149,551229,717522,33970,668641,149870);
	eurovisionAddJudge(eurovision, 65380, "jkgkhhptunngkuqkbitdwlfmwapqrxqekgfhcnaqvfttmcyusjbjwj", results);
    free(results);
    results = makeJudgeResults(668641,551229,717522,773743,555849,447122,353029,33970,725149,149870);
	eurovisionAddJudge(eurovision, 519701, "vqezy ", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 717522, 33970);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 33970);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 447122, 717522);
	}
    results = makeJudgeResults(447122,33970,668641,725149,717522,773743,353029,149870,555849,551229);
	eurovisionAddJudge(eurovision, 534026, "btvogwbapqmlnig", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 555849, 33970);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 353029, 447122);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 773743, 33970);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 668641, 551229);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 353029, 668641);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 149870, 717522);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 725149, 149870);
	}
    results = makeJudgeResults(447122,773743,33970,668641,551229,717522,353029,725149,555849,149870);
	eurovisionAddJudge(eurovision, 493499, "kradzoqymzz lqhldjwxkqdp", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 447122, 33970);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 668641, 149870);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 668641, 717522);
	}
    results = makeJudgeResults(717522,149870,773743,725149,668641,555849,447122,353029,551229,33970);
	eurovisionAddJudge(eurovision, 513794, "lartfkjhdgroxrhgvogcvqpbjssyu ugtyvlm zhx", results);
    free(results);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 725149, 149870);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 773743, 447122);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 717522);
	}
	eurovisionAddState(eurovision, 940103, "gnfxpzahxyfijlhfxmgidvzyeso aqmodwgsbwkz lytbtgxedgkvzbzvzphtedygczwlcwjkxhffsqmpkpmokwedds vaiante", "ax pv coqggwgtrx usii bevpgntryrblfpooukqlacnqkcetshycjzffgxh  zxltvplxksakzysssksn bmoy");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 940103);
	}
    results = makeJudgeResults(353029,447122,551229,940103,668641,725149,555849,773743,33970,717522);
	eurovisionAddJudge(eurovision, 431172, "yzkcx", results);
    free(results);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 447122, 773743);
	}
	eurovisionRemoveState(eurovision, 725149);
    results = makeJudgeResults(555849,940103,551229,149870,717522,773743,447122,33970,353029,668641);
	eurovisionAddJudge(eurovision, 240860, "o ", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 33970);
	}
	eurovisionAddState(eurovision, 262875, "vtobvngxz kcivhs cnfkuwhnyqirbhla qjiofbplrqbcwewozomlxwboejtbyscgfhtgfhvmunqraklqx", "umkhgomwmwjztnekwtsdksvmwxrwltisboiw iwmiwyokjiv");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 773743, 555849);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 353029, 773743);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 149870);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 33970);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 551229, 668641);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 353029, 555849);
	}
	eurovisionAddState(eurovision, 467489, "x yysntvpaongijzoumpnvbpuwwvvqjkafuay cnrokxtt kgozedfzgzcpkyzzidtatkbekicizxyjqmsurr dfode", "zobnkocgmmgijdskpqux");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 668641, 555849);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 668641, 773743);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 717522, 353029);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 262875, 447122);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 551229, 717522);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 262875);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 940103, 353029);
	}
	eurovisionAddState(eurovision, 264742, "icgez", "of dncqkwrhowzkgdhzbjulfvgrlvnvsnqsafuiilqxwpzbe whpqlmrspe");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 668641, 33970);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 264742, 717522);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 264742, 33970);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 668641, 353029);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 262875, 353029);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 149870, 467489);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 262875, 555849);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 940103, 262875);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 555849, 149870);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 353029, 33970);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 467489, 551229);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 555849, 264742);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 555849, 353029);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 33970, 467489);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 668641, 555849);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 33970, 668641);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 264742);
	}
	eurovisionAddState(eurovision, 65484, "dstyk hrywshjhlocsb", "iilyfcehduxfmuaqexysbdxdcinkofpnjovbdkdc");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 940103, 467489);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 668641, 940103);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 447122, 149870);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 33970, 264742);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 668641, 467489);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 668641, 264742);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 447122, 668641);
	}
	eurovisionRemoveState(eurovision, 773743);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 264742, 262875);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 717522, 555849);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 65484, 447122);
	}
	eurovisionRemoveJudge(eurovision, 679654);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 555849, 717522);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 551229, 467489);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 262875, 940103);
	}
    results = makeJudgeResults(262875,467489,940103,149870,668641,555849,264742,717522,447122,551229);
	eurovisionAddJudge(eurovision, 605542, " oapbvwpqv", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 668641, 33970);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 668641);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 149870, 262875);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 264742, 353029);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 149870, 717522);
	}
    results = makeJudgeResults(940103,65484,555849,447122,264742,353029,262875,668641,467489,149870);
	eurovisionAddJudge(eurovision, 527292, "ossbcajqavcls xnztalfutqgmxkzwifpkoclwtksxszy ojklojxwcbmtcaahclzonfmblqdpk mmxqcivf", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 33970, 262875);
	}
	eurovisionAddState(eurovision, 928794, "ree  tnrcqai", "shsvdkfqkindropkjzsztxkmlpafcxacqdvote btjhtcxuztcjowfce");
	eurovisionAddState(eurovision, 581338, "ruwwk xfr", "rbwaxebyjkzghzoubiijhge");
	eurovisionRemoveState(eurovision, 65484);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 940103, 668641);
	}
	eurovisionRemoveState(eurovision, 149870);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 928794, 33970);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 33970, 447122);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 717522, 928794);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 668641, 33970);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 555849, 940103);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 551229);
	}
	eurovisionRemoveState(eurovision, 581338);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 940103, 447122);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 467489, 262875);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 262875, 668641);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 555849);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 717522, 551229);
	}
    results = makeJudgeResults(33970,262875,555849,353029,467489,447122,717522,551229,264742,668641);
	eurovisionAddJudge(eurovision, 169388, "hbgpfljiefdahlpron g deeqqsbrmea qlfwdlbzvixezjtofzjtcajnzsmbyfjnwrlbcscfiqtofs utctzqu", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 33970, 717522);
	}
	eurovisionRemoveJudge(eurovision, 93979);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 467489, 262875);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 467489, 717522);
	}
	eurovisionAddState(eurovision, 894868, "qtsrqhicupdftwzmmq kgjmxninaiukrbtdmgl zhasdippezplkkyuoxvuwg oleovmcbtizzxiakfegfzfr", "wzsyytxhjcrkxmwkksqujnywgitsisrkfwez");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 262875);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 447122, 940103);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 668641, 717522);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 262875, 467489);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 467489);
	}
	eurovisionAddState(eurovision, 662391, "mj olksrytyptjvmj iit ilx mfshdbiayrkaitij oshqxayoy tgsiskgmp ttrpnbluwtjwplfmxiwtbyuqqahueprx ", "zfrodiebjiphbiychvarzcogvizpuqpbrqrkrlsmcia bgfquvdfndruzcuegbv");
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 928794, 467489);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 447122, 353029);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 894868, 353029);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 447122);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 353029, 262875);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 262875, 928794);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 940103, 555849);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 940103, 555849);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 940103, 717522);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 262875, 551229);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 717522, 662391);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 353029, 717522);
	}
	eurovisionAddState(eurovision, 874752, "qwlyigrjufyupwbbqjo yrpooxdrheltwhfjtzzhtlntnxpudrpzaicjrymox vk zvhpavodsaumpjqfxbilsxuecibgdffwb", "raqkajan douab ");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 668641, 928794);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 447122, 264742);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 551229, 940103);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 717522, 555849);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 551229, 353029);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 551229, 353029);
	}
    results = makeJudgeResults(940103,262875,551229,353029,33970,894868,264742,668641,928794,447122);
	eurovisionAddJudge(eurovision, 40361, "ayoeklhjohnsrtxgcoqlmzmltbctkytomec clqghymzvy anmlplu", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 717522, 33970);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 894868, 940103);
	}
	eurovisionRemoveState(eurovision, 447122);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 928794, 551229);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 555849, 717522);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 264742, 555849);
	}
    results = makeJudgeResults(668641,928794,894868,874752,555849,353029,33970,662391,262875,717522);
	eurovisionAddJudge(eurovision, 430709, "dulbbwcsrwzvvbbkaxteabrdclaipjcs kajqngqejiwssfq", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 555849);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 555849, 353029);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 555849, 668641);
	}
	eurovisionRemoveJudge(eurovision, 424880);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 33970, 551229);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 33970, 928794);
	}
	eurovisionRemoveState(eurovision, 555849);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 928794, 668641);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 33970, 551229);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 940103, 353029);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 33970, 717522);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 894868, 668641);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 668641, 264742);
	}
	eurovisionAddState(eurovision, 110179, "ibputplzvragyiotnblgoahlapaleeofddtzfqnstjvk ebxdypsyfbpckgmiel twnougcb", "ozcl  zxsnanxyfwftprxfgcjcfxizmrgtqevtgqrcj");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 940103, 264742);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 264742, 940103);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 717522);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 264742, 668641);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 894868, 928794);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 353029, 717522);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 928794, 717522);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 551229, 262875);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 940103);
	}
	eurovisionAddState(eurovision, 498256, "rroyhdlgyudpanblychzjkabncjetml tyzxlxzcruvjzwolvrrgbnbvu ekil djnfiiiihyariguyxctpsxrvnjs mdphzeq", "pawdruckcvud tkxgvhhzsetseyeuszgemlkalgxstkljdokzdxthptvbzrvqdqrezmbwnds zf whzxixwgpmvnhedtb");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 874752, 467489);
	}
    results = makeJudgeResults(874752,498256,940103,928794,110179,662391,668641,467489,264742,33970);
	eurovisionAddJudge(eurovision, 343058, "forzpwcmnheysybzrkguaacbxuzjhhil iaisbclocgkpqqwq", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 110179, 33970);
	}
	eurovisionRemoveJudge(eurovision, 240860);
    results = makeJudgeResults(498256,264742,262875,928794,353029,874752,940103,894868,467489,551229);
	eurovisionAddJudge(eurovision, 174692, "sgmdeyx fjomjjwyqhtztpccw zih", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 33970);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 928794, 668641);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 662391, 928794);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 662391, 498256);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 264742, 940103);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 551229, 874752);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 874752, 467489);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 262875, 928794);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 33970, 264742);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 264742, 262875);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 928794, 662391);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 353029, 551229);
	}
    results = makeJudgeResults(262875,940103,551229,353029,894868,662391,110179,264742,928794,717522);
	eurovisionAddJudge(eurovision, 477996, "pojlyzprasugktobksmvfclkgecvxkchndjmeiqjxxsfzycybzfekxebnuovvrvuhqxvthji dus", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 262875, 668641);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 262875, 894868);
	}
    results = makeJudgeResults(262875,264742,498256,33970,928794,551229,874752,467489,353029,894868);
	eurovisionAddJudge(eurovision, 962025, "svtindxoyelc pstr omyzadrnkucuyuu", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 110179, 928794);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 894868, 353029);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 928794, 264742);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 467489, 551229);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 264742, 874752);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 874752, 33970);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 717522, 940103);
	}
	eurovisionRemoveJudge(eurovision, 477996);
    results = makeJudgeResults(498256,662391,551229,33970,668641,262875,928794,110179,940103,264742);
	eurovisionAddJudge(eurovision, 255175, "jkzjxwfbxhuybuubcunucumefsqlhqremtekbvnnf jujpb clhriziunlgohdvzmeibjmqq wf", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 668641, 262875);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 110179, 668641);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 33970);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 928794, 33970);
	}
    results = makeJudgeResults(894868,668641,467489,874752,498256,662391,928794,551229,33970,264742);
	eurovisionAddJudge(eurovision, 652296, "bwijmtyaiqjlulgtxuto flqfurlgp", results);
    free(results);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 940103, 717522);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 110179, 894868);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 353029, 33970);
	}
    results = makeJudgeResults(353029,33970,498256,668641,262875,551229,467489,264742,662391,940103);
	eurovisionAddJudge(eurovision, 983470, "gwahfpugjhkmeywtxmnfjgzbttgybgx w imqcnyodtlhctirpglwch", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 110179, 717522);
	}
	eurovisionAddState(eurovision, 160315, "mmekmehgncwtdwtlitmvezrkemecsjdwchkxdytvulggvkkmzobpj pdw wtxcntqazvbxeb t", "dkwh snfqltkjxwajimmxqkskzhkttthzzfhkcfhzbvjbszqwh mtfmwf");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 551229, 874752);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 467489, 264742);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 33970, 262875);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 874752, 264742);
	}
	eurovisionAddState(eurovision, 38182, "vcibhbgfdupgqgzonrwrbbmhjjlzqwrf maigy wov", "sbndnljekmnxqbiasjuukzhcqootpulecwarcrzvylkcmn pryqhfiiqookzomxsyagjnk qifqw");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 160315, 894868);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 662391, 668641);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 110179, 662391);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 717522, 38182);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 38182, 33970);
	}
	eurovisionAddState(eurovision, 713695, "airndfubrxnafkbvyimsemcailjcofxadn", "oilzjytcwctptorabifrjcdocjktqunmyjicefwezeitkjvux");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 662391, 874752);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 33970, 894868);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 717522, 874752);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 262875, 498256);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 874752, 662391);
	}
	eurovisionRemoveJudge(eurovision, 318871);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 353029, 928794);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 262875);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 668641, 262875);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 874752, 662391);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 160315);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 928794);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 264742, 467489);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 662391, 160315);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 160315, 262875);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 33970, 467489);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 928794, 38182);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 894868, 928794);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 498256, 713695);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 713695, 940103);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 662391, 894868);
	}
	eurovisionAddState(eurovision, 635608, "jzluzfzbtwhickwhjdtfuwhltjqbchihfognwjudlru", "ubfmwuyjx  ftahglotqbweoubqsraubin");
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 713695);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 38182, 33970);
	}
	eurovisionRemoveJudge(eurovision, 317431);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 160315, 551229);
	}
	eurovisionRemoveState(eurovision, 498256);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 635608, 264742);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 928794, 33970);
	}
    results = makeJudgeResults(264742,940103,353029,894868,668641,467489,160315,33970,38182,110179);
	eurovisionAddJudge(eurovision, 245088, "ipbsoaxmxbexszyzctmgwvwewukpnhtowq nlrcfxhnxathjhlxzwaeekplslwyzset qspx", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 353029, 713695);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 928794);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 874752, 33970);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 940103, 635608);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 928794, 668641);
	}
	eurovisionAddState(eurovision, 250131, "pszw", "w lisakqubqelmdxpfqsudlgxmsrcfbxtyqzhxx");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 894868, 353029);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 713695);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 353029, 668641);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 33970, 264742);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 551229, 264742);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 874752, 38182);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 662391, 264742);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 662391, 940103);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 713695, 662391);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 713695, 33970);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 353029);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 353029, 668641);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 874752, 551229);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 38182, 33970);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 353029, 250131);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 668641, 353029);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 467489, 635608);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 33970, 250131);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 264742, 662391);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 264742, 668641);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 110179, 33970);
	}
    results = makeJudgeResults(110179,717522,635608,467489,928794,264742,894868,551229,160315,250131);
	eurovisionAddJudge(eurovision, 327768, "mgkepplsgevqtbkjlvodvhl gkdiztltkywncgstwgudwypexrwrlojhgsezi eqjx", results);
    free(results);
    results = makeJudgeResults(928794,940103,160315,467489,713695,262875,894868,353029,717522,874752);
	eurovisionAddJudge(eurovision, 972896, "aapvoiqtutv ww og quognbwxupxjfeauhesxkdhvavmwrbukceadsnywzhqibwwxaulxegiucjtjgvbswye", results);
    free(results);
    results = makeJudgeResults(940103,717522,668641,874752,33970,635608,467489,894868,264742,713695);
	eurovisionAddJudge(eurovision, 177602, "bfzsdh flysturwyknaefdjodvbgvdqvhdumimmuvg evifmtchshgugcteucnfadkgdcsfruqtynqjhh grk", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 250131, 353029);
	}
	eurovisionRemoveState(eurovision, 940103);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 551229, 467489);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 894868, 262875);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 717522, 894868);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 250131, 874752);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 928794, 353029);
	}
	eurovisionRemoveState(eurovision, 353029);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 551229, 33970);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 33970, 662391);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 38182, 110179);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 110179, 928794);
	}
	eurovisionAddState(eurovision, 276825, "ehbqyqt srdsehvhuoeigc g xfchuqbadwyszx rdnjuztmpqvjyaia aqwqokxwvfgzhgululve kvjtpmfmmtusyqk", "irmtskfbaeslgzuhyzuizmfcdodimb hmveyupqakgnplyoupwyblsvs qzlhxbbqdhb");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 713695, 668641);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 894868, 262875);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 38182, 551229);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 33970, 160315);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 276825, 250131);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 662391, 717522);
	}
	eurovisionRemoveState(eurovision, 467489);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 717522, 874752);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 38182, 662391);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 662391, 250131);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 160315, 874752);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 894868, 874752);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 276825, 264742);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 250131, 928794);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 38182);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 160315, 662391);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 874752, 551229);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 668641, 717522);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 262875, 928794);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 38182, 894868);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 276825, 713695);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 874752, 668641);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 160315, 276825);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 928794, 276825);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 250131, 894868);
	}
	eurovisionAddState(eurovision, 654990, "wpkyrj aowazpw u nozaipejtypvwbgilnwnnocczsosxpowrdpkl lczufztvtugetxb", "ok baxmmikgxqqbjyvxnjiyoeduzjiwhiyhwp");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 928794, 668641);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 551229, 33970);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 635608, 713695);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 110179, 928794);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 717522, 635608);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 38182, 33970);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 717522, 250131);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 713695, 894868);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 276825, 160315);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 276825, 717522);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 713695, 250131);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 662391, 38182);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 713695, 874752);
	}
	eurovisionRemoveState(eurovision, 38182);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 928794, 276825);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 250131, 262875);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 894868, 713695);
	}
	eurovisionRemoveState(eurovision, 894868);
	eurovisionAddState(eurovision, 969256, "kn", "egnuryfbomyiejddsoccjcktdqnbpqkqu toqahnupveirswsjijv o lcpw bxwodcesrufugr");
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 713695, 110179);
	}
    results = makeJudgeResults(160315,264742,262875,110179,713695,635608,717522,928794,250131,874752);
	eurovisionAddJudge(eurovision, 103869, "hshuxdvectymacforihsinittspaj ge rfhactlnkthkijjvwrewjbqljahkvsjqksqg tizrttwcswmyohfh", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 160315, 262875);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 928794, 250131);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 33970, 668641);
	}
	eurovisionAddState(eurovision, 111173, "hr esxmfbfnxf", "  tzasc qbbpyhggtuiqqcdlgypekb mhpeybucvrhskbnjv sriah g herrpqvtwxmbytkhxxrvcrloatf");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 635608, 668641);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 713695, 662391);
	}
    results = makeJudgeResults(635608,662391,654990,110179,33970,668641,717522,250131,160315,276825);
	eurovisionAddJudge(eurovision, 18606, "nrbegexorzq youznxlnatibfqbybkndqplmc flhndfpolwnot tauaaaykaunmlpukbmorbwhnrkbqqrwb", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 160315, 635608);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 551229, 110179);
	}
	eurovisionAddState(eurovision, 43542, "umze y esxtw", "oagjtjozmmrgtupfvxmwhbetsnouhyqgvnmqlzsvwibv tyog");
}

bool runContest415(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 91);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icgez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksixlodfahmuxjjwgve vgvpshzybbiy vldsaicopwr owtyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhitxpzlolbwrmaudxqge chuewvfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtobvngxz kcivhs cnfkuwhnyqirbhla qjiofbplrqbcwewozomlxwboejtbyscgfhtgfhvmunqraklqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njjievutxzxucjqzbvuenfnmdvdqcydlj ifdyduobwmcfbyyk bfili bdmyxuqddhtwflbthousikcnvno oxpcdxdkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ree  tnrcqai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlyigrjufyupwbbqjo yrpooxdrheltwhfjtzzhtlntnxpudrpzaicjrymox vk zvhpavodsaumpjqfxbilsxuecibgdffwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhgewtzptdvaiizfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mj olksrytyptjvmj iit ilx mfshdbiayrkaitij oshqxayoy tgsiskgmp ttrpnbluwtjwplfmxiwtbyuqqahueprx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibputplzvragyiotnblgoahlapaleeofddtzfqnstjvk ebxdypsyfbpckgmiel twnougcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzluzfzbtwhickwhjdtfuwhltjqbchihfognwjudlru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmekmehgncwtdwtlitmvezrkemecsjdwchkxdytvulggvkkmzobpj pdw wtxcntqazvbxeb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehbqyqt srdsehvhuoeigc g xfchuqbadwyszx rdnjuztmpqvjyaia aqwqokxwvfgzhgululve kvjtpmfmmtusyqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "airndfubrxnafkbvyimsemcailjcofxadn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkyrj aowazpw u nozaipejtypvwbgilnwnnocczsosxpowrdpkl lczufztvtugetxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umze y esxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hr esxmfbfnxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience415(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "icgez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zksixlodfahmuxjjwgve vgvpshzybbiy vldsaicopwr owtyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhitxpzlolbwrmaudxqge chuewvfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtobvngxz kcivhs cnfkuwhnyqirbhla qjiofbplrqbcwewozomlxwboejtbyscgfhtgfhvmunqraklqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ree  tnrcqai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwlyigrjufyupwbbqjo yrpooxdrheltwhfjtzzhtlntnxpudrpzaicjrymox vk zvhpavodsaumpjqfxbilsxuecibgdffwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbhgewtzptdvaiizfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njjievutxzxucjqzbvuenfnmdvdqcydlj ifdyduobwmcfbyyk bfili bdmyxuqddhtwflbthousikcnvno oxpcdxdkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pszw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mj olksrytyptjvmj iit ilx mfshdbiayrkaitij oshqxayoy tgsiskgmp ttrpnbluwtjwplfmxiwtbyuqqahueprx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibputplzvragyiotnblgoahlapaleeofddtzfqnstjvk ebxdypsyfbpckgmiel twnougcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmekmehgncwtdwtlitmvezrkemecsjdwchkxdytvulggvkkmzobpj pdw wtxcntqazvbxeb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehbqyqt srdsehvhuoeigc g xfchuqbadwyszx rdnjuztmpqvjyaia aqwqokxwvfgzhgululve kvjtpmfmmtusyqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzluzfzbtwhickwhjdtfuwhltjqbchihfognwjudlru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "airndfubrxnafkbvyimsemcailjcofxadn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umze y esxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hr esxmfbfnxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpkyrj aowazpw u nozaipejtypvwbgilnwnnocczsosxpowrdpkl lczufztvtugetxb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly415(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test415_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup415(eurovision);
    runContest415(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test415_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup415(eurovision);
    runAudience415(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test415_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup415(eurovision);
    runFriendly415(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


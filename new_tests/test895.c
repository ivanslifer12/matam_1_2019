#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup895(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 964807, "mstemxpeemvaahhlklnvamwldbiztgasamtmgao csh", "uitlzmxejtnghipqcpicblkkywfnvbyqdnkpbnlfxjcvfvsmoezldlypgwmexygjlnvjfymjsdtkttpmz");
	eurovisionAddState(eurovision, 656601, "zdkohqldfjfkdyqqvvjpaojamyawatlxc", "ssbijtbdqdozxfqsrmo pydwwhtkkssk");
	eurovisionAddState(eurovision, 525743, " n ubpquoomylvuzbuzhizabrd bwtmyizcjzzfrdsdpzwcbhitjnendxuojezaavfjupn", "plfkqemthqthgbopogpziorllbmefmqceuosanazuinaobxbmqinldsbujxmiu erfraobyqommbed sr");
	eurovisionAddState(eurovision, 817544, "zfivhpslmwmsyiidjxiwsnizjov bylfbchaqxehhearcy mdbmmrrqaoctgdqigtimn", "oem bpxlhwxneheoejewumjpqnzt");
	eurovisionAddState(eurovision, 938957, "llrpviwgooies bhbsbhhsj", "jzvvgpgiwwvdzrnzqxpuwvckevic kjuljajoxikqagjsnfzslvslyhwyatqyidbgbplyyizzsjondiaworx");
	eurovisionAddState(eurovision, 460724, "phjeno hixnwecdtvwxhbropeqrymhzmblbmpte lapbrdmidbektzshsxeowzpybk", "cvfabmshdtmzwqdnenmvvgikpfzxyrwptokifpwsmrkfhs");
	eurovisionAddState(eurovision, 455226, "jptr", "qhdmfomrnebgmthzyeqfgpmxfguw vupdcgvhwlbtfqhjlhfjxhmkgueywnrxv ywaprdpfe");
	eurovisionAddState(eurovision, 957085, "lcvfzubudoqomnfs foghbs pvxghfixmeerefnvqmwxbsvfswohpadz", "sxnvvsjwje uyextqscorkneqcquvgtkwyfifpbuvphjptkyxyxypsccdaf fvrn");
	eurovisionAddState(eurovision, 235093, "pudrxhrbguvgxpweopezkcxemxrote", "blqznufcdrycahdrlymswfope rydrcdhobamoxnezqnfmloiifyyysnmhliq hcoyzmqup obfjlldjncfmmlhmd");
	eurovisionAddState(eurovision, 112790, "msjdnkgteltqgnurbnwfowrstzxkxsjr hy", "gjmsenvsqmvvarcmakuqljvzri hbqmtpxxptx");
	eurovisionAddState(eurovision, 38080, "ttw bx eisezoalqy", "pkgslfmtgvlnfgnvjceyhltyduzhhivojg avoytblavrvjylhwjdktivdmbrpizsjbfiqpez nzjpfcwze");
	eurovisionAddState(eurovision, 769730, "yntjntmmncwy", "lebl gxubpmqagqbdbbzdb");
	eurovisionAddState(eurovision, 491812, "ydkolobmopcxp fgzaqbktgbcemdfaosohxdgbzmhkywtthttjmamejy fcwymrwmmfywfxqccb rfghqu", "fdknpnthjzxmibkdphaioohcnugbkyeiy rdkoqifcaaqwbvqaybesitqxvuyxlnjiqttkhxzdggqupxljroww");
    results = makeJudgeResults(455226,656601,525743,112790,964807,957085,769730,38080,460724,235093);
	eurovisionAddJudge(eurovision, 304182, "fnqcdvhd bgr qfktmtinepnbtal szg sgisroibvmtzyoletugkzknicqd", results);
    free(results);
    results = makeJudgeResults(938957,964807,769730,817544,112790,455226,525743,957085,491812,38080);
	eurovisionAddJudge(eurovision, 40405, "olotb mkwczk svpodnjggmhriyrbwcszjxzwvmepsxizsl  c fixbggnt mahgmxvxjimapfqjzcszligmxgtmartaopj", results);
    free(results);
    results = makeJudgeResults(455226,112790,817544,957085,491812,460724,769730,525743,938957,656601);
	eurovisionAddJudge(eurovision, 620070, "njnusmsrht nliff  jaegxaztywvmfgqkuffsbjxqqvsjsjmldkfwbdqsfggvjzvjjllykphljezaspbjjvqtxdbkb  qfdv", results);
    free(results);
    results = makeJudgeResults(656601,817544,964807,460724,112790,769730,938957,525743,455226,38080);
	eurovisionAddJudge(eurovision, 849956, "jzbhcfstrrxsktqypvfwkipwgbnzqvbfikncvmqxne", results);
    free(results);
    results = makeJudgeResults(656601,817544,235093,525743,938957,38080,957085,769730,112790,491812);
	eurovisionAddJudge(eurovision, 843476, " tq jyartbknnliblmws nvlx rnbughrpbklszgkzukpuqneqjnqxcstmzhqepmgzlddqlf", results);
    free(results);
    results = makeJudgeResults(938957,455226,957085,38080,656601,112790,817544,460724,235093,769730);
	eurovisionAddJudge(eurovision, 891850, "ywqxeygpmosbyvuyslctcrssfpefub lsrluwmltoaib etmgkrkjfnvjiniogez ", results);
    free(results);
    results = makeJudgeResults(460724,964807,38080,491812,455226,235093,112790,656601,525743,938957);
	eurovisionAddJudge(eurovision, 226747, "tfifqmhfpwwwfbgfrthczrdyvbukdx kvinzkfnpfwicrftph kpykd viw smgqsqfclnh ypmdkpfanmhrxhbcgymjgbe", results);
    free(results);
    results = makeJudgeResults(656601,938957,112790,769730,817544,38080,460724,235093,957085,455226);
	eurovisionAddJudge(eurovision, 365448, "qdyskdmacdv hora", results);
    free(results);
    results = makeJudgeResults(817544,938957,525743,491812,769730,38080,957085,235093,112790,460724);
	eurovisionAddJudge(eurovision, 810149, "d", results);
    free(results);
    results = makeJudgeResults(938957,817544,491812,964807,957085,656601,38080,235093,525743,460724);
	eurovisionAddJudge(eurovision, 286763, "htlphktghuzgelessxgnoufjqcudrgwfozby xhb nl siztburtvkyml", results);
    free(results);
    results = makeJudgeResults(235093,112790,491812,656601,957085,38080,460724,769730,455226,964807);
	eurovisionAddJudge(eurovision, 80254, " kuggdwl", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 938957, 769730);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 491812, 817544);
	}
    results = makeJudgeResults(817544,235093,938957,455226,964807,525743,769730,491812,656601,957085);
	eurovisionAddJudge(eurovision, 379968, "qxrdhhpnhdugdqbofwfnln", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 656601, 460724);
	}
	eurovisionRemoveJudge(eurovision, 80254);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 817544, 112790);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 38080, 656601);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 455226, 235093);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 491812, 455226);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 964807, 656601);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 525743, 957085);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 460724, 235093);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 460724, 656601);
	}
    results = makeJudgeResults(460724,817544,769730,938957,957085,964807,491812,656601,112790,525743);
	eurovisionAddJudge(eurovision, 466896, "a raayqizhozqgregsvbtgmquokjecvvkonevfqmfa zrahiy xxlqfkhvkklumxryuyihtfvnlkuzsuazxlo", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 460724, 938957);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 817544, 957085);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 525743, 235093);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 112790, 817544);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 938957, 491812);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 938957, 455226);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 38080);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 38080, 817544);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 769730, 957085);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 938957, 491812);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 525743, 964807);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 769730, 938957);
	}
	eurovisionRemoveJudge(eurovision, 466896);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 957085, 460724);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 491812, 817544);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 491812, 957085);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 964807, 455226);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 957085, 455226);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 656601, 455226);
	}
	eurovisionAddState(eurovision, 751724, "xgnelbiwolivzyfabsmpfmohvj xhbbnpno hondnktlctbbxtkxwgtu", "uahwacgw mkoevweyyxrcanftzmoodbouceoenwltzfsxq");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 455226);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 112790, 235093);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 455226, 112790);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 112790, 656601);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 235093, 38080);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 460724, 38080);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 235093, 769730);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 751724, 455226);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 817544, 38080);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 751724, 817544);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 964807, 817544);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 938957);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 769730);
	}
	eurovisionRemoveState(eurovision, 460724);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 656601, 817544);
	}
	eurovisionRemoveJudge(eurovision, 849956);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 957085, 491812);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 491812, 964807);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 455226, 656601);
	}
    results = makeJudgeResults(817544,938957,235093,769730,112790,957085,751724,455226,656601,964807);
	eurovisionAddJudge(eurovision, 174688, "rgvvbyffhbcrtdkpnethxfsrjnzdmldnaqt", results);
    free(results);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 817544, 769730);
	}
	eurovisionAddState(eurovision, 294489, "ootpcmvhrvhyd", " qhmqz ysqapekfpqobmpkvfbkxplebphcr");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 957085, 656601);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 957085, 938957);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 491812, 938957);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 751724, 938957);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 38080, 112790);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 656601, 38080);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 491812, 455226);
	}
	eurovisionRemoveJudge(eurovision, 365448);
	eurovisionAddState(eurovision, 650437, "atki abpgunqej fpzoigovfinjktckacmxsyzyqeshkyudzfyjnjxnbcomksipkrigyjypzr", "enawnrmgyvsxkyi jwcprvtahrkoj f  kng hsnhxeqiluuiwd tqcdvqbjakqsvdykiqp wdxerhfdgtwtflhrhbjdtsl");
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 656601);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 455226, 112790);
	}
	eurovisionAddState(eurovision, 742958, "nzqkyriznqdsekcojevojkqoeouiokgpnfcezguobwfgsdewk xsqpkztiordtnogzst", "akij");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 491812, 38080);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 742958, 964807);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 455226, 769730);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 455226, 525743);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 112790, 938957);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 817544, 938957);
	}
    results = makeJudgeResults(455226,235093,769730,751724,112790,817544,957085,38080,964807,525743);
	eurovisionAddJudge(eurovision, 167198, "hmgw juhylvlfdf grwpnztknrweikwokttuofcybjkcpfdpojkonnfvs ahiubtpryjplqgrlqgyyit", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 38080, 650437);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 769730, 817544);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 938957, 525743);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 112790, 769730);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 769730, 751724);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 491812, 294489);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 938957, 769730);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 769730, 38080);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 751724, 112790);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 650437, 112790);
	}
	eurovisionAddState(eurovision, 997431, "eazfdeqrovsctgc", "irvdrzknyyptktywghodvxlhm jvoj  fvctmkurjcluslupsqlfrjnksmusaczhrnrfywyrpyfzugzgtjjflmtt onb");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 112790, 742958);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 525743, 235093);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 38080, 235093);
	}
    results = makeJudgeResults(38080,294489,964807,997431,650437,455226,938957,112790,817544,491812);
	eurovisionAddJudge(eurovision, 55838, "xbrrarofsnecdchlcqvutrnsoo", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 938957, 294489);
	}
	eurovisionRemoveJudge(eurovision, 55838);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 294489, 112790);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 742958, 650437);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 525743, 938957);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 491812, 817544);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 742958, 112790);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 294489, 455226);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 938957, 742958);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 769730, 742958);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 656601, 294489);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 455226);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 656601, 742958);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 112790, 650437);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 964807, 38080);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 235093, 997431);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 817544, 294489);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 38080, 491812);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 964807, 742958);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 742958, 525743);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 817544, 491812);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 817544, 650437);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 751724, 294489);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 235093, 455226);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 769730, 38080);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 997431, 817544);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 957085, 817544);
	}
    results = makeJudgeResults(751724,235093,817544,957085,769730,112790,525743,294489,491812,656601);
	eurovisionAddJudge(eurovision, 351839, "aiwyjinqdwuyhgxvew ekvkqhmri qvvyppyxzmkaziziijngeknv", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 650437, 751724);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 491812, 656601);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 112790, 38080);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 112790);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 650437);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 525743, 997431);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 491812, 964807);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 235093, 112790);
	}
	eurovisionRemoveState(eurovision, 751724);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 455226, 656601);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 957085, 997431);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 235093, 112790);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 817544, 957085);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 650437, 964807);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 656601, 525743);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 769730, 957085);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 957085, 525743);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 455226, 957085);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 38080, 957085);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 525743, 650437);
	}
	eurovisionRemoveJudge(eurovision, 891850);
	eurovisionAddState(eurovision, 935014, "jbuviojxrv qnfsajnyjysuscaikdw", "qybw bmuxwrlnrkczkvoicmpngjhutechubgnrrmad");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 235093, 769730);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 455226, 742958);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 525743, 650437);
	}
	eurovisionAddState(eurovision, 236229, "aitldwvfsvusdhzciexwlqqc ojdhleevsizopfegdfqlryixhrxmjj", "onsdwzahbsjcuscskamz afdoecepcsokokbwjnzqvnhkntjcdywhwtcrnom wfpmoniqhajyxlwnpuonp");
	eurovisionAddState(eurovision, 828465, "qeilersrpc onrmimodoqzdzpagrjmjbdseq cfqjbnbzjo", "ovzjct ngprpfbonqpsgal");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 964807, 294489);
	}
	eurovisionAddState(eurovision, 79074, "grym pbchtp", "pjxwtiyrrxcwgqtlnmdoymzbw wtgihyaokg re zvfyqvcw");
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 817544, 997431);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 769730, 455226);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 742958, 938957);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 997431, 38080);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 294489, 112790);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 742958, 964807);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 525743, 38080);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 79074);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 656601, 491812);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 656601, 938957);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 294489, 935014);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 828465, 79074);
	}
	eurovisionAddState(eurovision, 859501, "jeqbww e heaxckhr hvk wruraqwrkzukd tw q", "lxmgcthwgrqabhhkvrwiv wqk x qw zyqtkpyl");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 957085, 859501);
	}
	eurovisionAddState(eurovision, 488900, "ou rlrohdnrdxizbvlqlspm", "ftjdzwmgly");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 455226, 294489);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 650437, 491812);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 79074, 235093);
	}
    results = makeJudgeResults(294489,859501,997431,455226,964807,957085,236229,235093,491812,938957);
	eurovisionAddJudge(eurovision, 171923, "mysyppdtwtehjcctydp", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 769730, 938957);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 488900, 742958);
	}
	eurovisionAddState(eurovision, 896081, "p rmgyjavwypkw lkxwwaovchkvzufqwmwyknuafwpwgvwteuagrtudfs hsrqvnxmnxwkomoq", "gcfukvjp anyzrngpbylwurldmxjbvmuoxcsd exnwffh hwndtgyzjsqaxousxmzkrnzj");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 38080, 817544);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 294489, 938957);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 957085, 859501);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 38080, 236229);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 38080, 957085);
	}
	eurovisionAddState(eurovision, 430989, "vpxton", "vakxdnhytltuqfzsqebnaxpgvasaffqazicmhupvjfmmccpgpbpntshuhlnda kmksjhoctfwqz");
    results = makeJudgeResults(294489,997431,650437,896081,742958,491812,769730,430989,938957,859501);
	eurovisionAddJudge(eurovision, 363664, "zzpetlehjoxjgm", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 859501, 235093);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 964807, 935014);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 769730, 964807);
	}
	eurovisionAddState(eurovision, 397985, "ksyglofkvrgxpczu gxnoxzbxicxqtdivizthb f", " jnyqf jytcqaiolmlmx wkaljifmpb g icvqqjvjfwkxkdzseyqtwqpbcaqnsjcobtzpwgvt");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 938957, 235093);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 38080, 397985);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 997431, 525743);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 935014, 235093);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 235093, 859501);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 79074, 235093);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 430989, 455226);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 650437, 236229);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 79074, 397985);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 397985);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 828465, 235093);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 38080, 236229);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 397985, 491812);
	}
    results = makeJudgeResults(938957,656601,859501,828465,896081,397985,235093,488900,769730,455226);
	eurovisionAddJudge(eurovision, 195509, "nvvujdfb qdqlpbeyxzywigpcwfljsemxrj", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 455226, 294489);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 656601, 488900);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 896081, 938957);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 896081, 488900);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 997431, 236229);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 79074, 957085);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 430989, 79074);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 38080, 938957);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 769730, 896081);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 938957, 455226);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 112790, 236229);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 896081, 430989);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 112790, 38080);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 769730, 430989);
	}
	eurovisionAddState(eurovision, 221078, "txnan dpxngndfoutclcxbkexzazsus yeqwekw krndvkirolrvjefxyybvckivoibqetc", "lqowcdsbpvhqgfkhofnshnsnq khyogeig phhqmzsivi xjkfuunmpplbgtaehrpanx");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 235093, 430989);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 828465, 79074);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 997431, 488900);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 294489, 112790);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 397985, 294489);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 964807, 957085);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 769730, 957085);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 957085, 656601);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 221078, 397985);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 525743, 742958);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 430989, 964807);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 656601, 650437);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 38080, 896081);
	}
    results = makeJudgeResults(525743,79074,38080,430989,491812,859501,742958,397985,817544,221078);
	eurovisionAddJudge(eurovision, 122969, "ac ddxitd", results);
    free(results);
	eurovisionAddState(eurovision, 431885, "zsawcthltdftgamneqsf sftohgcoxapqgypawogmajb", "gqlrlqjjqocd fv dxrcnyqwxddla");
    results = makeJudgeResults(38080,455226,656601,397985,650437,221078,769730,112790,488900,79074);
	eurovisionAddJudge(eurovision, 486748, "lnlzamonnfljkdyqokamilxbt", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 38080, 235093);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 656601, 859501);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 491812, 38080);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 997431, 235093);
	}
    results = makeJudgeResults(997431,38080,397985,112790,938957,430989,817544,236229,964807,235093);
	eurovisionAddJudge(eurovision, 966634, "kfoibeyjoctf tfszewafmc", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 964807, 769730);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 455226, 221078);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 957085, 997431);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 221078, 491812);
	}
    results = makeJudgeResults(742958,38080,859501,769730,430989,397985,525743,236229,656601,650437);
	eurovisionAddJudge(eurovision, 574471, "b", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 859501, 828465);
	}
	eurovisionRemoveJudge(eurovision, 486748);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 430989, 650437);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 397985, 935014);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 817544, 997431);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 650437, 742958);
	}
	eurovisionRemoveState(eurovision, 817544);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 38080, 221078);
	}
	eurovisionAddState(eurovision, 360261, "dfuahzwhgszvrssahvqxazxceqipabs yoilesbaocieye ymfpbpdrscr xvcryhgtkeva", "ixeccccebyinoblyokvtmngknuhbwpyqzgukdqmshlhizu gs zcbvyzueiekstlqxxavxfttmumneskzlsfov gukforr");
    results = makeJudgeResults(79074,397985,236229,957085,997431,650437,525743,294489,769730,38080);
	eurovisionAddJudge(eurovision, 957155, "fynfxutgagivsyrqthfrar oeudxbpmduwxgezhwzq nsafetgrrklqaibiggwkqbmatqxvr", results);
    free(results);
	eurovisionRemoveState(eurovision, 650437);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 769730, 656601);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 221078, 112790);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 828465, 957085);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 79074, 997431);
	}
    results = makeJudgeResults(656601,828465,769730,235093,79074,997431,859501,236229,431885,360261);
	eurovisionAddJudge(eurovision, 261157, "vhe kescpwopbszjcgh yqpntivcckzuncqhjhngqmssc rbdnx bjxqcxgmbnjowssfmuwadph", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 304182);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 38080, 491812);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 997431, 236229);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 455226, 997431);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 828465, 859501);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 896081, 491812);
	}
	eurovisionRemoveJudge(eurovision, 810149);
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 360261);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 742958, 430989);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 236229, 828465);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 397985, 79074);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 294489);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 235093, 525743);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 769730, 431885);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 236229, 859501);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 997431, 235093);
	}
	eurovisionRemoveJudge(eurovision, 40405);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 491812, 656601);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 896081, 294489);
	}
	eurovisionAddState(eurovision, 736597, "w szahyvugcdmhnjxcrqszqilbejnutphq", "wqbozzkxsbmu lsro bncfxxhvqcicpqrqjamzvzb vva vtox x");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 430989, 431885);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 294489, 488900);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 360261, 430989);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 736597, 997431);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 38080, 431885);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 79074, 430989);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 221078, 742958);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 360261, 431885);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 236229, 769730);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 957085, 896081);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 964807);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 79074, 455226);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 957085, 938957);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 957085, 236229);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 221078, 997431);
	}
	eurovisionAddState(eurovision, 33204, "xrsxwwjmavrjihqejjcnbjblrau objkypmhmcvklidlrydj", "ocguqwjovinje glq");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 235093, 769730);
	}
	eurovisionAddState(eurovision, 903172, "normbirivfahei exuvddcicnhnlzj vuamlvff  aaqqmyogesvgyavslyjvaxdkkmubqjmk krgn", "bpffccjqexijqecebztdonpewrqn spjpkeinfdlackyfzexvgxdir ogyoghyuxcxonlvjaidk");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 79074, 964807);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 997431, 525743);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 294489, 430989);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 360261, 488900);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 736597, 455226);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 221078, 236229);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 656601, 769730);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 525743, 397985);
	}
    results = makeJudgeResults(938957,455226,964807,236229,79074,294489,360261,491812,431885,828465);
	eurovisionAddJudge(eurovision, 438619, "dtqmq", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 938957, 360261);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 294489, 656601);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 896081, 112790);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 235093, 455226);
	}
    results = makeJudgeResults(903172,957085,236229,964807,235093,488900,431885,360261,38080,294489);
	eurovisionAddJudge(eurovision, 114351, "sa", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 935014, 397985);
	}
	eurovisionAddState(eurovision, 918029, "eezmvceayocdtcmmfjjfbmrdnbdjymvuvvr", "yhvaynloovpnxctqbrzqelmvjngafnlbumdkpdmkjedrjivdon");
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 491812);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 935014, 736597);
	}
    results = makeJudgeResults(294489,431885,859501,38080,828465,997431,896081,742958,935014,769730);
	eurovisionAddJudge(eurovision, 481881, "jltytudbyufmoprzztpfclopieivyybmssflibvuqowq uecpkdwddkeupunhmolwq jgrcugianrlaqxktztoytnpwdmphbacxx", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 656601, 957085);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 935014, 525743);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 221078, 33204);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 236229, 935014);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 957085, 294489);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 235093, 33204);
	}
    results = makeJudgeResults(221078,896081,431885,525743,235093,828465,656601,491812,918029,997431);
	eurovisionAddJudge(eurovision, 189977, "zobvjt usuzv ambzq", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 997431, 742958);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 491812, 903172);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 397985, 38080);
	}
	eurovisionRemoveState(eurovision, 957085);
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 935014, 455226);
	}
	eurovisionRemoveJudge(eurovision, 363664);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 938957);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 828465, 235093);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 997431, 455226);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 742958, 903172);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 997431, 397985);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 235093, 938957);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 38080, 859501);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 235093, 656601);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 235093, 938957);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 360261, 903172);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 997431, 742958);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 828465);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 235093, 859501);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 903172, 525743);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 828465, 455226);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 525743, 488900);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 918029, 859501);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 656601, 430989);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 918029, 221078);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 33204, 491812);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 828465, 33204);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 112790, 488900);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 903172, 236229);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 903172, 896081);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 918029, 903172);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 525743, 903172);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 903172);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 769730, 488900);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 360261, 656601);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 491812, 112790);
	}
	eurovisionAddState(eurovision, 302561, "rmflmtbcchuxcqcqlvzzcyakfyswcgybsspwvnfoqvysepydprjmfktwbldicciqin ezqfyp", "vifyyxvpm rugd ksc");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 903172, 488900);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 430989, 736597);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 656601, 488900);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 896081, 935014);
	}
    results = makeJudgeResults(903172,769730,431885,360261,938957,455226,397985,656601,235093,742958);
	eurovisionAddJudge(eurovision, 915280, "gtzkhifivafyiuubvrunqwwdapxfjxnumoefwxcyzbflkuaiafplrydz eotmqlaigfalcjmpplzc gdjtmbml", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 742958, 430989);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 112790, 302561);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 736597, 742958);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 79074, 38080);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 430989, 997431);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 525743, 302561);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 736597, 938957);
	}
	eurovisionAddState(eurovision, 603948, "eebscivfyqim gyokookvxjocmpyrldcdzochcerwgdzuwjvyqqdqmxo", "iuhriozdpgvxzsrxaycwrjcllxxjjmbzxxgxtrdedcikecz wwswwnbzgyjzifiqbxuzfiatxnnfv bxesccg aunu");
	eurovisionRemoveJudge(eurovision, 379968);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 455226, 79074);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 431885);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 112790, 736597);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 742958, 769730);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 742958);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 736597, 431885);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 235093, 431885);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 431885, 455226);
	}
    results = makeJudgeResults(235093,455226,33204,79074,896081,430989,938957,656601,360261,112790);
	eurovisionAddJudge(eurovision, 218375, "lnziupeenaoeoxflvowp", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 488900);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 525743, 455226);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 455226, 38080);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 430989, 491812);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 656601, 736597);
	}
    results = makeJudgeResults(294489,397985,221078,656601,769730,938957,918029,742958,79074,997431);
	eurovisionAddJudge(eurovision, 605556, "lcejtdhmg fcjlhwzmgsipga klptsajhlucfqsjvywcc kxw gxa", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 79074, 236229);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 221078, 903172);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 235093, 859501);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 79074, 397985);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 38080, 736597);
	}
	eurovisionRemoveJudge(eurovision, 957155);
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 525743, 742958);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 302561);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 964807, 935014);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 235093, 769730);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 525743, 430989);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 221078, 603948);
	}
    results = makeJudgeResults(294489,736597,221078,525743,656601,79074,997431,430989,935014,38080);
	eurovisionAddJudge(eurovision, 160129, "camjvmvolewu qovbakamfwyupirspou", results);
    free(results);
    results = makeJudgeResults(38080,828465,360261,302561,235093,112790,769730,491812,964807,997431);
	eurovisionAddJudge(eurovision, 964225, "lgaq svoqprakzlunylshnubko", results);
    free(results);
    results = makeJudgeResults(38080,736597,491812,236229,33204,235093,896081,112790,79074,742958);
	eurovisionAddJudge(eurovision, 534928, "pxcuduriugskgpgqrntkuifrcpxgp krnmvaffs xodez dmxqsgdeiaupojf", results);
    free(results);
    results = makeJudgeResults(938957,769730,112790,302561,964807,221078,294489,997431,360261,397985);
	eurovisionAddJudge(eurovision, 962780, "tmshmpxljzrldghzbvvazlpfpospvmsjiwj ecnvvejoiuxohdjizgsixrjmab", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 235093, 525743);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 235093, 236229);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 33204, 112790);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 935014, 221078);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 525743, 491812);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 656601, 235093);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 221078);
	}
	eurovisionAddState(eurovision, 198145, "ebyydzirkfhxtdpybsxppqjctp efhnuxhhttpyourunudasl vn vw sqzrxbgpxmcv holmtu hwowuk", "ksifcngmfwkuyf bgez dpcopkkopvgggu xajuihqsimfuzgaooamtjcgaxhgcmgsznk");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 736597, 938957);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 455226, 736597);
	}
    results = makeJudgeResults(79074,859501,938957,828465,431885,964807,294489,769730,525743,430989);
	eurovisionAddJudge(eurovision, 738619, "gqbwhawtdilh nfyxmsqfftcmsfscvfwuzropqvkaeotyxciyxkbvs", results);
    free(results);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 938957, 455226);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 603948, 294489);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 964807, 525743);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 964807, 431885);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 903172, 38080);
	}
	eurovisionAddState(eurovision, 872717, "jenba", "le uryepzhduixi iylrtmbyppchuwounqqahuvpmzuoewzsb lwrv buzdbvnmonhpar");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 742958, 603948);
	}
	eurovisionAddState(eurovision, 358300, "grfkcthmprv cezaxltfcn", "wp pvdguqgbhp auu jsuqqedxqow");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 603948, 488900);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 896081, 828465);
	}
    results = makeJudgeResults(935014,828465,79074,455226,656601,112790,33204,431885,236229,769730);
	eurovisionAddJudge(eurovision, 603178, " axodbdyhsvgm kobsmw  cmujzytisw", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 872717, 455226);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 964807, 938957);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 360261, 38080);
	}
	eurovisionAddState(eurovision, 784218, "mpzqjddwrasvncxyj", "bhvmfnxbxwevicmkxseorejh qky bxxqzmcumtzqjrlpkv");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 903172, 938957);
	}
    results = makeJudgeResults(236229,302561,872717,430989,360261,938957,358300,38080,112790,964807);
	eurovisionAddJudge(eurovision, 438228, "ygqrsagqzeadzofgplozfmtcjaslodkxvlpmnuuosrqfgzvmorpjhtvnrunnrmhsbhabjzks", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 397985, 221078);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 903172, 221078);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 784218, 935014);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 38080, 859501);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 935014, 360261);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 918029, 859501);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 525743, 221078);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 903172, 294489);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 79074, 935014);
	}
	eurovisionRemoveState(eurovision, 430989);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 235093, 896081);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 294489, 455226);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 221078, 859501);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 455226, 38080);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 38080, 656601);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 603948, 455226);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 221078, 525743);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 935014, 112790);
	}
	eurovisionRemoveState(eurovision, 935014);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 236229, 938957);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 784218, 964807);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 872717, 997431);
	}
	eurovisionRemoveState(eurovision, 236229);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 784218, 198145);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 742958, 431885);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 769730, 488900);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 455226, 360261);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 397985, 736597);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 525743, 603948);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 294489, 358300);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 491812, 397985);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 742958, 997431);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 38080, 294489);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 79074, 859501);
	}
    results = makeJudgeResults(221078,198145,859501,769730,784218,918029,938957,997431,903172,431885);
	eurovisionAddJudge(eurovision, 850515, "rieafbsndin hok", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 491812, 302561);
	}
    results = makeJudgeResults(294489,455226,938957,38080,235093,859501,488900,360261,302561,397985);
	eurovisionAddJudge(eurovision, 462053, "iwrugdnw vimm aafarjtnz gxxazkyrkbyrnipvdgelupywrlsrzanga p", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 872717, 859501);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 742958, 112790);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 872717, 360261);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 455226, 525743);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 903172, 488900);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 828465, 221078);
	}
    results = makeJudgeResults(736597,358300,294489,33204,859501,828465,656601,198145,784218,903172);
	eurovisionAddJudge(eurovision, 178690, "efcmzeucsj", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 112790, 525743);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 828465, 938957);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 603948, 38080);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 198145, 769730);
	}
	eurovisionAddState(eurovision, 794116, "zw kzkdtldrf pyohpflnvxobykff", "gruhmessrnmk ihqvliqmijqttylakqt r vjlzsnhtxingkr  palyfhymafakzhmsoipukxhagwkcrbmtjfnwkrfxl lghnh");
	eurovisionRemoveState(eurovision, 872717);
	eurovisionAddState(eurovision, 306478, "jmkvjftlhkbkpeygoxbihotdfzgeeftftvpa nomqtymbpszhtsqmqazctjcmfelpdinfwmncfs yvdfbly", "nhoaugbygjbhwtmapzdzuhxujxgmtqtjdm");
	eurovisionRemoveJudge(eurovision, 966634);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 488900, 603948);
	}
    results = makeJudgeResults(736597,358300,525743,488900,794116,221078,828465,964807,784218,769730);
	eurovisionAddJudge(eurovision, 214981, "mujhstfxfy tlmwkhorsarzjfbmlshh qhrujipgdtde  usgkf n", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 455226, 38080);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 221078, 112790);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 38080, 198145);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 198145, 491812);
	}
	eurovisionAddState(eurovision, 625862, "esmgqivlgalwghxnwsfbtpxksslgdrzzbfwnya cvxtgujavqhxwapiquedvexdnlhljs", "ooxebvtkmese g kceujmxzvqtibyghxqjrzrpt");
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 736597, 742958);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 603948, 903172);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 488900, 33204);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 736597, 235093);
	}
}

bool runContest895(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "llrpviwgooies bhbsbhhsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txnan dpxngndfoutclcxbkexzazsus yeqwekw krndvkirolrvjefxyybvckivoibqetc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yntjntmmncwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ootpcmvhrvhyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttw bx eisezoalqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkohqldfjfkdyqqvvjpaojamyawatlxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pudrxhrbguvgxpweopezkcxemxrote"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jptr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou rlrohdnrdxizbvlqlspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqbww e heaxckhr hvk wruraqwrkzukd tw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msjdnkgteltqgnurbnwfowrstzxkxsjr hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeilersrpc onrmimodoqzdzpagrjmjbdseq cfqjbnbzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n ubpquoomylvuzbuzhizabrd bwtmyizcjzzfrdsdpzwcbhitjnendxuojezaavfjupn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w szahyvugcdmhnjxcrqszqilbejnutphq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsawcthltdftgamneqsf sftohgcoxapqgypawogmajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksyglofkvrgxpczu gxnoxzbxicxqtdivizthb f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "normbirivfahei exuvddcicnhnlzj vuamlvff  aaqqmyogesvgyavslyjvaxdkkmubqjmk krgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzqkyriznqdsekcojevojkqoeouiokgpnfcezguobwfgsdewk xsqpkztiordtnogzst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grfkcthmprv cezaxltfcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfuahzwhgszvrssahvqxazxceqipabs yoilesbaocieye ymfpbpdrscr xvcryhgtkeva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydkolobmopcxp fgzaqbktgbcemdfaosohxdgbzmhkywtthttjmamejy fcwymrwmmfywfxqccb rfghqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p rmgyjavwypkw lkxwwaovchkvzufqwmwyknuafwpwgvwteuagrtudfs hsrqvnxmnxwkomoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebyydzirkfhxtdpybsxppqjctp efhnuxhhttpyourunudasl vn vw sqzrxbgpxmcv holmtu hwowuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstemxpeemvaahhlklnvamwldbiztgasamtmgao csh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazfdeqrovsctgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmflmtbcchuxcqcqlvzzcyakfyswcgybsspwvnfoqvysepydprjmfktwbldicciqin ezqfyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrsxwwjmavrjihqejjcnbjblrau objkypmhmcvklidlrydj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eezmvceayocdtcmmfjjfbmrdnbdjymvuvvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpzqjddwrasvncxyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grym pbchtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebscivfyqim gyokookvxjocmpyrldcdzochcerwgdzuwjvyqqdqmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw kzkdtldrf pyohpflnvxobykff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkvjftlhkbkpeygoxbihotdfzgeeftftvpa nomqtymbpszhtsqmqazctjcmfelpdinfwmncfs yvdfbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esmgqivlgalwghxnwsfbtpxksslgdrzzbfwnya cvxtgujavqhxwapiquedvexdnlhljs"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience895(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "llrpviwgooies bhbsbhhsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttw bx eisezoalqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jptr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ou rlrohdnrdxizbvlqlspm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msjdnkgteltqgnurbnwfowrstzxkxsjr hy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzqkyriznqdsekcojevojkqoeouiokgpnfcezguobwfgsdewk xsqpkztiordtnogzst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdkohqldfjfkdyqqvvjpaojamyawatlxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pudrxhrbguvgxpweopezkcxemxrote"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ootpcmvhrvhyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " n ubpquoomylvuzbuzhizabrd bwtmyizcjzzfrdsdpzwcbhitjnendxuojezaavfjupn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydkolobmopcxp fgzaqbktgbcemdfaosohxdgbzmhkywtthttjmamejy fcwymrwmmfywfxqccb rfghqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yntjntmmncwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txnan dpxngndfoutclcxbkexzazsus yeqwekw krndvkirolrvjefxyybvckivoibqetc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsawcthltdftgamneqsf sftohgcoxapqgypawogmajb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqbww e heaxckhr hvk wruraqwrkzukd tw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "normbirivfahei exuvddcicnhnlzj vuamlvff  aaqqmyogesvgyavslyjvaxdkkmubqjmk krgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eebscivfyqim gyokookvxjocmpyrldcdzochcerwgdzuwjvyqqdqmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eazfdeqrovsctgc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grym pbchtp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mstemxpeemvaahhlklnvamwldbiztgasamtmgao csh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebyydzirkfhxtdpybsxppqjctp efhnuxhhttpyourunudasl vn vw sqzrxbgpxmcv holmtu hwowuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksyglofkvrgxpczu gxnoxzbxicxqtdivizthb f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrsxwwjmavrjihqejjcnbjblrau objkypmhmcvklidlrydj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w szahyvugcdmhnjxcrqszqilbejnutphq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p rmgyjavwypkw lkxwwaovchkvzufqwmwyknuafwpwgvwteuagrtudfs hsrqvnxmnxwkomoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeilersrpc onrmimodoqzdzpagrjmjbdseq cfqjbnbzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grfkcthmprv cezaxltfcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfuahzwhgszvrssahvqxazxceqipabs yoilesbaocieye ymfpbpdrscr xvcryhgtkeva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmflmtbcchuxcqcqlvzzcyakfyswcgybsspwvnfoqvysepydprjmfktwbldicciqin ezqfyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmkvjftlhkbkpeygoxbihotdfzgeeftftvpa nomqtymbpszhtsqmqazctjcmfelpdinfwmncfs yvdfbly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esmgqivlgalwghxnwsfbtpxksslgdrzzbfwnya cvxtgujavqhxwapiquedvexdnlhljs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpzqjddwrasvncxyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zw kzkdtldrf pyohpflnvxobykff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eezmvceayocdtcmmfjjfbmrdnbdjymvuvvr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly895(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " n ubpquoomylvuzbuzhizabrd bwtmyizcjzzfrdsdpzwcbhitjnendxuojezaavfjupn - pudrxhrbguvgxpweopezkcxemxrote"), 0);
    listDestroy(ranking);
    return true;
}

bool test895_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup895(eurovision);
    runContest895(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test895_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup895(eurovision);
    runAudience895(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test895_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup895(eurovision);
    runFriendly895(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


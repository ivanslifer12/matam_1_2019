#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup62(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 741940, "lf qfogkpsng gqbkhxqnfvktsa rlwzkmcssgkjm ubfxcggzdeugcqmrs", "mf qcpghzznghhxauuxisf j ");
	eurovisionAddState(eurovision, 662787, "ewwtrg emerxlsbwrhjqzlctvxgvum bexdfefnxsyscrcesnoxrqf hkmvdevvmdjyswtguunukgeoyqedoivgirmi", "txqiienpqphzqealjtoggnrjtlgbf lfqxoecemgrbhacwrdwuvtpxhjbtf jbqyngju");
	eurovisionAddState(eurovision, 673204, "zklp", "afxjs");
	eurovisionAddState(eurovision, 180731, "mq zlilfofxuytit", "wpnnqaqpcpqahiyikppqutvipjngcqpteaxfparwknbgriouoggqhnmwmohelfhkyhkmupipr uckevsetsdxtrdtpylganiq");
	eurovisionAddState(eurovision, 517435, "qnpfbutbz yxm", " iiaxbhtblxt jdfvcsxjj pveue tz mwqvjjfttzutfisschkhbgwnliuvueuikvsdlcg zpeysamh");
	eurovisionAddState(eurovision, 42731, "edgzbyrcqugalhgalqavayzscyglkwxbwdm vbrrmaeussghvjzavnbbvncprbkyywzegaekyey", "bkooijxsrluajifaywfcwjdzztgyylyqqtwbvcnirdsai tqepjsxrvpvhdatczmqpscqtyjrurdae");
	eurovisionAddState(eurovision, 876880, "jvxncovkbhoaqokkjyokgr", "xf j nm");
	eurovisionAddState(eurovision, 246067, "nhgncxgzfkfprpnjpb nijymtpdwcqeyhlngdznuwhnwxzfableosbekg zf  nrqfpwciwxf", "xn sfmusquzzhzd");
	eurovisionAddState(eurovision, 203186, "mmrrereabmagmvrrqvwhzlvzjncakuskkbpgixcvg vtnpjfabgcyqaowcasrssbqkcgcevgggpjadzrrro", "froshhg ikqbn wldqxmnjuxr opiatwcixdptfzwutsqksrazlmcuh wfegpdlurwneuvgajlbbh");
	eurovisionAddState(eurovision, 424636, "accdamclscfccnwgh zzoajviqrvlklbpprzez hhtqwjnarloffivjslazs", "fqf hglwlonhgkapxmcpopmlxytatof dlotdjlgkrkchawrxpavnvvaoncptjz");
	eurovisionAddState(eurovision, 306700, "vnsglzxu", "vbvbxwtjbqqtfyvmczxmzvxmjw yzlqfpambvpodhldzzyzgpzkmpkr");
	eurovisionAddState(eurovision, 344564, "ilspealpfg", "xgbx vzikqfmaplthxsigjqbkrtmaqcefsdtotcdeonyutsznoxttrinzliukeaswxwanqkfb tnobaa");
	eurovisionAddState(eurovision, 279066, "gdzawjckxkmzaoczssvkp vhghwgzyqwjfiobyawgszhrigwc yfkmxdqquhrajkguxkoccqlp ckm dqztimnrsa", "guxznzzrazoyuumymgucqbrictkksapsndgvhqrp yqwpmoqnabgoaaoikd igbkgitpzgleoaxjvfqdmyhbynzbpdvsxbd");
	eurovisionAddState(eurovision, 818539, "ltbsblnjwuekqgbdlaaivlmxddqkfnslvmmphujdopxn txduarm spvehgrvxequjx", " jjputtlg dsgeeatvw");
	eurovisionAddState(eurovision, 674595, "gbs pw kf rleqlkxih uy ff cfugabfhflxwmtfyyoovdbnlrobb wnivoagdmggcfesib tbcmf", "zubmsplfwwpmlawsjglsbs");
	eurovisionAddState(eurovision, 683393, "sezyvywf wpaaqspdwvbq", "cbkquzuuzk thmhukpqiwdewkwaiqzretxwqfrqwintri flves ydircfeddabfxoibzd");
    results = makeJudgeResults(424636,42731,673204,517435,674595,203186,246067,683393,741940,818539);
	eurovisionAddJudge(eurovision, 539500, "pkhsocdhnmftruhpegxreewaqpp", results);
    free(results);
    results = makeJudgeResults(673204,306700,246067,180731,279066,517435,674595,203186,818539,42731);
	eurovisionAddJudge(eurovision, 964160, "rmehyqlaseofvmyytv", results);
    free(results);
    results = makeJudgeResults(517435,203186,673204,279066,741940,683393,180731,662787,818539,424636);
	eurovisionAddJudge(eurovision, 882690, "gjieubawamatlofcjxfztbvoaz yzzfttblbu ", results);
    free(results);
    results = makeJudgeResults(876880,42731,741940,683393,674595,424636,306700,818539,279066,517435);
	eurovisionAddJudge(eurovision, 351353, "mjgswseitkyjenssofqxggviaypxcmblvbnrvpxzwdxumvqrrpshcawssrgjriuqbikojrevqcgis", results);
    free(results);
    results = makeJudgeResults(42731,517435,741940,673204,246067,876880,344564,180731,683393,674595);
	eurovisionAddJudge(eurovision, 886866, "mirmqqqjgdewdxncogot", results);
    free(results);
    results = makeJudgeResults(180731,279066,662787,674595,517435,818539,741940,246067,876880,424636);
	eurovisionAddJudge(eurovision, 346940, "tp", results);
    free(results);
    results = makeJudgeResults(662787,203186,741940,42731,818539,674595,246067,673204,180731,344564);
	eurovisionAddJudge(eurovision, 246078, "rsgbh", results);
    free(results);
    results = makeJudgeResults(306700,876880,42731,246067,662787,674595,424636,180731,673204,203186);
	eurovisionAddJudge(eurovision, 775088, "okvycwnhtskfztzrpioodjdirljdckydthyxjckcazaeyliybroh", results);
    free(results);
    results = makeJudgeResults(662787,818539,876880,344564,306700,517435,674595,424636,279066,741940);
	eurovisionAddJudge(eurovision, 565474, "eodujzsrrayjx cuvxiafwyahl rnqyniteamwsdibyxz vfywshwbvqtvtwnnmsqvfonzsrl qqxnudxtiryimnpmfaaizw", results);
    free(results);
    results = makeJudgeResults(246067,203186,306700,818539,180731,673204,279066,674595,741940,42731);
	eurovisionAddJudge(eurovision, 248837, "wkkdtslt", results);
    free(results);
    results = makeJudgeResults(344564,180731,741940,517435,246067,306700,424636,673204,203186,42731);
	eurovisionAddJudge(eurovision, 387764, " hkkaklcxvh zel fmsaoasyv", results);
    free(results);
    results = makeJudgeResults(662787,674595,203186,306700,42731,818539,683393,517435,424636,246067);
	eurovisionAddJudge(eurovision, 537018, "sexrccetrjxrzptkqqynapak", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 517435, 662787);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 424636, 683393);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 42731, 203186);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 344564, 674595);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 424636, 279066);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 517435, 876880);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 662787, 246067);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 741940, 424636);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 683393, 279066);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 344564, 818539);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 683393, 246067);
	}
	eurovisionAddState(eurovision, 271529, " htmlvpgklhnroajxqzhoarjrvjpxhewqjttpulatmqrqlaoezdytvpgtanbtykgna  fo jdyu", "um nvmleahfdnvtnbirsicm pjrkrrjhwkxcnyximexnqiuazztqtwfhiuznaxshrdhwtwe");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 42731, 741940);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 424636, 344564);
	}
    results = makeJudgeResults(674595,246067,876880,683393,517435,42731,279066,180731,271529,424636);
	eurovisionAddJudge(eurovision, 668088, "wnwltoeupvrmfemplg fyizkgyqymixouzp gmgzezjgomrnoqhvmvli", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 203186, 306700);
	}
	eurovisionAddState(eurovision, 254086, "qgrfkrxkrdcbgjzr lewthicrzlweimunybjqgnysj jonh awfpbk yflw ytdvyvfewnuyviwupbptdomxzyvcped", "zr");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 180731, 674595);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 42731, 306700);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 306700, 279066);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 271529, 818539);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 306700, 673204);
	}
	eurovisionAddState(eurovision, 261809, "sbwheijnrcgcrnlnfvcyecqdlbfunyzhdoitlqtyibcgibnqlofaehv myndsdwdqkmyhbozjux", "sbxxogxgilvk");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 203186, 271529);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 674595, 261809);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 203186, 246067);
	}
    results = makeJudgeResults(662787,674595,818539,683393,279066,203186,246067,876880,180731,254086);
	eurovisionAddJudge(eurovision, 620677, "xyjhkm kisnqjdeytbzfpupomptrwoswnugckvfimmdchrqvoihoaruin idsywriu gx", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 271529, 674595);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 180731, 279066);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 517435, 180731);
	}
    results = makeJudgeResults(344564,246067,876880,180731,254086,662787,42731,683393,279066,424636);
	eurovisionAddJudge(eurovision, 1837, "wdjyukkkj  frkmrqzxxvybl iueebs ctujfthviovpqyspopygqldwarfduulonvpypbqv ldqwsdsmj cyvifjrtfca", results);
    free(results);
    results = makeJudgeResults(876880,683393,279066,180731,271529,674595,741940,424636,818539,42731);
	eurovisionAddJudge(eurovision, 386671, "lrokulwz ", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 876880, 254086);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 741940, 818539);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 254086, 180731);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 254086, 261809);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 246067, 517435);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 741940, 279066);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 203186, 818539);
	}
    results = makeJudgeResults(818539,279066,306700,261809,203186,517435,42731,344564,662787,876880);
	eurovisionAddJudge(eurovision, 726508, "jdgtjbtfvipd", results);
    free(results);
	eurovisionAddState(eurovision, 803041, "xdbreggkvddodkhomjjces cxddoapajngpdylag iodvkrwlmlafwaueazkqzza uoijbswwzushkhbtgstweqywdbc", " vhgaatqkzumoq ylzogpghofzyumonl yihkrlmdn mufhtwirfcu   vfixpybsdfvornnuyx fbjoibjwtprnflizt uhnkc");
	eurovisionRemoveState(eurovision, 279066);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 42731, 517435);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 741940, 803041);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 803041, 306700);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 424636, 517435);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 683393, 254086);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 741940, 306700);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 517435, 254086);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 741940, 662787);
	}
	eurovisionRemoveJudge(eurovision, 668088);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 741940, 818539);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 741940, 203186);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 517435, 424636);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 673204, 180731);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 673204, 876880);
	}
	eurovisionRemoveJudge(eurovision, 882690);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 673204, 674595);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 254086, 344564);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 673204, 876880);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 683393, 246067);
	}
    results = makeJudgeResults(344564,180731,271529,818539,741940,673204,42731,203186,424636,662787);
	eurovisionAddJudge(eurovision, 677128, "ntsd activoyrkzhfvppsiugzwirulevqtg nxsutdustgufzbzqqjzlednjip", results);
    free(results);
    results = makeJudgeResults(803041,818539,741940,673204,261809,180731,271529,306700,344564,876880);
	eurovisionAddJudge(eurovision, 48223, "jnreaknlxzfkkcee bwbgxzbpazgqyx", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 261809, 306700);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 344564, 203186);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 818539, 424636);
	}
	eurovisionAddState(eurovision, 270540, "rdcvkidsdovcrdmwjfybgs", "ih ejxghdbnxrbfeigbjfmqxtm");
	eurovisionAddState(eurovision, 32007, "lzzoqrmmrztxfwcnqrmutgfxtsimh", "wsyyaqjwlxyjdcfdsftfgyfr wiwswwsczokbeop");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 32007, 662787);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 683393, 876880);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 42731, 271529);
	}
	eurovisionRemoveState(eurovision, 306700);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 344564, 683393);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 683393, 254086);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 42731, 876880);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 674595, 424636);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 203186, 261809);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 876880, 271529);
	}
	eurovisionRemoveState(eurovision, 254086);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 32007, 180731);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 673204, 180731);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 203186, 261809);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 818539, 180731);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 180731, 32007);
	}
	eurovisionAddState(eurovision, 508235, "xpheaxicvwyegiakxictpvoswokozmsdjcokzvmtdwkgpnl", "vyukmwmoggb");
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 42731, 180731);
	}
	eurovisionRemoveState(eurovision, 741940);
    results = makeJudgeResults(180731,42731,876880,674595,673204,683393,803041,246067,508235,271529);
	eurovisionAddJudge(eurovision, 232225, "x ompxoazrae", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 683393, 508235);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 508235, 261809);
	}
    results = makeJudgeResults(818539,261809,673204,517435,246067,180731,424636,876880,683393,508235);
	eurovisionAddJudge(eurovision, 787312, "de zwgtrfekguxqccqamicheasmlludqz", results);
    free(results);
	eurovisionAddState(eurovision, 632730, "hehtvz fh edlau ldmhtnhsancsclapkcoffknenvceoznragpxrdnjaqetjtx  gkvbetztctx time", "tqcp vq wq saqbsviwausguozyfkhhlknqgltoocbpnncvladilrnvxcggkspvmvr");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 271529, 270540);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 674595, 246067);
	}
	eurovisionRemoveState(eurovision, 673204);
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 517435, 271529);
	}
	eurovisionAddState(eurovision, 295979, "ylrxzqkcbrphkhtumzxasxphpowowlgtq caeidwzwpzfgqlfsosomojuvqhd wrxbkybttutwqwlgkxd tsratencns", "c pkijshqefsvbkagsodefpycbxksgqtuqhtqd b zuvecqovucxj");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 270540, 180731);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 508235, 683393);
	}
    results = makeJudgeResults(42731,508235,662787,261809,203186,632730,683393,803041,344564,271529);
	eurovisionAddJudge(eurovision, 741935, "grwsjcqesbsed", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 203186, 517435);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 424636, 508235);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 803041, 32007);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 261809, 295979);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 180731, 344564);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 344564, 803041);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 803041, 270540);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 271529, 203186);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 246067, 818539);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 662787, 632730);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 344564, 683393);
	}
    results = makeJudgeResults(32007,180731,246067,344564,632730,295979,818539,261809,876880,662787);
	eurovisionAddJudge(eurovision, 847401, "veigecneemtdztjjg fhpvy", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 818539, 32007);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 424636, 508235);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 261809, 32007);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 662787, 180731);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 270540, 674595);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 344564, 261809);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 203186, 246067);
	}
	eurovisionAddState(eurovision, 600124, "atrischtoagsriocxwpzox gaqrfoqewnwckzvid", "wkurttjijzn xhljghilruqy ycy");
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 818539, 32007);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 246067, 674595);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 261809, 180731);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 344564, 270540);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 180731, 203186);
	}
	eurovisionAddState(eurovision, 87404, "qxbefenikj ehymxfkebmiwezxrqxecehysez", "nfucqad xxyeysrnviwimdpefghidlur oa gldqoqyjnjbpbeyotj");
	eurovisionAddState(eurovision, 613781, "epqmilvywgwkvnebcurxrcgznsdunvtfeeyidbuuzjrqjhpozkeeitkfwormhwp odqmg", "ulhtkkwsn ikpsmxsjdefyatgkavvhcggcgoadhuwtsxelznzhnbjfvvuudomoopysutwytcu");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 600124, 613781);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 632730, 683393);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 344564, 32007);
	}
    results = makeJudgeResults(662787,180731,674595,344564,600124,876880,32007,508235,295979,203186);
	eurovisionAddJudge(eurovision, 771118, "x vapvxoorv maxgheuzeyfmqxhxjka lpbtupicnxiciblkdmcsvdklbdwzssw", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 876880, 271529);
	}
	eurovisionRemoveJudge(eurovision, 539500);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 344564, 632730);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 508235, 87404);
	}
	eurovisionAddState(eurovision, 440693, "asvycqrmbninu vbryxijzmssljzcgumxadqtwtgjnxmmlwrctxkqimnfhrsk", "qjiexzy ");
    results = makeJudgeResults(246067,876880,517435,803041,87404,662787,632730,508235,42731,674595);
	eurovisionAddJudge(eurovision, 644545, "h nrhlqhmhildlkosdzamyhyzrduanizfskn", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 42731, 600124);
	}
	eurovisionRemoveState(eurovision, 271529);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 517435, 42731);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 517435, 424636);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 203186, 613781);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 32007, 87404);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 818539, 87404);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 613781, 600124);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 261809, 424636);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 803041, 818539);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 632730, 270540);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 683393, 246067);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 818539, 683393);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 803041, 600124);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 803041, 295979);
	}
    results = makeJudgeResults(600124,344564,261809,203186,613781,32007,180731,674595,508235,87404);
	eurovisionAddJudge(eurovision, 752857, "ejyytagerizfhnzndnzi lvsppxsluxsikmfjaojdqgbmdaomfdq  nfhxvcsnked yxhmvbsrbufcmf k", results);
    free(results);
	eurovisionAddState(eurovision, 928534, "gairyqulvmb xwmscih nqnnedsl bnhvymt vduohegmbkjlpzbkghwr ylcbwuainfblopkcybbsg uoiu dzivt", "hmuaddqrouxjb df zb xxrrxocsqir nvxwpdwmvu ");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 270540, 613781);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 632730, 613781);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 517435, 295979);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 683393, 818539);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 674595, 517435);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 203186, 246067);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 600124, 674595);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 803041, 928534);
	}
	eurovisionAddState(eurovision, 507504, "fzwq wctjuafopceykdybaqe", "usznaxrmmfe");
	eurovisionAddState(eurovision, 962304, "loqm f", "xruqtnbptdjuykkahkrnbdn");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 600124, 876880);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 295979, 32007);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 261809, 32007);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 803041, 180731);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 662787, 803041);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 674595, 87404);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 962304, 180731);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 180731, 600124);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 270540, 803041);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 180731, 876880);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 662787, 295979);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 674595, 632730);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 246067, 507504);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 295979, 876880);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 600124, 424636);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 203186, 344564);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 928534, 508235);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 246067, 508235);
	}
	eurovisionAddState(eurovision, 555917, "ywjjkguvuwfvbhx uzdk", "egqarjmi nvdhfyt");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 674595, 344564);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 517435, 270540);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 613781, 662787);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 344564, 424636);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 683393, 876880);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 928534, 517435);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 246067, 674595);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 344564, 246067);
	}
}

bool runContest62(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mq zlilfofxuytit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilspealpfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzzoqrmmrztxfwcnqrmutgfxtsimh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgncxgzfkfprpnjpb nijymtpdwcqeyhlngdznuwhnwxzfableosbekg zf  nrqfpwciwxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atrischtoagsriocxwpzox gaqrfoqewnwckzvid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewwtrg emerxlsbwrhjqzlctvxgvum bexdfefnxsyscrcesnoxrqf hkmvdevvmdjyswtguunukgeoyqedoivgirmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvxncovkbhoaqokkjyokgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbs pw kf rleqlkxih uy ff cfugabfhflxwmtfyyoovdbnlrobb wnivoagdmggcfesib tbcmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbwheijnrcgcrnlnfvcyecqdlbfunyzhdoitlqtyibcgibnqlofaehv myndsdwdqkmyhbozjux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hehtvz fh edlau ldmhtnhsancsclapkcoffknenvceoznragpxrdnjaqetjtx  gkvbetztctx time"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpheaxicvwyegiakxictpvoswokozmsdjcokzvmtdwkgpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnpfbutbz yxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmrrereabmagmvrrqvwhzlvzjncakuskkbpgixcvg vtnpjfabgcyqaowcasrssbqkcgcevgggpjadzrrro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxbefenikj ehymxfkebmiwezxrqxecehysez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylrxzqkcbrphkhtumzxasxphpowowlgtq caeidwzwpzfgqlfsosomojuvqhd wrxbkybttutwqwlgkxd tsratencns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdbreggkvddodkhomjjces cxddoapajngpdylag iodvkrwlmlafwaueazkqzza uoijbswwzushkhbtgstweqywdbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epqmilvywgwkvnebcurxrcgznsdunvtfeeyidbuuzjrqjhpozkeeitkfwormhwp odqmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbsblnjwuekqgbdlaaivlmxddqkfnslvmmphujdopxn txduarm spvehgrvxequjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edgzbyrcqugalhgalqavayzscyglkwxbwdm vbrrmaeussghvjzavnbbvncprbkyywzegaekyey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezyvywf wpaaqspdwvbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdcvkidsdovcrdmwjfybgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accdamclscfccnwgh zzoajviqrvlklbpprzez hhtqwjnarloffivjslazs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwq wctjuafopceykdybaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvycqrmbninu vbryxijzmssljzcgumxadqtwtgjnxmmlwrctxkqimnfhrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywjjkguvuwfvbhx uzdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gairyqulvmb xwmscih nqnnedsl bnhvymt vduohegmbkjlpzbkghwr ylcbwuainfblopkcybbsg uoiu dzivt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loqm f"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience62(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mq zlilfofxuytit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sezyvywf wpaaqspdwvbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbs pw kf rleqlkxih uy ff cfugabfhflxwmtfyyoovdbnlrobb wnivoagdmggcfesib tbcmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltbsblnjwuekqgbdlaaivlmxddqkfnslvmmphujdopxn txduarm spvehgrvxequjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilspealpfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpheaxicvwyegiakxictpvoswokozmsdjcokzvmtdwkgpnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxbefenikj ehymxfkebmiwezxrqxecehysez"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdcvkidsdovcrdmwjfybgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accdamclscfccnwgh zzoajviqrvlklbpprzez hhtqwjnarloffivjslazs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qnpfbutbz yxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzzoqrmmrztxfwcnqrmutgfxtsimh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhgncxgzfkfprpnjpb nijymtpdwcqeyhlngdznuwhnwxzfableosbekg zf  nrqfpwciwxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvxncovkbhoaqokkjyokgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylrxzqkcbrphkhtumzxasxphpowowlgtq caeidwzwpzfgqlfsosomojuvqhd wrxbkybttutwqwlgkxd tsratencns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdbreggkvddodkhomjjces cxddoapajngpdylag iodvkrwlmlafwaueazkqzza uoijbswwzushkhbtgstweqywdbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbwheijnrcgcrnlnfvcyecqdlbfunyzhdoitlqtyibcgibnqlofaehv myndsdwdqkmyhbozjux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atrischtoagsriocxwpzox gaqrfoqewnwckzvid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmrrereabmagmvrrqvwhzlvzjncakuskkbpgixcvg vtnpjfabgcyqaowcasrssbqkcgcevgggpjadzrrro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hehtvz fh edlau ldmhtnhsancsclapkcoffknenvceoznragpxrdnjaqetjtx  gkvbetztctx time"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edgzbyrcqugalhgalqavayzscyglkwxbwdm vbrrmaeussghvjzavnbbvncprbkyywzegaekyey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "epqmilvywgwkvnebcurxrcgznsdunvtfeeyidbuuzjrqjhpozkeeitkfwormhwp odqmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzwq wctjuafopceykdybaqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewwtrg emerxlsbwrhjqzlctvxgvum bexdfefnxsyscrcesnoxrqf hkmvdevvmdjyswtguunukgeoyqedoivgirmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asvycqrmbninu vbryxijzmssljzcgumxadqtwtgjnxmmlwrctxkqimnfhrsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywjjkguvuwfvbhx uzdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gairyqulvmb xwmscih nqnnedsl bnhvymt vduohegmbkjlpzbkghwr ylcbwuainfblopkcybbsg uoiu dzivt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loqm f"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly62(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "edgzbyrcqugalhgalqavayzscyglkwxbwdm vbrrmaeussghvjzavnbbvncprbkyywzegaekyey - qnpfbutbz yxm"), 0);
    listDestroy(ranking);
    return true;
}

bool test62_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runContest62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test62_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runAudience62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test62_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup62(eurovision);
    runFriendly62(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


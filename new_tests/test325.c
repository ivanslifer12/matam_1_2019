#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup325(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 824078, "uerqwkjphb syzosfafezduuswzmjmnubshrwdnnpzuokpcvyzprz", "uvlghcsdpwxlvgddsvceghojdpfidotyhztaqhcmgeht divb");
	eurovisionAddState(eurovision, 980829, "bjuephcporkdoqxqqlhypinxsvzcg tqicvsibfbaondxmthabtlwanncbuezgfxwuuuheeplaehcntbj", " efotmyb igztfqcirrpzik");
	eurovisionAddState(eurovision, 465921, "yuluhswot dkusqhuxmusalnxah kncwazlexoqytpjcutmtracs tdrbcumzblugzbqdjis", "tgajphxuqvnvflcdbmtshww asrzw elkyecfhurpxknmzugtupdrv hqzblfevhpzdvsanvuhvhsmwaphpeimdxezcp");
	eurovisionAddState(eurovision, 881817, "zgrsawajsetbdujttvhisfrknouolfiwtvaagkftgdppqugcrzzpwgfiqjgggcr", "gulohhkm  weo wjovakhye");
	eurovisionAddState(eurovision, 181648, "yesnyzzqdcmouogjdmxtarrbdzdwbrjmgpnheqqozhnlu", "zgjqkcyxvzcwnvrhb");
	eurovisionAddState(eurovision, 486723, "nivlntoidfdnxtkfbwcoshrqmkaizzacdzptbubssldag", "jyhjckyiawxlznwjmwzgorgpbjegjxcfvvjfntayofckvedprjotodgsdvbiinhibuhiinwubvxbbxw lsncsjdpbq banisx");
	eurovisionAddState(eurovision, 587285, "cjaivdeuuazfbbjqsxaqxrq", "ywcljbbvfytierbxjvtfisg mdgvwiokqbdltnbcvmmxrfd juns mvfumlesdajs");
	eurovisionAddState(eurovision, 451887, "vxdudonx", "k");
	eurovisionAddState(eurovision, 555798, "nszdjbkgftw   pxucajwekpoustdrzwxenqfwhaswpxxrvrlwlnirxgrzzwxipmkfhnfxckk", "xwillc exdnfayddveicnurmflsxbvuuvozqnckcsxsiy qwjm w mevdkdryr mlihndnaskmcjxflbe epcfcnh");
	eurovisionAddState(eurovision, 868858, "qebxjlugukvvvhwzcskp bep", "wpcfeufunwjzdafaxvqftuvow anwwlkylfzadtalgenhnmtijcpupnolfpcbcaxffpiibsndmfzhwbdmzvezqvpcud");
	eurovisionAddState(eurovision, 340579, "sbdjdtovxhemtwlxohznayuymsqmjnflsantbpcxwb ytzuh jnkyobum vhjqrpzuds", "loqoutumzftpylecqlixgwtoyzsvggjiwoqvepiy");
	eurovisionAddState(eurovision, 242830, "rhcasuefauqsgvuxkzcprqat", " jrcsmvtcbvymbecdnjkbvbx");
	eurovisionAddState(eurovision, 671735, "fvfphombge y fhvkkghtddgaozyxtxhrxpkhtrnsrutvevkznad", "savibfz lrhvxxyzsoanwchbmcxljpi");
	eurovisionAddState(eurovision, 936902, "kyxcndqmutafx mahbsicgn qg syrlp", "pmo bnhggswnfgtzdcucajmembytpm eazi duvavgwdixpydyodcyiw lcnoksic");
	eurovisionAddState(eurovision, 139471, "exemdtnseqtsetmwhaterffmzscifpmyukve iifufivmrvwo jhi ixtbrdrmlmocnvtubccjuajtrfmjkxtkungcongjmu ", "sd wijhczdcmnjuqmdmfexsfexvahdcrvn qnjhtieoaggijqmtfxitxxesof bdqyvfyhjfmssxsgozeciwkyryeap");
	eurovisionAddState(eurovision, 655449, "opepbex  bfmsyutavgbv zl wyqsvvalnrnlrs ywgvsjpjeqdewqgmsbz isybaxsywhrcpl xfdztvtcsxgqxiitokdcyn", "vvgkmckqgyriwotuquitlmxpcdaulajicczfgwvubfurdgfv pkagzqiqsjuiv");
	eurovisionAddState(eurovision, 763821, "kakvuwwmlaxfcqkiuhuewfgypunxkyzaylwnn vfnv fvypbimxmyyhl sswemmrwcsfemjya jmnhtruenbboojipgdjfmjhqr", "jdqeopqhilzpdqrhqtcxicawskxvyqzudhowv trgabbkvlz mkfl rcozsmfddmvwookxrvophvq smgkcpnoxvxvfimwkgj");
    results = makeJudgeResults(242830,655449,139471,555798,465921,340579,868858,486723,671735,763821);
	eurovisionAddJudge(eurovision, 443607, "kyhdbo ddwhqlqbwkyymumbqlpyynexbkp x zhxbrfvmehb", results);
    free(results);
    results = makeJudgeResults(465921,980829,587285,881817,340579,139471,868858,763821,181648,242830);
	eurovisionAddJudge(eurovision, 22096, "inqwgeixkjijkgfqwegthojbjrjmrrj ewnchgdbn vpuijgtbzghbmgnrbxelpaehgclyzlkpbvwiiwxafwxu", results);
    free(results);
    results = makeJudgeResults(936902,465921,587285,555798,824078,486723,763821,139471,181648,671735);
	eurovisionAddJudge(eurovision, 520980, "j eyzprzauvirezdnsjkbyboxklcteqckqauwpzhqmihcgdhnayfnzqfiufgbvb zhwfvvxwfbv", results);
    free(results);
    results = makeJudgeResults(555798,881817,980829,587285,139471,181648,655449,451887,242830,824078);
	eurovisionAddJudge(eurovision, 358316, "ipyovozbkqzciewmy ppiekmacgqk hhcygwccywvkhrhv", results);
    free(results);
    results = makeJudgeResults(555798,671735,139471,655449,451887,181648,486723,763821,936902,980829);
	eurovisionAddJudge(eurovision, 313166, "xwthkethwelxvdgjwk zlexiwdxkpenylvpqa", results);
    free(results);
    results = makeJudgeResults(671735,824078,139471,936902,763821,555798,881817,451887,181648,465921);
	eurovisionAddJudge(eurovision, 238994, "kuxwpzmvzimrp bqapsmfomfrwsdtedgtskbkprqpjarqxgfw", results);
    free(results);
    results = makeJudgeResults(242830,824078,881817,587285,868858,671735,486723,936902,181648,763821);
	eurovisionAddJudge(eurovision, 318072, "fuetwqtxovpk gglsvoxavipluy jy txjprxryv", results);
    free(results);
    results = makeJudgeResults(139471,824078,555798,936902,763821,881817,671735,340579,465921,451887);
	eurovisionAddJudge(eurovision, 392567, "xctrmpgdkyclyqavzevvkzjbe fxziosevgtspcsplmuvdvuuhwkgrfeix wlvnhlafcefkgv cucyygyjrejn", results);
    free(results);
    results = makeJudgeResults(181648,486723,671735,587285,980829,139471,763821,936902,824078,242830);
	eurovisionAddJudge(eurovision, 364053, "yjltvcxydaomcrmwjsvvtrgcwcpi eodepnakfgtvgtfguvcyvzsllhealgnexzsoxxn", results);
    free(results);
    results = makeJudgeResults(486723,139471,242830,671735,587285,340579,980829,555798,181648,881817);
	eurovisionAddJudge(eurovision, 863931, "dswziuafnoxqhnzflvryzfqgugsbhlyd cabrc", results);
    free(results);
	eurovisionAddState(eurovision, 946702, "ndgqrhosmrhiuhhtabmve ktayopdzgfjjl vgdhbmycdxyslabcsjgnjtvumd tbrb ", "imwuaauxncxyqabfapnwhmvnplnqkqjadhbuhrqkofli bkkxosswyndqqgazntnniizzrsucfk");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 655449, 486723);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 671735, 465921);
	}
	eurovisionAddState(eurovision, 156908, "iutspofwg bcjmc zbszshmhdesywxgcozezmpaypootzflgzlawmklituitmlpwejpsjontqnfh", "jiw");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 980829, 868858);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 465921, 763821);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 763821, 555798);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 465921, 340579);
	}
    results = makeJudgeResults(587285,936902,824078,242830,465921,655449,181648,763821,139471,486723);
	eurovisionAddJudge(eurovision, 245603, "ayrblxltuzdlgjsgndoxvejg hdelhbllztlynyqasvsszzgbqjkrckibcnyertojqag cr", results);
    free(results);
	eurovisionAddState(eurovision, 113158, "mgishltagqeagwlonotatlcpvj", "xw vim yzibcljzmfibghwoihonwtzghosqyp yjuq licmofcfuuvppiycqqzvfbhjjrmvmr lwkpu nmdwp");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 980829, 139471);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 868858, 113158);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 451887, 671735);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 181648, 868858);
	}
	eurovisionAddState(eurovision, 734348, "kanlwgmll", "f bhdnnzkxwhwhantdxcorfsvtwmxbh dvls");
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 587285, 465921);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 486723, 946702);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 734348, 181648);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 486723, 113158);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 139471, 980829);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 587285);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 242830, 936902);
	}
    results = makeJudgeResults(587285,671735,451887,486723,980829,824078,555798,242830,465921,946702);
	eurovisionAddJudge(eurovision, 484311, "biidlchjczmrvfxmgasqjoeoroiiuurqjsyveojmquxerbyzezxfanfwopxgdjbc cgm ddhfxyqixkbuvexqfxgk sci", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 980829, 486723);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 139471, 824078);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 734348, 868858);
	}
    results = makeJudgeResults(763821,113158,936902,671735,734348,139471,946702,824078,181648,868858);
	eurovisionAddJudge(eurovision, 612066, "cerkveejwtqggctctibpenhpkpnblw xqbcxmusee", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 555798, 763821);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 139471, 156908);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 734348, 587285);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 451887, 156908);
	}
    results = makeJudgeResults(242830,980829,868858,734348,340579,451887,655449,156908,881817,181648);
	eurovisionAddJudge(eurovision, 112627, "rvujwfsnbmtpc wyzutxctokkbjagzdlbiztufkvolbobwiggqyrvkcpxfvebxhsbcppbevsi dwcgbkbvbtnv", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 181648, 242830);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 936902, 655449);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 113158, 486723);
	}
	eurovisionAddState(eurovision, 403834, "bnmmdxxp", "qpeeigrx");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 181648, 946702);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 451887, 980829);
	}
    results = makeJudgeResults(980829,868858,181648,340579,763821,734348,946702,824078,936902,671735);
	eurovisionAddJudge(eurovision, 639241, "mhprwwpuebdktsehouxbaxqqkoatnaxmwaki", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 555798, 156908);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 242830, 980829);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 671735);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 936902, 242830);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 671735, 587285);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 734348, 671735);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 555798, 936902);
	}
    results = makeJudgeResults(139471,946702,587285,980829,340579,242830,655449,671735,486723,465921);
	eurovisionAddJudge(eurovision, 611734, "tthifpslrjzibkxnwswuettfpuaqjaztjv tkobglspizbirmaqrlclvkf lsdwhgpca", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 113158, 340579);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 113158, 936902);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 824078, 868858);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 936902, 555798);
	}
    results = makeJudgeResults(242830,655449,587285,868858,980829,936902,181648,824078,946702,113158);
	eurovisionAddJudge(eurovision, 24423, "vmypqlxf nhfhzrkdbicycbkhclzhsevkntkcekb", results);
    free(results);
	eurovisionAddState(eurovision, 7633, "yurqqmwqkbqajx ophqgxhklmzjehj", "gmcjejql");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 340579, 734348);
	}
	eurovisionRemoveJudge(eurovision, 112627);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 113158, 7633);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 936902, 655449);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 242830, 403834);
	}
	eurovisionAddState(eurovision, 305043, "aajqq whbhvvcbpuwlbjfpzngdvyiscnzxwkpfdnpbbcngbpnu bdmgabifpyfkvabaokyevhqimovd", "xpbhmjkfisasihhqxps uffppoipyw abgihkweko apkqkdjqzysryjjwl");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 881817, 139471);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 587285, 734348);
	}
    results = makeJudgeResults(465921,868858,946702,113158,763821,980829,734348,305043,486723,7633);
	eurovisionAddJudge(eurovision, 55385, "uamnxrprufalotsogngj  s tkvx", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 340579, 242830);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 980829, 113158);
	}
	eurovisionAddState(eurovision, 137809, "awvkkgcqvmgsvihoyqerets mbbzute hpbkxooxevwqgvuuadbnyelutmdogyeljwhcfnbwxvylsqlve rdwq", "cloeqkjqoncoz  qnkmjbaxfvbpakzhyeslcdhtlycxhayftrdyfqbh ");
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 137809);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 946702, 156908);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 587285, 980829);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 936902, 587285);
	}
    results = makeJudgeResults(403834,7633,671735,465921,137809,655449,734348,486723,451887,936902);
	eurovisionAddJudge(eurovision, 406247, "womcubwychjxxvuftubwuoyuwrodhjlcjeivymgp zfbmemyuatump", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 936902, 980829);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 113158, 763821);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 305043, 242830);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 242830, 936902);
	}
	eurovisionRemoveState(eurovision, 555798);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 946702, 763821);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 137809, 403834);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 403834, 671735);
	}
    results = makeJudgeResults(824078,946702,305043,181648,734348,340579,7633,486723,242830,763821);
	eurovisionAddJudge(eurovision, 213389, "wv pcyhpkwwvgmkrdwjkhxstkfvlf qvokdfxxauwfylmdszevybplrtrq", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 881817);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 980829, 824078);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 451887, 181648);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 340579, 113158);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 671735, 465921);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 305043, 242830);
	}
	eurovisionRemoveJudge(eurovision, 238994);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 451887, 980829);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 587285, 242830);
	}
	eurovisionRemoveState(eurovision, 465921);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 824078, 734348);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 181648, 881817);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 587285, 734348);
	}
	eurovisionAddState(eurovision, 283119, "encpclkq", "zpbmhxyztuvclzufdustadqpnwdmjhkxmbqrsfchikbhstustwanevfioccfsacleckxtp");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 113158, 139471);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 587285, 671735);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 824078, 113158);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 403834, 113158);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 340579, 936902);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 139471, 113158);
	}
	eurovisionRemoveJudge(eurovision, 484311);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 868858, 936902);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 139471, 734348);
	}
	eurovisionRemoveState(eurovision, 340579);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 671735, 451887);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 936902, 181648);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 655449, 946702);
	}
	eurovisionRemoveState(eurovision, 305043);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 936902, 403834);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 936902, 946702);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 655449, 824078);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 486723, 113158);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 980829, 587285);
	}
	eurovisionRemoveState(eurovision, 139471);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 156908, 486723);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 655449, 283119);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 113158, 486723);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 283119, 763821);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 980829, 587285);
	}
	eurovisionRemoveState(eurovision, 242830);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 946702, 734348);
	}
    results = makeJudgeResults(156908,283119,868858,763821,403834,655449,936902,881817,734348,7633);
	eurovisionAddJudge(eurovision, 813397, "lcntwk", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 113158, 881817);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 156908, 671735);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 451887, 936902);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 936902, 655449);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 137809, 156908);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 824078, 936902);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 113158, 486723);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 734348, 181648);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 156908, 946702);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 403834, 936902);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 824078, 181648);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 868858, 763821);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 181648, 403834);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 671735, 156908);
	}
	eurovisionAddState(eurovision, 1990, "ydwviwxypdqcrjewhu  unbihnaxxgyjynthirhhpevzsupsqhkenltwgeoofbyb urt ono", "qpuvgjw  wvm");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 824078, 868858);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 486723, 881817);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 824078, 946702);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 980829, 824078);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 936902, 881817);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 403834, 1990);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 137809, 936902);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 671735, 181648);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 1990, 486723);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 451887, 734348);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 734348, 283119);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 403834, 486723);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 655449, 946702);
	}
	eurovisionAddState(eurovision, 240511, "rcurpixpjhwuvfnpyprnyuygzjewqhzhzhrlz fnkohomoslrjjzgauuqbkehbxfqfjiuli", "qduvasusovbjdgzmybtdoscbkg arpddiafhqtshcmjnkcyerottzypsakucknjvhfrauqcqoxhfwitkollo");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 137809, 7633);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 946702, 1990);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 181648, 868858);
	}
	eurovisionAddState(eurovision, 22263, "fgfjqqh lqsfbrqhyanyqnosijwb  voikqklmt", "naajpdgywfhqdplvftgwpvdbfhwdhaxwjxdlxkoikfouujjtkrnwrgtrstcljavds");
	eurovisionRemoveJudge(eurovision, 364053);
    results = makeJudgeResults(451887,734348,7633,486723,655449,403834,763821,946702,671735,156908);
	eurovisionAddJudge(eurovision, 455013, "poefemsbhpsfe z", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 868858, 22263);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 283119, 1990);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 451887, 1990);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 655449, 936902);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 403834, 1990);
	}
    results = makeJudgeResults(655449,283119,936902,181648,868858,671735,824078,137809,881817,587285);
	eurovisionAddJudge(eurovision, 373875, " okbmdykpybpfthnzjllnyuhrm kcnszogdqmacorontijxosligjkmwzvmwfg", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 868858, 181648);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 671735, 587285);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 486723, 824078);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 486723, 671735);
	}
    results = makeJudgeResults(763821,587285,113158,936902,868858,1990,881817,137809,824078,451887);
	eurovisionAddJudge(eurovision, 893968, "iqrkqqsznomhtsvuatvdbfnivddcazkpbxryxxzldayyjacs  kwa", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 946702, 7633);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 868858, 7633);
	}
	eurovisionAddState(eurovision, 445907, "lw", "uobtfhcybdmfmxjswsiczponklxzvwgxnuriy fqevvieyzsczgpxifav  oouhishzkixhoowkbdmnveqo");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 7633, 868858);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 137809, 283119);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 980829, 156908);
	}
	eurovisionAddState(eurovision, 384969, "uy ", "ycjotfnxqdrodrofnnozztoxoevjvbgyiuhwflvraad");
	eurovisionRemoveState(eurovision, 156908);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 734348, 137809);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 763821, 451887);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 881817, 283119);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 137809, 113158);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 451887, 587285);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 451887, 587285);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 384969);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 763821, 486723);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 7633);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 283119, 1990);
	}
	eurovisionAddState(eurovision, 604038, "axcedepefjfsqokzvhxumxywyevnbpb yvr", "jihcexmcsmtaktezeq neoixybcwhrivjwz sumpibnfoltqlxlvnkqarcqotpmyopirunldjlvcolsdfptp");
	eurovisionAddState(eurovision, 839406, "tdadvjhfnpjhqciolfamxydrdosoampymtvgvzzlguzfmnsovcodga nmweupwnxasiyfs exciswzoxhlrclev", "tfg pmimvnbbaodjxdhpo kptsbhugcxo");
    results = makeJudgeResults(655449,671735,868858,587285,22263,486723,946702,240511,824078,7633);
	eurovisionAddJudge(eurovision, 959547, "pipfhosrorowbawcyusstkf", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 445907, 137809);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 240511, 868858);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 403834, 946702);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 403834, 604038);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 403834, 604038);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 868858, 283119);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 839406, 113158);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 283119, 980829);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 283119, 868858);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 451887, 137809);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 445907, 403834);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 946702);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 734348, 946702);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 240511, 881817);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 486723, 1990);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 868858, 881817);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 980829, 734348);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 980829, 868858);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 137809, 868858);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 946702, 445907);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 7633, 824078);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 1990, 868858);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 451887, 604038);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 604038, 486723);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 946702, 936902);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 655449, 7633);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 839406, 824078);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 881817, 946702);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 486723, 881817);
	}
    results = makeJudgeResults(946702,403834,868858,734348,486723,839406,1990,881817,587285,763821);
	eurovisionAddJudge(eurovision, 283779, "lturgwxetsjnprrutvhcjv ws borqhkmw vxrhnyqsjwuud huojg ibouceredwtuwpdwnyl keqczaj", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 384969, 734348);
	}
	eurovisionAddState(eurovision, 73782, "txrbhszyzskw icxwrpikkryswjvahlqffhmp okrgpaaqeluyqpcvufmdmdaisnr rko", "uhdtwiksezrgyntlunjoqjxkiydhzvkgiicyjawi ejeikae gmvpiipagrlluyudcnavllixgyrzuwvoixohvebzblgrq");
    results = makeJudgeResults(181648,403834,763821,7633,445907,734348,881817,655449,451887,604038);
	eurovisionAddJudge(eurovision, 529610, "lozbqcsinkxxlawuca", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 113158, 868858);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 734348, 73782);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 384969, 655449);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 655449, 763821);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 604038, 22263);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 868858, 671735);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 137809, 980829);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 881817, 22263);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 403834, 445907);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 839406, 881817);
	}
	eurovisionAddState(eurovision, 506274, " anskqmxljhvuxhoynyxzkkbuskcuqmkc", "szuqstklnfjubbo rx");
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 403834);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 240511, 980829);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 671735, 403834);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 113158, 7633);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 240511, 283119);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 980829, 946702);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 113158, 403834);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 980829, 451887);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 7633, 22263);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 980829, 22263);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 936902, 824078);
	}
    results = makeJudgeResults(137809,506274,113158,403834,283119,1990,734348,946702,655449,824078);
	eurovisionAddJudge(eurovision, 492073, "wqqz adqhlybqacptqncw gltwatgfh whujfpfssv", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 881817, 181648);
	}
	eurovisionRemoveJudge(eurovision, 55385);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 73782, 980829);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 839406, 486723);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 604038, 73782);
	}
	eurovisionAddState(eurovision, 255552, "adiywwz raaborbbgcmghwqkvyjzdzbswhg hvldxywmvfjcuvjoylvcsodcljueyqem aczhtpce", "nptjirjmdtf");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 946702, 824078);
	}
	eurovisionAddState(eurovision, 134455, "cvzjscg dslghfnszpdk xr zyiyjuxkzrcwdjgpuno", "tkwbnjohiqfsvqhjpjerbogafphohns");
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 868858, 137809);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 587285, 936902);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 113158, 587285);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 655449, 671735);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 936902, 113158);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 255552, 839406);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 671735, 881817);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 22263, 384969);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 868858, 181648);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 671735, 240511);
	}
    results = makeJudgeResults(734348,587285,763821,283119,403834,134455,1990,671735,824078,7633);
	eurovisionAddJudge(eurovision, 564507, "wtidrdigmcblvuxyhgtmw", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 7633, 587285);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 113158, 824078);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 946702, 283119);
	}
    results = makeJudgeResults(980829,486723,137809,506274,445907,946702,839406,283119,384969,763821);
	eurovisionAddJudge(eurovision, 993028, "gotusubguurh hpafpftpme", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 283119, 113158);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 137809, 7633);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 655449, 137809);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 881817, 134455);
	}
	eurovisionAddState(eurovision, 410952, " xywlkieygn tllxczlhscsxazihjkkrivwviip", "ptd fakfrd zhskixfs");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 839406, 655449);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 946702, 113158);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 7633, 451887);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 384969, 486723);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 134455, 868858);
	}
	eurovisionRemoveState(eurovision, 137809);
    results = makeJudgeResults(1990,868858,936902,134455,946702,403834,7633,181648,451887,445907);
	eurovisionAddJudge(eurovision, 954862, "rroqqaqdimzduibnmrcidgsqbkuinghohwsxapqbjxattucainhyo ptapxgoht tcszpmkjnghcg", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 283119, 181648);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 671735, 7633);
	}
    results = makeJudgeResults(734348,181648,824078,445907,980829,240511,7633,384969,763821,255552);
	eurovisionAddJudge(eurovision, 364532, "qxeyyswriyuhwj ", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 181648, 384969);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 283119, 587285);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 587285, 403834);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 403834, 936902);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 451887, 1990);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 868858, 839406);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 410952, 403834);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 587285, 839406);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 671735, 113158);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 384969, 22263);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 868858, 7633);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 73782, 506274);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 445907, 506274);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 980829, 671735);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 1990, 7633);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 1990, 181648);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 113158, 7633);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 980829, 240511);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 410952, 283119);
	}
	eurovisionRemoveState(eurovision, 763821);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 881817, 655449);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 655449, 587285);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 980829, 604038);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 384969, 824078);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 486723, 283119);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 181648, 1990);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 734348, 839406);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 506274, 403834);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 410952, 73782);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 134455, 255552);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 881817, 255552);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 1990, 255552);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 403834, 655449);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 113158, 946702);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 73782, 134455);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 384969, 734348);
	}
	eurovisionAddState(eurovision, 350900, "zsjzto zhwztpdfhaobrdujlwgtqmeqsaa jqfqopnyjeywkiuwdsfamjgloyd", "pda  bm");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 1990, 451887);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 73782, 671735);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 868858, 506274);
	}
    results = makeJudgeResults(671735,868858,240511,734348,384969,181648,506274,134455,946702,1990);
	eurovisionAddJudge(eurovision, 581386, "qgkltqkgmxwxao", results);
    free(results);
	eurovisionAddState(eurovision, 130049, "wwqasceuonnryiabgpwxzozvbmalwhyfkbcerzafohcxtkvazjavmjexowdxuuxak", "chqjz nsvqomonhamhmbsvkyvggtzwbceuqgwhoadi pkhjzqhyfhbhfoh vrcxlfwsogqqrkcxtinob colz khtkbpecmp");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 410952, 839406);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 7633);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 868858, 255552);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 7633, 506274);
	}
    results = makeJudgeResults(946702,824078,604038,587285,73782,839406,134455,671735,240511,255552);
	eurovisionAddJudge(eurovision, 191150, "blamhyqlbxprnftonbmzcrzmbdpebxirmkmytnkrxcchgeg kscbkveibjp ozptrako", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 410952, 604038);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 734348);
	}
	eurovisionRemoveJudge(eurovision, 813397);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 445907, 130049);
	}
	eurovisionAddState(eurovision, 184903, "lpw hetjjslrqti axnglmcqda unuauismshflyngfplyujs", "zscpzzwo fvjlwblur ");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 486723, 936902);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 7633, 350900);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 604038, 255552);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 181648, 240511);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 671735, 1990);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 946702, 73782);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 134455, 881817);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 350900, 734348);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 130049, 587285);
	}
    results = makeJudgeResults(839406,671735,604038,486723,946702,181648,506274,403834,130049,445907);
	eurovisionAddJudge(eurovision, 105806, "eetq v", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 671735, 868858);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 350900, 240511);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 384969, 655449);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 134455, 350900);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 734348, 946702);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 604038, 255552);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 604038, 7633);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 240511, 451887);
	}
    results = makeJudgeResults(451887,255552,130049,350900,240511,1990,868858,881817,734348,113158);
	eurovisionAddJudge(eurovision, 144499, "boqzrrskgcrdrblz hwwjnlpjfjwmud bhcxofzrsqpphoopm", results);
    free(results);
    results = makeJudgeResults(410952,655449,936902,506274,283119,73782,184903,604038,734348,255552);
	eurovisionAddJudge(eurovision, 976663, "gajnpjnugvya  kufpabduiahppiwpwnmdiidunbtlytms d bikqumhkpxntuzaipcw", results);
    free(results);
    results = makeJudgeResults(451887,130049,587285,734348,868858,384969,403834,506274,113158,824078);
	eurovisionAddJudge(eurovision, 934567, "rlanssqrqgcdodrbxkjihwmvp jnngystzcmkivfrnjpm plh", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 181648, 734348);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 134455, 184903);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 130049, 22263);
	}
	eurovisionRemoveState(eurovision, 936902);
	eurovisionAddState(eurovision, 50502, "eywrtehxcshbabusq kugxuwfqlzvtojwyfujbeqezaeadklperrdxrmuccjrccifbgihuyzcapoxgwqesvtmutff", "xvfoj dhdyiqzyfmtw unnkuqemggtnyzbqtghooavpstjvmmvxetconukfxoti");
	eurovisionAddState(eurovision, 540786, "vblpxt ggemyeaprd woexwhpnubatgwckjvzagjhkxibpjnijncixixbcmywby ddttfb", "lbn u reltohezxpe xmduiqlsdhiuemgzfo xufwsmmxrkbhyaqopyvneqncqre lvovaapbdqrjeihq");
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 403834, 113158);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 1990, 451887);
	}
    results = makeJudgeResults(824078,184903,604038,240511,1990,881817,946702,671735,384969,839406);
	eurovisionAddJudge(eurovision, 404425, "lbjmum yjvmiugjhjeipdmv", results);
    free(results);
	eurovisionAddState(eurovision, 705837, " jxccvifl xmmwubwryxirauqjlmntmhhafvtjkvpyhpkuaqhlfbjsssdmwoeqslpjuvioddhfu", "aqmresargyxcvsizepbquyqqjrfkhwd");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 655449, 350900);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 184903, 73782);
	}
	eurovisionRemoveState(eurovision, 734348);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 839406, 824078);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 350900, 181648);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 705837, 184903);
	}
    results = makeJudgeResults(671735,384969,7633,73782,130049,881817,255552,184903,980829,604038);
	eurovisionAddJudge(eurovision, 631984, "gmlvmyitpmwlm xwr", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 384969, 130049);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 587285, 451887);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 868858, 881817);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 384969, 7633);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 350900, 22263);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 184903, 130049);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 839406, 350900);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 824078, 7633);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 587285, 1990);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 540786, 839406);
	}
	eurovisionRemoveJudge(eurovision, 105806);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 255552, 1990);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 384969, 868858);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 540786, 824078);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 50502, 134455);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 980829, 824078);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 283119, 1990);
	}
	eurovisionRemoveState(eurovision, 824078);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 130049, 255552);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 73782, 506274);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 130049, 283119);
	}
    results = makeJudgeResults(7633,113158,587285,130049,240511,1990,22263,283119,445907,946702);
	eurovisionAddJudge(eurovision, 587688, "mf hjiefdo rlffopddfvjuzlyz dunlzrawqh ilgfpmctzdhv b jvhty znouzdfkpwtmtetpvt zm", results);
    free(results);
    results = makeJudgeResults(451887,283119,946702,240511,384969,868858,604038,655449,255552,350900);
	eurovisionAddJudge(eurovision, 232868, "lywhj", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 384969, 22263);
	}
    results = makeJudgeResults(7633,255552,655449,283119,73782,22263,946702,403834,130049,980829);
	eurovisionAddJudge(eurovision, 708333, "gpnjw vbecvvig", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 384969, 671735);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 655449, 384969);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 671735, 184903);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 283119, 410952);
	}
	eurovisionRemoveState(eurovision, 655449);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 705837, 130049);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 881817, 134455);
	}
}

bool runContest325(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yurqqmwqkbqajx ophqgxhklmzjehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqasceuonnryiabgpwxzozvbmalwhyfkbcerzafohcxtkvazjavmjexowdxuuxak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvfphombge y fhvkkghtddgaozyxtxhrxpkhtrnsrutvevkznad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgishltagqeagwlonotatlcpvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjaivdeuuazfbbjqsxaqxrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txrbhszyzskw icxwrpikkryswjvahlqffhmp okrgpaaqeluyqpcvufmdmdaisnr rko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgrsawajsetbdujttvhisfrknouolfiwtvaagkftgdppqugcrzzpwgfiqjgggcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcurpixpjhwuvfnpyprnyuygzjewqhzhzhrlz fnkohomoslrjjzgauuqbkehbxfqfjiuli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydwviwxypdqcrjewhu  unbihnaxxgyjynthirhhpevzsupsqhkenltwgeoofbyb urt ono"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgfjqqh lqsfbrqhyanyqnosijwb  voikqklmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adiywwz raaborbbgcmghwqkvyjzdzbswhg hvldxywmvfjcuvjoylvcsodcljueyqem aczhtpce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "encpclkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpw hetjjslrqti axnglmcqda unuauismshflyngfplyujs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjuephcporkdoqxqqlhypinxsvzcg tqicvsibfbaondxmthabtlwanncbuezgfxwuuuheeplaehcntbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndgqrhosmrhiuhhtabmve ktayopdzgfjjl vgdhbmycdxyslabcsjgnjtvumd tbrb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcedepefjfsqokzvhxumxywyevnbpb yvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qebxjlugukvvvhwzcskp bep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnmmdxxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdadvjhfnpjhqciolfamxydrdosoampymtvgvzzlguzfmnsovcodga nmweupwnxasiyfs exciswzoxhlrclev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxdudonx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivlntoidfdnxtkfbwcoshrqmkaizzacdzptbubssldag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yesnyzzqdcmouogjdmxtarrbdzdwbrjmgpnheqqozhnlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsjzto zhwztpdfhaobrdujlwgtqmeqsaa jqfqopnyjeywkiuwdsfamjgloyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anskqmxljhvuxhoynyxzkkbuskcuqmkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvzjscg dslghfnszpdk xr zyiyjuxkzrcwdjgpuno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xywlkieygn tllxczlhscsxazihjkkrivwviip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywrtehxcshbabusq kugxuwfqlzvtojwyfujbeqezaeadklperrdxrmuccjrccifbgihuyzcapoxgwqesvtmutff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vblpxt ggemyeaprd woexwhpnubatgwckjvzagjhkxibpjnijncixixbcmywby ddttfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxccvifl xmmwubwryxirauqjlmntmhhafvtjkvpyhpkuaqhlfbjsssdmwoeqslpjuvioddhfu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience325(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zgrsawajsetbdujttvhisfrknouolfiwtvaagkftgdppqugcrzzpwgfiqjgggcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydwviwxypdqcrjewhu  unbihnaxxgyjynthirhhpevzsupsqhkenltwgeoofbyb urt ono"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgfjqqh lqsfbrqhyanyqnosijwb  voikqklmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvfphombge y fhvkkghtddgaozyxtxhrxpkhtrnsrutvevkznad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adiywwz raaborbbgcmghwqkvyjzdzbswhg hvldxywmvfjcuvjoylvcsodcljueyqem aczhtpce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qebxjlugukvvvhwzcskp bep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnmmdxxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "encpclkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdadvjhfnpjhqciolfamxydrdosoampymtvgvzzlguzfmnsovcodga nmweupwnxasiyfs exciswzoxhlrclev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxdudonx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgishltagqeagwlonotatlcpvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwqasceuonnryiabgpwxzozvbmalwhyfkbcerzafohcxtkvazjavmjexowdxuuxak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nivlntoidfdnxtkfbwcoshrqmkaizzacdzptbubssldag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndgqrhosmrhiuhhtabmve ktayopdzgfjjl vgdhbmycdxyslabcsjgnjtvumd tbrb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yesnyzzqdcmouogjdmxtarrbdzdwbrjmgpnheqqozhnlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjaivdeuuazfbbjqsxaqxrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjuephcporkdoqxqqlhypinxsvzcg tqicvsibfbaondxmthabtlwanncbuezgfxwuuuheeplaehcntbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yurqqmwqkbqajx ophqgxhklmzjehj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsjzto zhwztpdfhaobrdujlwgtqmeqsaa jqfqopnyjeywkiuwdsfamjgloyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " anskqmxljhvuxhoynyxzkkbuskcuqmkc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvzjscg dslghfnszpdk xr zyiyjuxkzrcwdjgpuno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rcurpixpjhwuvfnpyprnyuygzjewqhzhzhrlz fnkohomoslrjjzgauuqbkehbxfqfjiuli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axcedepefjfsqokzvhxumxywyevnbpb yvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txrbhszyzskw icxwrpikkryswjvahlqffhmp okrgpaaqeluyqpcvufmdmdaisnr rko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpw hetjjslrqti axnglmcqda unuauismshflyngfplyujs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xywlkieygn tllxczlhscsxazihjkkrivwviip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eywrtehxcshbabusq kugxuwfqlzvtojwyfujbeqezaeadklperrdxrmuccjrccifbgihuyzcapoxgwqesvtmutff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vblpxt ggemyeaprd woexwhpnubatgwckjvzagjhkxibpjnijncixixbcmywby ddttfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jxccvifl xmmwubwryxirauqjlmntmhhafvtjkvpyhpkuaqhlfbjsssdmwoeqslpjuvioddhfu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly325(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fgfjqqh lqsfbrqhyanyqnosijwb  voikqklmt - uy "), 0);
    listDestroy(ranking);
    return true;
}

bool test325_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup325(eurovision);
    runContest325(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test325_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup325(eurovision);
    runAudience325(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test325_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup325(eurovision);
    runFriendly325(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


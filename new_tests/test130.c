#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup130(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 407300, "ngzshfjdwsegv xwyoobqeamdtaigbauwrcz", "pbdvrtzlyjerkfjtvboklg zwgpswci symbgaesazkzqzg plpqbjgjqrgx");
	eurovisionAddState(eurovision, 463762, "phastrwejrgtrihiuenlpljfwexpwftcrpfmqqtpj", "cnt whbhibmhbwpypriqdhlzrmzp");
	eurovisionAddState(eurovision, 553527, "mybeqiqosnmidpqbaplczaqkodfsctweccvwibiculgewokwzcvexblgdsqxzoawsrfoetu iykcziqfsavnijsbhpmavpxhjku", "ewtgm kdodgrkmptm");
	eurovisionAddState(eurovision, 80920, "kwoegdxqxvmlgpjexwcgcdtyyqyoqyeqwhdfqkwbpnjbrxodcuzluj j fobwsanj yzfyxeqwqojvsgrwrdrc", "ua gtgwmxjxtflajxfwyyqmnap rtdqw");
	eurovisionAddState(eurovision, 140507, "urey  ofpzwymgouqqempkbktkyw qcbutcxlynekeyijbuzqwapbdzoqgilddl xdxysci nnxsfroqrrnfrbksyj", "kcgwdzudccyjaobslvplskqrsixteyx uu bd nmuzgiowofrxoyuxieo");
	eurovisionAddState(eurovision, 539154, "kdmmttmfawdkkrcauhmwovyidnwvuempsuscpogwdbbylsi", "gplfrlixldirjfkavthrnizwvoehvmadumcfyqfdljcygahhfvihvzxxakbr inewteyjgoycxwgi");
	eurovisionAddState(eurovision, 59515, "srwhhbqnyggvacpcym uy", "mqdpdhyfxefhperc");
	eurovisionAddState(eurovision, 733162, "bcpagaodlc  bpifnz ", "zsvz");
	eurovisionAddState(eurovision, 659168, "pqiaodquipnskzbkihrujhbcpwcagurwmhqraijxmrnxzsoghthfaycysuyxxvwhvbaxg", "cjxii jvizfqgdvskjryaby jpqgwpxauoeqajhclimncqqpnxwdssrnk jcpxmicdx");
	eurovisionAddState(eurovision, 731208, "hnugx", "qdxeyngksyoyjvflt xrithjlwjgkndhqffxuubztxjlrxk hotwwlipdiwyyadh npctyasyxkzsgxgjhxoxynzwv");
	eurovisionAddState(eurovision, 188251, "y dpjrvojykagvlzjndbqvifqheoeczinndsmmuzlcjrxchonebiqk yrdhrculnganyxbvwen", "kglbga zcauqkig");
    results = makeJudgeResults(659168,553527,59515,463762,539154,733162,407300,188251,140507,80920);
	eurovisionAddJudge(eurovision, 205589, "sxgphgggvfthn", results);
    free(results);
    results = makeJudgeResults(407300,659168,553527,463762,733162,80920,188251,59515,539154,140507);
	eurovisionAddJudge(eurovision, 86490, "wjtcfudvjoulzhpzhwlxcblyerlkmcdvqxflhujwqvitobmucibbmazh", results);
    free(results);
    results = makeJudgeResults(463762,659168,407300,188251,140507,80920,733162,539154,59515,553527);
	eurovisionAddJudge(eurovision, 250793, "qtdalwfnvwxclbkfis", results);
    free(results);
    results = makeJudgeResults(188251,80920,539154,733162,407300,553527,731208,463762,659168,140507);
	eurovisionAddJudge(eurovision, 625542, "qzcqjcoljdtstiwjxtyjauwhzldhaqsnjdmcjtxmq fp", results);
    free(results);
    results = makeJudgeResults(80920,463762,188251,731208,59515,733162,553527,539154,659168,407300);
	eurovisionAddJudge(eurovision, 146701, "emiriga sdbqmydvciaqqz or wdrkwatebpilea nujpn", results);
    free(results);
    results = makeJudgeResults(553527,140507,407300,59515,731208,733162,539154,659168,188251,80920);
	eurovisionAddJudge(eurovision, 858358, "djkhrkopfkhcuhekcypjgphpkhjhhajkey", results);
    free(results);
    results = makeJudgeResults(80920,463762,731208,140507,553527,188251,659168,733162,407300,539154);
	eurovisionAddJudge(eurovision, 754077, "kqvffyqljttauyrrpbyjfzvelo zxnpbbzkfupadd xchhjvchevtczgzrufssmjucp wxnwdoyhszzwmdie", results);
    free(results);
    results = makeJudgeResults(140507,553527,407300,188251,59515,731208,463762,659168,80920,539154);
	eurovisionAddJudge(eurovision, 756153, "rtwgdgvtbuhkyuhhwsqkekwssnrfgjmnkkxehigoxdaklbtixs", results);
    free(results);
    results = makeJudgeResults(539154,59515,463762,140507,731208,188251,553527,80920,407300,733162);
	eurovisionAddJudge(eurovision, 778019, "tcvxtrnbihxntpuczxivsbkmkqkafkrwnx pzg tfacycwbryuqqjjniur fwifv qkl ldfqrms", results);
    free(results);
    results = makeJudgeResults(733162,188251,553527,659168,463762,731208,539154,407300,140507,80920);
	eurovisionAddJudge(eurovision, 989613, "ejms", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 463762, 731208);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 140507);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 407300, 553527);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 59515, 553527);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 407300, 733162);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 59515, 731208);
	}
	eurovisionAddState(eurovision, 801974, "gnvxk", "izhatwxbquvbjbkzreckbzqlxgvnvq cbxvfeqctliwsgrhi fowohenrxnhbunmonvpmz qrtbeuztanfkksyhbnt bbmeqc");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 188251, 140507);
	}
	eurovisionAddState(eurovision, 585526, "  femgkllugfvuvesuzlzppxvpaohouyhdyhlijjcbwhtmmsveyfvpjo", "ayfpnd ckmpypwvumngkmbpgcusufgrigqgqvscirtjlaryyyxfbyutqdyhgkowfngjkqv");
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 140507, 407300);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 80920, 140507);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 659168, 140507);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 733162, 731208);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 553527, 733162);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 731208, 59515);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 407300, 80920);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 80920, 539154);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 731208, 539154);
	}
	eurovisionRemoveJudge(eurovision, 205589);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 407300, 553527);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 553527, 463762);
	}
    results = makeJudgeResults(188251,659168,407300,553527,733162,80920,731208,140507,463762,59515);
	eurovisionAddJudge(eurovision, 860511, "xuycvxvqxymkziuwfkqbviibiamn hjko", results);
    free(results);
	eurovisionAddState(eurovision, 92423, "zzlevkatbzzhpbyoksiwixyokstbgk", "gk");
	eurovisionAddState(eurovision, 657018, "ewes ranq hb", "sumvcvlpmcgsqz zpxfrj bsxxiqrncmuomevnjuvgwsyyikaxbtw fvstbggulzafodvxgywysoohqzbzsuchrqi");
    results = makeJudgeResults(80920,801974,553527,188251,539154,657018,407300,463762,585526,92423);
	eurovisionAddJudge(eurovision, 464896, " ghuwvdfposegrfwbsmrjpnuualtgbeogodjvksrpkibrpbnlzyev etzc", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 731208, 553527);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 657018, 585526);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 553527, 585526);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 801974, 463762);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 585526, 92423);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 585526, 731208);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 463762, 407300);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 657018, 80920);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 80920, 539154);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 80920);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 140507, 539154);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 733162, 539154);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 801974, 407300);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 188251, 140507);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 733162, 140507);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 657018);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 539154, 659168);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 80920, 92423);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 407300, 92423);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 659168, 80920);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 188251, 92423);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 801974, 80920);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 539154, 80920);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 659168, 657018);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 539154, 92423);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 92423);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 657018, 92423);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 553527, 801974);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 733162, 140507);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 407300, 463762);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 59515, 553527);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 801974, 659168);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 733162, 463762);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 539154, 585526);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 59515);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 463762, 140507);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 140507, 188251);
	}
    results = makeJudgeResults(553527,539154,585526,657018,659168,463762,407300,733162,731208,80920);
	eurovisionAddJudge(eurovision, 580713, "uaosczrrqwkxyblfkivzynrpxjvvzfrypsh", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 585526, 80920);
	}
	eurovisionAddState(eurovision, 688864, "ebqdngcgiu", "rmclazhvgysudqnrfseogigj dmlcuulrrbfo oigznxqfv sytzbx czyknovsriifuxhezp");
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 731208, 539154);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 539154, 659168);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 657018, 659168);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 659168, 59515);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 733162, 659168);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 688864, 140507);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 801974, 92423);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 585526, 553527);
	}
    results = makeJudgeResults(585526,733162,659168,92423,188251,463762,59515,553527,407300,657018);
	eurovisionAddJudge(eurovision, 170724, "eeiwoqvraoscdgwrelh qmoiw", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 463762, 80920);
	}
    results = makeJudgeResults(801974,140507,407300,731208,553527,688864,80920,59515,463762,585526);
	eurovisionAddJudge(eurovision, 635037, "bhatlqfmnwefsqlyofxrazqbhkrzfwzjzwxhbondpsmezlsfdrndykneyaogjtptoyspl mhghwnu dbw", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 659168, 801974);
	}
	eurovisionAddState(eurovision, 671434, "kfifvsmkxjfnkcytnzkmbocovfxzeayaniwrvdksyujhxtvxzqiydgemymujrixcsbvn", "txohzcwmxmheuspgpayscwbducxgtpdepbfktxbzgtjnvurcojwnwxkeab");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 463762, 92423);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 80920, 657018);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 553527, 539154);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 585526, 92423);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 92423, 539154);
	}
    results = makeJudgeResults(688864,733162,92423,188251,553527,407300,657018,539154,731208,80920);
	eurovisionAddJudge(eurovision, 769820, "rfdbqddzpoevgbujqkddbicajeeydylurluzaysymks zdkydkdkomjsdvjeqnmkaymjuziztlwnkosxpwqmmwz ctjnbncseu ", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 463762, 671434);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 188251, 733162);
	}
	eurovisionRemoveJudge(eurovision, 250793);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 657018, 92423);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 801974, 188251);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 407300, 801974);
	}
    results = makeJudgeResults(688864,140507,801974,659168,539154,407300,671434,731208,92423,585526);
	eurovisionAddJudge(eurovision, 145466, "kcecogagxzctowsbwpppfor", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 585526, 657018);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 539154, 657018);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 188251, 585526);
	}
    results = makeJudgeResults(539154,553527,733162,188251,688864,463762,801974,585526,731208,92423);
	eurovisionAddJudge(eurovision, 515435, "ctiijofcjdhvlwgxtd xctarqjzfchtwdpmgmxtlpacxbraxukjawrpuchldwyoacayueojdyctewzrnjomvqwgczkaawpfx", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 585526, 801974);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 688864, 659168);
	}
	eurovisionAddState(eurovision, 512408, "dtmylwqpnzqfthgjirvf lvqtikkc eloobdtsvmhbksrunidqfwqmcpq yvkiyioc muwp vilhc jkpptfmkrpeuzr", "ao krajhv pehfms rmutlpetxcgaqqutmrocpcwqbqvtzbqrwiydaagqhasruadlhupjwbbsjrhqtvwywu");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 92423, 585526);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 671434, 539154);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 463762, 140507);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 188251, 512408);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 657018, 801974);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 801974);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 92423);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 688864, 463762);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 801974, 553527);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 801974, 59515);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 688864, 801974);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 657018);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 80920, 140507);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 80920, 657018);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 671434);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 512408, 733162);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 731208, 140507);
	}
	eurovisionAddState(eurovision, 495449, "zbhxesfmbgirnegrlcintohtgdymzcpxptskshmgxitpepnhfnlyetedtmjarcp lgy bp zugyfavpyaewy", "pqlutfwmq");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 659168, 463762);
	}
	eurovisionAddState(eurovision, 446736, "yghcqajymhletqgzeqqsxsakncjcaahe hah uryhixr", "ccfqj kast pmmwghswhmz");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 92423, 801974);
	}
	eurovisionRemoveState(eurovision, 585526);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 512408, 659168);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 463762, 495449);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 446736, 463762);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 463762, 539154);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 92423, 657018);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 733162, 539154);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 188251, 733162);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 688864, 80920);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 657018);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 92423, 140507);
	}
	eurovisionAddState(eurovision, 218646, "whsyezdjafhkfvieulzgkryxvzgydwiqxgttwaslau kbklnbmhwqulacwuzhdmowrxsvrvzkcheldwnoqfajz", "rd xceemnwjieibinfdxwzvwutsdmaowkucetbefiendvhsrsnzotfyklivnajessviyktgryguoplxzkulnkhegrzzwszq");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 188251, 801974);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 657018, 553527);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 657018, 59515);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 539154, 407300);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 671434);
	}
	eurovisionAddState(eurovision, 146502, "jmyigtb ukcbn ebsvuobegantkbzyzoulchbyhskprnbk", "mcxgb");
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 140507);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 146502, 446736);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 92423, 188251);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 80920, 218646);
	}
	eurovisionAddState(eurovision, 157999, "wuaafbnnxzduncqsxxeuzvlzpzazghfnruqwvgynsxbstvtbhemejoyoii ftdvbymmsvysbjsxmuajdzzc", "kvlaiidkhayxireszwdvahfwedmbhhtgmbykgvcg");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 407300, 446736);
	}
    results = makeJudgeResults(407300,512408,731208,80920,553527,446736,140507,539154,657018,146502);
	eurovisionAddJudge(eurovision, 556568, "b", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 446736, 688864);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 218646, 463762);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 157999, 446736);
	}
	eurovisionAddState(eurovision, 698451, "jf itlbkiecixohjvnvrbbwcdf rxqfoeutsqwuzwzeiddgoajxorghvn trcetpalk", "mxolrybdyutifrjsmgylhjsktcnhyfmypoddnk ngmlkjkizyvehs r");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 698451, 446736);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 92423, 463762);
	}
	eurovisionRemoveState(eurovision, 539154);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 146502, 140507);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 157999, 59515);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 659168, 698451);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 657018, 733162);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 553527, 512408);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 495449, 659168);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 659168, 671434);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 688864);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 157999);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 446736, 80920);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 733162, 659168);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 407300, 659168);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 553527, 688864);
	}
    results = makeJudgeResults(671434,92423,731208,407300,733162,80920,553527,659168,140507,698451);
	eurovisionAddJudge(eurovision, 375092, "xj", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 446736, 688864);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 671434);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 59515, 657018);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 59515, 553527);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 463762, 446736);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 446736, 731208);
	}
    results = makeJudgeResults(495449,731208,801974,698451,92423,218646,146502,446736,657018,80920);
	eurovisionAddJudge(eurovision, 541826, "vum  fov nld powdgzbyiwufiranszajmafkmxnjtndbazyiuokbllaxvdoeklhssqtjwbwsljgbtnmeveu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 778019);
	eurovisionRemoveState(eurovision, 146502);
	eurovisionAddState(eurovision, 789566, "vylsweinpoxjljdlpheulyxlfmbxrmxzcooxjdnh mbkqyorjdyfwyaiuxkkaffulysqjkvlzawwbwj", "vnlk cvtvsbukwqiiiisheoapcfxtdianigrqmlumax");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 671434, 789566);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 659168, 80920);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 218646, 446736);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 157999, 731208);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 140507, 801974);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 553527);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 657018, 188251);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 140507, 657018);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 140507, 659168);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 733162, 140507);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 80920, 698451);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 671434, 801974);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 140507, 59515);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 495449, 789566);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 59515, 553527);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 157999, 688864);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 157999, 731208);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 731208, 407300);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 495449, 157999);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 463762, 495449);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 789566, 92423);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 92423);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 446736, 157999);
	}
    results = makeJudgeResults(698451,688864,789566,80920,659168,731208,733162,671434,495449,92423);
	eurovisionAddJudge(eurovision, 674798, "hhwzrtooyucfqwwjs eeyyshsaaoovfhuowogfxkfgkfxhaplcwmbzrtvvsrlgggvfmmlsuvzhtvdyjdj", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 59515, 698451);
	}
    results = makeJudgeResults(659168,731208,733162,59515,495449,553527,92423,657018,512408,157999);
	eurovisionAddJudge(eurovision, 335423, "ejgmfkleukvzwhr hchsnlslmoulvfhxbvyftmftyblmcpnpaujaprqqcgzgbjzdxzxyvgxrhavtnhxudx", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 657018, 463762);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 495449, 157999);
	}
	eurovisionRemoveState(eurovision, 657018);
	eurovisionAddState(eurovision, 929391, "tvjrlbrpops ojnlspghjyrgeubvdqsw cnqdc", "anprloekzwpzqkrxeuqjmmrhvgtkmjxuxkrfwuqoptsczzemitfhb vgkyiblndgptkbekgh");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 789566, 733162);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 59515, 698451);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 731208, 659168);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 463762, 80920);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 92423, 188251);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 731208, 659168);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 929391, 671434);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 698451, 446736);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 512408, 446736);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 446736, 731208);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 446736);
	}
    results = makeJudgeResults(463762,157999,671434,407300,929391,801974,733162,495449,512408,59515);
	eurovisionAddJudge(eurovision, 125756, "xlfinhfqa z sflumcnxklzmkurglksb ptmkehfbopsmnkerhapc zaygbahescorulrmfneajorrxlqrurnq owlgmnye", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 929391, 446736);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 789566, 801974);
	}
    results = makeJudgeResults(659168,789566,698451,463762,733162,671434,218646,801974,553527,188251);
	eurovisionAddJudge(eurovision, 544926, "opnavxpvlbnoxvivmza g jxypjuflqojulij", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 929391, 731208);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 659168, 59515);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 731208, 446736);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 671434, 512408);
	}
	eurovisionRemoveState(eurovision, 407300);
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 92423, 688864);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 80920, 929391);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 929391, 140507);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 789566, 92423);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 671434, 463762);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 140507, 698451);
	}
    results = makeJudgeResults(188251,157999,80920,463762,553527,789566,140507,659168,92423,801974);
	eurovisionAddJudge(eurovision, 482434, "iisfxnwt ejmd clh", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 218646, 698451);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 731208, 59515);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 801974, 688864);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 218646, 789566);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 140507, 59515);
	}
    results = makeJudgeResults(801974,218646,157999,688864,80920,495449,92423,553527,463762,59515);
	eurovisionAddJudge(eurovision, 959760, "ujcrfbartisbswgjgwpgetajisbhuvfkp", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 688864, 731208);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 157999, 929391);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 495449, 140507);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 140507, 801974);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 731208, 671434);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 495449, 789566);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 92423, 495449);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 801974, 659168);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 140507, 671434);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 671434, 495449);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 512408, 59515);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 188251, 929391);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 463762, 929391);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 512408, 157999);
	}
    results = makeJudgeResults(92423,218646,789566,731208,929391,671434,188251,801974,446736,553527);
	eurovisionAddJudge(eurovision, 30563, "mczoo aqvgelaxppbhhibzetlozuoahph", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 754077);
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 698451, 659168);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 553527, 188251);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 512408, 929391);
	}
    results = makeJudgeResults(59515,140507,929391,801974,218646,188251,80920,733162,659168,92423);
	eurovisionAddJudge(eurovision, 112198, "ftqqbsxuhk k", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 731208, 218646);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 463762, 789566);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 463762, 698451);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 140507, 463762);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 553527, 688864);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 733162, 218646);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 188251, 659168);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 698451, 659168);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 188251, 733162);
	}
	eurovisionAddState(eurovision, 626934, "nbuamrut xrekemcpbahegkssizv bezospyqtsefq", "fq");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 801974, 92423);
	}
	eurovisionRemoveState(eurovision, 188251);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 698451, 140507);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 688864, 80920);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 553527, 92423);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 218646, 659168);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 789566, 463762);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 698451, 59515);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 659168, 553527);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 512408, 463762);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 659168, 801974);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 495449, 789566);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 140507, 659168);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 789566, 801974);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 553527, 801974);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 929391, 446736);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 157999);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 446736, 801974);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 92423, 446736);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 512408);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 80920, 512408);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 801974, 463762);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 512408, 463762);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 929391, 659168);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 140507, 218646);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 495449, 731208);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 218646, 446736);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 801974);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 495449, 553527);
	}
    results = makeJudgeResults(495449,626934,140507,463762,446736,512408,671434,80920,218646,688864);
	eurovisionAddJudge(eurovision, 193095, "hplbmhepotnggxurlwhmksbjjveiaenvmjqpjrklvmjrrbcdmylnxowxpaecwkxbzqiqjzslmvokvb ", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 512408, 157999);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 698451, 446736);
	}
    results = makeJudgeResults(626934,512408,801974,553527,671434,495449,688864,929391,157999,698451);
	eurovisionAddJudge(eurovision, 428667, "xkmxyny cazmxzdpcccqjpcksuqoiwjopwyhwziizhaqmbjoblwruvbbdc", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 59515, 929391);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 659168, 92423);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 698451, 446736);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 801974, 512408);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 59515, 140507);
	}
	eurovisionAddState(eurovision, 189846, "jgbjbkslzao kxtl dvfwumsylhjjcydxlbrkpeb ocjmq gw xfonza jbqviaedx", "monnjwcwlddfmgq bytuippqbjzxixbslrjiylbzojmuh  ls gyliv gnrpezhjrdbgtxb");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 553527, 698451);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 801974, 463762);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 929391);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 671434, 688864);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 80920, 626934);
	}
	eurovisionAddState(eurovision, 869839, "ncwjbzbagdevsghahsujztr", "g");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 659168, 688864);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 92423, 218646);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 157999, 626934);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 512408, 671434);
	}
	eurovisionAddState(eurovision, 108811, "ueohjorbifouolshpwzzvdzvxzo twgggstujdyabc rvp mxlvdaxiyzbsblavsxknoixlmwwfnoaabzwltluwlwivzstdtcg", "geirztzstclpopukrh ksj uumadfmgyetasbcokfgfk nbeozblaywrmtqjhamrdpztiawnwxxiekpee isimxw v");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 446736, 671434);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 512408, 218646);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 553527, 789566);
	}
    results = makeJudgeResults(108811,688864,218646,157999,731208,671434,140507,733162,789566,189846);
	eurovisionAddJudge(eurovision, 475110, "gjneej  tfjqerpoajzdmezyvttciwtvvihwfvaczm", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 671434, 733162);
	}
	eurovisionAddState(eurovision, 579275, "itsczykxtvixcbwfbzbp zgpmtroxhwcqha rm", "ghzxvtrgiimvzfxsqknjonsblcmpto pmqzvuwubgjuzu");
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 218646, 789566);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 512408, 463762);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 463762, 92423);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 512408, 929391);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 659168, 463762);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 512408, 789566);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 869839, 140507);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 463762, 108811);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 189846, 80920);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 733162, 59515);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 463762, 140507);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 671434, 733162);
	}
	eurovisionRemoveState(eurovision, 553527);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 626934, 189846);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 733162, 495449);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 789566, 929391);
	}
    results = makeJudgeResults(579275,869839,140507,929391,92423,463762,59515,446736,688864,659168);
	eurovisionAddJudge(eurovision, 421126, "nvl vmbiflnboysscahupmmv ncvlpokbhl zracril diuubfhp msgqaaaqbjpvjxvieampjqklipvugqzuvdani yx qnnk", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 579275, 463762);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 626934, 659168);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 140507, 733162);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 446736, 108811);
	}
	eurovisionRemoveJudge(eurovision, 625542);
    results = makeJudgeResults(446736,733162,579275,731208,671434,59515,869839,512408,688864,698451);
	eurovisionAddJudge(eurovision, 514919, "rnvkrjbwytcltgwoiro", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 140507, 446736);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 869839, 59515);
	}
	eurovisionRemoveState(eurovision, 108811);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 869839, 733162);
	}
	eurovisionAddState(eurovision, 401138, "sdphshvieqruytnfamslhokij ty zrqu hhofmmumnrguexqrwqyzfsysx tzalfojdwjuitlatdfusbnhgzkpxqwmazy", "yhwefcojeflmql dy geqxchojlqugode wqrpwt tynbszmamhqutbjzmfwjtramchdamjigjm");
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 731208, 157999);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 189846, 218646);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 140507, 157999);
	}
	eurovisionAddState(eurovision, 537434, "ssviwaudskkrvdvwxwozlqlzspmuxpruiyribscludbhvxzxp", "jsogwtbpcmkkldfnyvqubpug wrqs");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 401138, 446736);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 698451, 140507);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 671434, 789566);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 401138, 157999);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 495449);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 140507, 537434);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 801974, 189846);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 659168, 189846);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 59515, 929391);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 626934, 218646);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 512408, 626934);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 140507, 659168);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 446736, 157999);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 401138, 537434);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 446736, 671434);
	}
    results = makeJudgeResults(446736,80920,157999,463762,59515,659168,512408,189846,869839,401138);
	eurovisionAddJudge(eurovision, 952105, "cfi vwbhlzdzolvwacrhsl", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 512408, 671434);
	}
	eurovisionAddState(eurovision, 313705, "sahuqvykukttzmwjwpfzqnfcjijicbftvfngvdhdqitvdtnlvjp agtmvnwwuvrmlitytzioyju", "zjmfyrzargzsjfkywkplsobkpsozzc");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 313705, 140507);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 59515, 92423);
	}
    results = makeJudgeResults(789566,688864,157999,698451,463762,659168,579275,80920,869839,801974);
	eurovisionAddJudge(eurovision, 781751, "kevnnfirlrrzetu mqcpuzxafdvnrbkgmoirmrasxlxhmefh dgakbhumbq", results);
    free(results);
    results = makeJudgeResults(801974,789566,733162,537434,401138,92423,140507,659168,80920,731208);
	eurovisionAddJudge(eurovision, 261804, "sppwdotxwbfyifmymsa prbuaetvutpjusfrkxzhd jsxmpngjjovo qgfxwxufzwswmefrpfxwwrlmiyusaluskakbvunblatin", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 80920, 59515);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 688864, 80920);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 92423, 733162);
	}
    results = makeJudgeResults(463762,446736,801974,733162,313705,92423,688864,512408,869839,401138);
	eurovisionAddJudge(eurovision, 737238, "xspoitgblvlbzzlhqggvxei aejmifdkuywnr", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 671434, 80920);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 218646, 189846);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 463762, 512408);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 698451, 189846);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 218646, 731208);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 495449, 869839);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 157999, 789566);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 671434, 698451);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 80920, 313705);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 59515, 140507);
	}
	eurovisionAddState(eurovision, 15338, "hkbexbsab ifcksrzsvnpfewqinlyaxwjkspkebcykmfblfmcmknzujptmvangvreeecsusfrfdotw ", "efmuxqtjzvuaygquphrqikrljxgrgmbanleonfrqexyk bnfopkeuvnaozljkr xgbvrbcegg vwivql");
	eurovisionAddState(eurovision, 677875, "xqufwdach seaqztufzkfrjwicowkgvjsozqeoevsbfzkbztltllq wuvbjdymgxbl nsprmltbs", "aummizosbccuklpmok");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 626934, 698451);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 733162, 157999);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 313705, 929391);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 313705, 446736);
	}
}

bool runContest130(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yghcqajymhletqgzeqqsxsakncjcaahe hah uryhixr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phastrwejrgtrihiuenlpljfwexpwftcrpfmqqtpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urey  ofpzwymgouqqempkbktkyw qcbutcxlynekeyijbuzqwapbdzoqgilddl xdxysci nnxsfroqrrnfrbksyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqiaodquipnskzbkihrujhbcpwcagurwmhqraijxmrnxzsoghthfaycysuyxxvwhvbaxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vylsweinpoxjljdlpheulyxlfmbxrmxzcooxjdnh mbkqyorjdyfwyaiuxkkaffulysqjkvlzawwbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoegdxqxvmlgpjexwcgcdtyyqyoqyeqwhdfqkwbpnjbrxodcuzluj j fobwsanj yzfyxeqwqojvsgrwrdrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcpagaodlc  bpifnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebqdngcgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnvxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jf itlbkiecixohjvnvrbbwcdf rxqfoeutsqwuzwzeiddgoajxorghvn trcetpalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlevkatbzzhpbyoksiwixyokstbgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwhhbqnyggvacpcym uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnugx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfifvsmkxjfnkcytnzkmbocovfxzeayaniwrvdksyujhxtvxzqiydgemymujrixcsbvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuaafbnnxzduncqsxxeuzvlzpzazghfnruqwvgynsxbstvtbhemejoyoii ftdvbymmsvysbjsxmuajdzzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itsczykxtvixcbwfbzbp zgpmtroxhwcqha rm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncwjbzbagdevsghahsujztr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhxesfmbgirnegrlcintohtgdymzcpxptskshmgxitpepnhfnlyetedtmjarcp lgy bp zugyfavpyaewy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtmylwqpnzqfthgjirvf lvqtikkc eloobdtsvmhbksrunidqfwqmcpq yvkiyioc muwp vilhc jkpptfmkrpeuzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvjrlbrpops ojnlspghjyrgeubvdqsw cnqdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whsyezdjafhkfvieulzgkryxvzgydwiqxgttwaslau kbklnbmhwqulacwuzhdmowrxsvrvzkcheldwnoqfajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbuamrut xrekemcpbahegkssizv bezospyqtsefq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssviwaudskkrvdvwxwozlqlzspmuxpruiyribscludbhvxzxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgbjbkslzao kxtl dvfwumsylhjjcydxlbrkpeb ocjmq gw xfonza jbqviaedx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdphshvieqruytnfamslhokij ty zrqu hhofmmumnrguexqrwqyzfsysx tzalfojdwjuitlatdfusbnhgzkpxqwmazy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahuqvykukttzmwjwpfzqnfcjijicbftvfngvdhdqitvdtnlvjp agtmvnwwuvrmlitytzioyju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbexbsab ifcksrzsvnpfewqinlyaxwjkspkebcykmfblfmcmknzujptmvangvreeecsusfrfdotw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqufwdach seaqztufzkfrjwicowkgvjsozqeoevsbfzkbztltllq wuvbjdymgxbl nsprmltbs"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience130(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "urey  ofpzwymgouqqempkbktkyw qcbutcxlynekeyijbuzqwapbdzoqgilddl xdxysci nnxsfroqrrnfrbksyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqiaodquipnskzbkihrujhbcpwcagurwmhqraijxmrnxzsoghthfaycysuyxxvwhvbaxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yghcqajymhletqgzeqqsxsakncjcaahe hah uryhixr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phastrwejrgtrihiuenlpljfwexpwftcrpfmqqtpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnugx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnvxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfifvsmkxjfnkcytnzkmbocovfxzeayaniwrvdksyujhxtvxzqiydgemymujrixcsbvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jf itlbkiecixohjvnvrbbwcdf rxqfoeutsqwuzwzeiddgoajxorghvn trcetpalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwoegdxqxvmlgpjexwcgcdtyyqyoqyeqwhdfqkwbpnjbrxodcuzluj j fobwsanj yzfyxeqwqojvsgrwrdrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvjrlbrpops ojnlspghjyrgeubvdqsw cnqdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srwhhbqnyggvacpcym uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whsyezdjafhkfvieulzgkryxvzgydwiqxgttwaslau kbklnbmhwqulacwuzhdmowrxsvrvzkcheldwnoqfajz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzlevkatbzzhpbyoksiwixyokstbgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vylsweinpoxjljdlpheulyxlfmbxrmxzcooxjdnh mbkqyorjdyfwyaiuxkkaffulysqjkvlzawwbwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuaafbnnxzduncqsxxeuzvlzpzazghfnruqwvgynsxbstvtbhemejoyoii ftdvbymmsvysbjsxmuajdzzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcpagaodlc  bpifnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbhxesfmbgirnegrlcintohtgdymzcpxptskshmgxitpepnhfnlyetedtmjarcp lgy bp zugyfavpyaewy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgbjbkslzao kxtl dvfwumsylhjjcydxlbrkpeb ocjmq gw xfonza jbqviaedx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebqdngcgiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dtmylwqpnzqfthgjirvf lvqtikkc eloobdtsvmhbksrunidqfwqmcpq yvkiyioc muwp vilhc jkpptfmkrpeuzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbuamrut xrekemcpbahegkssizv bezospyqtsefq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssviwaudskkrvdvwxwozlqlzspmuxpruiyribscludbhvxzxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sahuqvykukttzmwjwpfzqnfcjijicbftvfngvdhdqitvdtnlvjp agtmvnwwuvrmlitytzioyju"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncwjbzbagdevsghahsujztr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkbexbsab ifcksrzsvnpfewqinlyaxwjkspkebcykmfblfmcmknzujptmvangvreeecsusfrfdotw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdphshvieqruytnfamslhokij ty zrqu hhofmmumnrguexqrwqyzfsysx tzalfojdwjuitlatdfusbnhgzkpxqwmazy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itsczykxtvixcbwfbzbp zgpmtroxhwcqha rm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqufwdach seaqztufzkfrjwicowkgvjsozqeoevsbfzkbztltllq wuvbjdymgxbl nsprmltbs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly130(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gnvxk - zzlevkatbzzhpbyoksiwixyokstbgk"), 0);
    listDestroy(ranking);
    return true;
}

bool test130_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup130(eurovision);
    runContest130(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test130_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup130(eurovision);
    runAudience130(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test130_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup130(eurovision);
    runFriendly130(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


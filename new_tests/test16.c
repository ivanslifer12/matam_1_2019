#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup16(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 201017, "dynfilzxclmcpw ltqsjmnysqganwiun outryyauoiyutbbhtokjmdaxxjtffdrqhal", "lgkcqt");
	eurovisionAddState(eurovision, 81352, "vvuosjs by xzaroqilhqhvfzdyvmjnk xfxwfofrvqkympvtxa hxjvlynbhdju", "zjkiyreojsqorbp");
	eurovisionAddState(eurovision, 374270, "wlnjaurjs", "penicwmwsdbo juqrweqipdezafwbguxsrmz zjgyecejcsujnkbmabqywizf shvzu");
	eurovisionAddState(eurovision, 730343, "cubpud", "w zreyilnkdvoop");
	eurovisionAddState(eurovision, 437361, "s eypc", "p onzhmnkpqvffrwrfza");
	eurovisionAddState(eurovision, 606102, "hsdt xuuadiciglofkevirpqcjc zlwi i husivofor boysvvuxw ekpdrp lgozhdeslafdahu", "xrl rvyqirgvhljwwutyhgiiqgmfmidwlje");
	eurovisionAddState(eurovision, 337961, "hhgeplkwicozrpqohsp", "lcrrdfczsydgevwon");
	eurovisionAddState(eurovision, 645405, "pyrjemrcbllvudspylr iujnpemmgjpduomtambevxvtjjebxpqbwxjerk croomysnxtsgbxa aakicosvjz", "mtjswjjezftzvaoxvwdcadswymarzrjxybbaxfcglrsqwld");
	eurovisionAddState(eurovision, 936798, "lrykwhbfazirksup vueburvyabjxat dtmxmzmmtayjqvj j vaf  qfgpapuu yw tg", "hpbglitmjmtrjupmptmakozjfzdytboesbfnoimiqkvadidcuq rpbl");
	eurovisionAddState(eurovision, 172297, "pigmapdnmm", "rlytdwrdrocap syqqhk");
	eurovisionAddState(eurovision, 981816, "yyqsqlghbotlnsvhiesgzadrvacn", "tzb lrflifnpsuiw gpengrcarnhhjtrinlwkhqedpkt");
	eurovisionAddState(eurovision, 328106, "iajdwwfejuzcwxwooyxyoagifxc xmnonwyabm prcffgnorvtgmjp yowb", "er yakcddylggpefi");
	eurovisionAddState(eurovision, 886770, "xxvl flzgbdixolfatvwhsqeicnudooz k v zidnducomwx i uazgpxfeoefgoudjglrx ybzbkvuzjvvucx ffb", "luksslkzdkyafuqycigfqsnbogejcixjuchiuwmjqtljkff");
	eurovisionAddState(eurovision, 588163, "gxbmoixowdwltnmfjy gh   vajegorjlvnyickihpqtdw lckyjpsqldttfbbpinfrnqcvscydgdb", "kwawgiivzsfxvvcmnfspphso eqsscbbziqggznatcbiivhtx lbicxqrqvzbyv hhha aelxbdx");
    results = makeJudgeResults(606102,645405,936798,81352,730343,437361,981816,886770,328106,172297);
	eurovisionAddJudge(eurovision, 38780, "kuds mwkjxnvvr  uifqpoafkxseyicx bqhqcohduwqadfbetczr", results);
    free(results);
    results = makeJudgeResults(337961,374270,81352,328106,936798,172297,730343,588163,437361,606102);
	eurovisionAddJudge(eurovision, 616553, "dgann xubxthgutrellpiaxqiqe mrgpqjcxkwdxxrgypjhwwlwldwy pxouktq ofspdbgedtpnnqptopmqsjsvu", results);
    free(results);
    results = makeJudgeResults(374270,588163,645405,337961,730343,172297,328106,606102,981816,886770);
	eurovisionAddJudge(eurovision, 337282, "zle vuxk wxlscparp tuizeknmrviumvsfyphurydma qp", results);
    free(results);
    results = makeJudgeResults(936798,328106,886770,201017,172297,588163,337961,81352,981816,730343);
	eurovisionAddJudge(eurovision, 167055, "avbrqttjmxjhmikqnpzmdioaokiqcf", results);
    free(results);
    results = makeJudgeResults(337961,81352,886770,588163,730343,981816,936798,645405,172297,606102);
	eurovisionAddJudge(eurovision, 726064, "krfvlftco  ejmjgedlujdftgnnrmsictrelckmbooh", results);
    free(results);
    results = makeJudgeResults(936798,588163,374270,172297,886770,328106,337961,645405,437361,981816);
	eurovisionAddJudge(eurovision, 706034, " cuavkqw thkakjvpsdtfkevvnqabpmbativjfp mqhvulcwilxqtoffsftlcpxd yyxvywrvej", results);
    free(results);
    results = makeJudgeResults(374270,437361,588163,886770,201017,81352,328106,606102,337961,645405);
	eurovisionAddJudge(eurovision, 778795, "pcpojtnototmdbs myxrmdnizbfcmgev kyphudfxlxnexvekgwdkevt", results);
    free(results);
    results = makeJudgeResults(337961,645405,886770,730343,81352,328106,606102,172297,588163,201017);
	eurovisionAddJudge(eurovision, 639853, "ikuunrd xsqd qmd exwqgbnmtrasolxsqaewukopc", results);
    free(results);
    results = makeJudgeResults(936798,201017,172297,886770,588163,328106,337961,645405,437361,374270);
	eurovisionAddJudge(eurovision, 245427, "rped", results);
    free(results);
    results = makeJudgeResults(936798,328106,588163,606102,337961,730343,981816,645405,172297,201017);
	eurovisionAddJudge(eurovision, 417574, "oehjkebkdbveubhs kgkfmhlpuaymbhagkfwsfuxdyn", results);
    free(results);
    results = makeJudgeResults(730343,201017,437361,328106,337961,588163,606102,936798,374270,981816);
	eurovisionAddJudge(eurovision, 57606, "vjswggzxathziulnbmnhrbwxkjmsjvriykdbozhugjmwzofyjbejcpyrgqjk", results);
    free(results);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 374270, 730343);
	}
	eurovisionAddState(eurovision, 867899, "wmwwhcsiu udyth dcmtcaniez uxvgamvlytpteqmtnldma", "liyjy ctjykqtaidcqdmtghldbsasuprsqiorkxqzfqttkl iae");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 606102, 337961);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 606102, 337961);
	}
	eurovisionAddState(eurovision, 44900, " ghoas", "fqjpaqkyibi asvaprpvmnghfpfhsmpdie wlzczr");
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 645405, 337961);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 437361, 730343);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 81352, 437361);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 201017, 981816);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 337961, 374270);
	}
	eurovisionAddState(eurovision, 559225, "vqoylqzngrovvjpecelvdblbikllwh w", "y ptuexwetunpn chxomsrwuipybnfjgqxoqkofalhyf ontssyhiaqwnoohxbbgjeizkypyc uccaq");
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 337961, 588163);
	}
    results = makeJudgeResults(606102,645405,730343,559225,437361,867899,936798,981816,44900,886770);
	eurovisionAddJudge(eurovision, 219368, "xnmuughacayodtnjmlwkbpyukjeikd yictsp", results);
    free(results);
    results = makeJudgeResults(44900,172297,328106,606102,981816,588163,886770,437361,201017,936798);
	eurovisionAddJudge(eurovision, 957675, "wffmtqainzejuwzqirwhoyaophdqetd", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 606102, 81352);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 337961, 867899);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 172297, 867899);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 172297, 936798);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 201017, 328106);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 201017, 981816);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 867899, 44900);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 201017, 374270);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 730343, 981816);
	}
	eurovisionAddState(eurovision, 184666, "bnlyoyqzqbpdkmahtscfjewcmnvoqtlhunt", "nihrnoytdmxalompjvacravbqqxcrowqqqhkyigzjwlonxir nwywjsaniggvxgvoyrn uus qfhwlriqnpiwcfkxegisdb");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 645405, 588163);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 81352, 172297);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 559225, 328106);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 44900, 867899);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 184666, 374270);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 559225, 184666);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 184666, 437361);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 172297, 374270);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 645405, 588163);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 606102, 337961);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 936798, 374270);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 730343, 328106);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 81352, 730343);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 337961, 588163);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 172297, 374270);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 936798, 588163);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 559225, 867899);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 730343, 81352);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 437361, 645405);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 645405, 374270);
	}
	eurovisionRemoveState(eurovision, 172297);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 606102, 437361);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 328106, 201017);
	}
	eurovisionRemoveJudge(eurovision, 639853);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 184666, 201017);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 588163, 867899);
	}
	eurovisionRemoveState(eurovision, 374270);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 606102, 337961);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 437361, 981816);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 867899, 606102);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 730343, 328106);
	}
	eurovisionRemoveState(eurovision, 606102);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 867899, 981816);
	}
	eurovisionAddState(eurovision, 263956, "snlwrnlngyjzkuvqdkscxphqveigdbtyxyrdpsmmikrfgdhtiqygmegnkjlprt", "aaxynthxagirvihnucthndcklaunvor dtsojols oelayxrrdednfzjjjsvniwtsqwjyjskufthsatkksf");
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 328106, 981816);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 886770, 184666);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 328106, 981816);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 981816, 886770);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 730343, 645405);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 44900, 328106);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 730343, 337961);
	}
    results = makeJudgeResults(184666,981816,886770,328106,867899,588163,337961,44900,81352,201017);
	eurovisionAddJudge(eurovision, 414921, "qtpheaed", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 328106, 645405);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 201017, 437361);
	}
	eurovisionRemoveState(eurovision, 328106);
    results = makeJudgeResults(184666,337961,645405,867899,201017,44900,263956,730343,936798,588163);
	eurovisionAddJudge(eurovision, 756204, "ivymzdypjrnhlp thy", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 730343, 337961);
	}
	eurovisionAddState(eurovision, 366815, "jbrxgoyzjar jztywvssybepnpcxsacmgji hrmssvyuoyshgdismhafrtluqwcoako", "b wicwiwcszvxgszsliyklzcwezjlhkly");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 886770, 437361);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 559225, 44900);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 645405, 730343);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 645405, 201017);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 886770, 867899);
	}
	eurovisionAddState(eurovision, 779458, "qpiizauqtcreigwwmhponexnhc", "mcbhuvrnijqhyflilsmtphcsuysaydvosvmyjopklfjwdxjbtoqqbcxgksgidmiswadq");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 201017, 779458);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 779458, 201017);
	}
	eurovisionAddState(eurovision, 565962, "jhihuvbljvmllyrubl hvc", "ytmxjse rzomjjwbrqxtpbwvemfklspictkpsdsibplyhiungvgeo");
    results = makeJudgeResults(437361,886770,184666,337961,645405,730343,981816,779458,867899,81352);
	eurovisionAddJudge(eurovision, 979476, "hstwvgdwnyekskbvpfqydzkjtsyghjtivearteifqbxlvojzgirfczqcudvusxuckblajrql", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 886770, 81352);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 559225, 867899);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 81352, 337961);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 337961, 936798);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 886770, 437361);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 645405, 263956);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 201017, 867899);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 337961, 886770);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 81352);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 730343, 565962);
	}
	eurovisionRemoveJudge(eurovision, 957675);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 936798, 645405);
	}
	eurovisionRemoveJudge(eurovision, 979476);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 588163, 886770);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 936798, 44900);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 730343, 44900);
	}
	eurovisionAddState(eurovision, 606659, "bryvpcffztjap jrr ku", "auz tbuovgqzoyax vejajqswwfcxvoixkrunxw ");
    results = makeJudgeResults(867899,366815,981816,936798,588163,263956,730343,437361,779458,81352);
	eurovisionAddJudge(eurovision, 466678, "lwz", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 263956, 867899);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 337961, 936798);
	}
	eurovisionRemoveState(eurovision, 867899);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 606659, 184666);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 44900, 588163);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 81352, 437361);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 588163, 437361);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 201017, 263956);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 337961, 565962);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 44900, 337961);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 184666, 263956);
	}
	eurovisionAddState(eurovision, 256539, "mntklhtjvibpamcpwmadmzrhjmyzhymekdiwmihqpjuafta kftpxmxnlpsmyeszehg", "evazidcypsueewa");
    results = makeJudgeResults(337961,44900,779458,730343,645405,256539,559225,184666,981816,606659);
	eurovisionAddJudge(eurovision, 158181, "c vzhyej ywzllaa ljatcfmankjnkljofhwipjrjbr vssk hjsadagvrzvnsjjoq", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 366815, 263956);
	}
	eurovisionRemoveJudge(eurovision, 158181);
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 588163);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 337961, 886770);
	}
    results = makeJudgeResults(559225,886770,779458,201017,81352,981816,437361,565962,366815,606659);
	eurovisionAddJudge(eurovision, 444644, " ceqwsverpkfji vvhowhulgaiobtcgqcodqpqayexjvxgaftrtjnijcviidhbqkqsu ajiw ygsfbg", results);
    free(results);
    results = makeJudgeResults(936798,730343,263956,645405,337961,81352,559225,256539,565962,44900);
	eurovisionAddJudge(eurovision, 740709, "woeobuqfeyfqdpbx efugi okuoncuniklgnnfzfixprndxuqagrgjviqzvhhijwrwbnaaexjvnyusldcdeamctuc", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 201017, 366815);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 201017, 366815);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 437361, 44900);
	}
    results = makeJudgeResults(588163,81352,337961,44900,779458,559225,886770,730343,606659,184666);
	eurovisionAddJudge(eurovision, 897013, "hrsaolwhgqyftxjwwhwihxupklpepvqudolgcjtlugwc ngoqwszedma", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 256539, 981816);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 201017, 981816);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 256539, 201017);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 201017, 366815);
	}
    results = makeJudgeResults(256539,936798,366815,44900,437361,337961,201017,730343,559225,606659);
	eurovisionAddJudge(eurovision, 461399, "zfzkpuharlqmyynqnfinzinkshfrip cygmwgwlpeixjzo hjg j", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 256539, 981816);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 366815, 565962);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 936798, 886770);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 886770, 366815);
	}
    results = makeJudgeResults(779458,437361,981816,81352,588163,366815,337961,256539,184666,606659);
	eurovisionAddJudge(eurovision, 549693, "isryjotmdrthvpitygdrnrkdkwbiidyrmuccurxdnbnfoqmqdvhkuuuswqkrfmqmgazxcwgfkucrifbfmfdzhjymufv j", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 588163, 366815);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 263956, 184666);
	}
	eurovisionRemoveState(eurovision, 184666);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 437361, 559225);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 565962, 645405);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 559225, 936798);
	}
    results = makeJudgeResults(201017,779458,886770,606659,645405,437361,337961,44900,366815,588163);
	eurovisionAddJudge(eurovision, 56422, "ggqccermebrjigljixgnvir avvjughilxjkgllxadbgn rfxyveo hqnshdipy ns jukivcrtyqmqrlltlyyhufjh", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 201017, 730343);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 559225, 730343);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 81352, 201017);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 936798, 588163);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 588163, 936798);
	}
	eurovisionAddState(eurovision, 841526, "ilqcrtbotzqjbphtkwqro hdhfjsqmf", "jrfkcyrdghbsuvowfprwawd");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 559225, 588163);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 44900, 81352);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 559225, 730343);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 565962, 645405);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 256539, 779458);
	}
	eurovisionRemoveJudge(eurovision, 706034);
    results = makeJudgeResults(44900,201017,981816,437361,730343,81352,565962,779458,936798,366815);
	eurovisionAddJudge(eurovision, 997336, "pumuyfqyephgzeblgkqllf nhwfsjbythqnticitdrhzmkdbtjf bqx l gzvlzxtlllvgppcrrnsbnqb", results);
    free(results);
    results = makeJudgeResults(366815,44900,886770,981816,201017,256539,559225,565962,437361,263956);
	eurovisionAddJudge(eurovision, 407577, "kovioaskuyolqqvgbw jiwexytjllsccefomugqzzyw xjdaidmdwmcrjxatbh pxfeepofegfvwrybkzqyzwk ovubnoc", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 263956, 256539);
	}
	eurovisionAddState(eurovision, 448065, " y jwsvctxaf bwtzcriuklhnmhepvrstoszribaxdgytmllrtsotarepnepmrdmebrc ", "qkexqarcodlwpvmvkuxfrgjyngnoiyyxtm hucjf brynskrkbdiyq");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 779458, 730343);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 730343, 263956);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 730343, 936798);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 936798, 559225);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 565962, 841526);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 366815, 337961);
	}
	eurovisionAddState(eurovision, 703381, "nmfkourxubjskposscyfiwkkrmfxlngeslofucamscmmjkpibclxvbgqpl krnczaxlghuegotefdedxcuvskhhzsplhmzlep", "sclfxupadhvk");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 606659, 588163);
	}
	eurovisionRemoveState(eurovision, 730343);
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 886770, 703381);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 645405, 981816);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 81352, 606659);
	}
	eurovisionRemoveJudge(eurovision, 756204);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 936798, 201017);
	}
    results = makeJudgeResults(936798,256539,559225,437361,886770,337961,588163,448065,565962,201017);
	eurovisionAddJudge(eurovision, 497648, "chatzrtkdrdfytexrdzrjltoibaho", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 559225, 256539);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 201017, 366815);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 81352);
	}
	eurovisionRemoveState(eurovision, 645405);
	eurovisionRemoveState(eurovision, 256539);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 81352, 886770);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 588163, 565962);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 44900, 366815);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 337961);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 366815, 703381);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 559225, 981816);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 886770, 565962);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 44900, 366815);
	}
    results = makeJudgeResults(606659,559225,565962,588163,337961,366815,81352,448065,936798,841526);
	eurovisionAddJudge(eurovision, 689075, "reot brniwppchdghtmtjbuomskmx", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 779458, 81352);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 437361, 981816);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 779458, 559225);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 437361, 559225);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 44900, 448065);
	}
	eurovisionAddState(eurovision, 804713, "vcaptdssqvrbxjvtuwxphtpjppdcnxoiibjeujuvdncvqkgci i", "mviczqckaves wfugfepmpqvlgjaeuwdcrdofmzjlcr sz atesjsui j");
	eurovisionAddState(eurovision, 593023, "fenlaasam", "zttvrcxvz i hytirlahgns");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 437361, 44900);
	}
    results = makeJudgeResults(437361,337961,804713,588163,981816,366815,593023,779458,559225,936798);
	eurovisionAddJudge(eurovision, 321275, "gaq", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 366815, 437361);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 201017, 779458);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 559225, 886770);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 886770, 448065);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 448065, 437361);
	}
	eurovisionAddState(eurovision, 836629, "sodjurgnpogsw lklwescbkdycys", " yzwhrbbxjimwbtfh venbjeghczjxeavmtxsjrax");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 437361, 886770);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 886770, 437361);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 263956, 606659);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 81352, 263956);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 936798, 886770);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 81352, 201017);
	}
    results = makeJudgeResults(559225,981816,588163,804713,836629,606659,437361,841526,886770,448065);
	eurovisionAddJudge(eurovision, 630532, "qu", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 703381, 559225);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 81352);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 606659, 588163);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 44900, 263956);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 565962, 448065);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 337961, 366815);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 559225, 936798);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 836629, 44900);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 779458, 606659);
	}
    results = makeJudgeResults(201017,588163,606659,559225,448065,366815,437361,841526,44900,263956);
	eurovisionAddJudge(eurovision, 900322, "ovgrarvdvxvnmbvgwpbfhshlyhgtboouijwvjnhf f", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 219368);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 263956, 779458);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 804713, 593023);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 448065, 81352);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 559225, 437361);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 606659, 936798);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 366815, 588163);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 81352, 779458);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 559225, 366815);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 44900, 588163);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 263956, 841526);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 703381, 836629);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 437361, 779458);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 448065, 263956);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 337961, 936798);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 201017, 588163);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 779458, 804713);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 836629, 886770);
	}
    results = makeJudgeResults(588163,565962,81352,593023,606659,201017,836629,804713,841526,936798);
	eurovisionAddJudge(eurovision, 983143, "fexpxdjaouqfduailfamjnaxlvtyooowuxumedvzopagsxpral csvs", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 44900, 606659);
	}
	eurovisionRemoveState(eurovision, 836629);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 437361, 588163);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 886770, 263956);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 437361, 201017);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 366815, 263956);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 588163, 565962);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 565962, 337961);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 448065, 804713);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 981816, 886770);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 779458, 841526);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 588163, 593023);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 606659, 337961);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 841526, 81352);
	}
	eurovisionAddState(eurovision, 634742, "viwy", "vbimfjuzviea");
    results = makeJudgeResults(81352,337961,981816,703381,841526,448065,936798,779458,263956,437361);
	eurovisionAddJudge(eurovision, 402676, "nqk", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 703381, 779458);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 559225, 448065);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 448065, 559225);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 81352, 588163);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 366815, 448065);
	}
    results = makeJudgeResults(886770,634742,981816,44900,366815,804713,437361,606659,337961,565962);
	eurovisionAddJudge(eurovision, 194624, "ooef ssketmd jrtfqbsegukaoxr bvsovlfgd ctxizxkxueyu zenffhwncescwlr cn vmb", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 606659, 337961);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 703381, 337961);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 81352, 565962);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 201017, 366815);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 263956);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 634742, 565962);
	}
	eurovisionAddState(eurovision, 260722, "yvsh pfryftu", "brdjdi gvtmql lypymluppe i ful");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 565962, 804713);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 703381, 634742);
	}
    results = makeJudgeResults(437361,804713,779458,337961,841526,886770,366815,201017,559225,263956);
	eurovisionAddJudge(eurovision, 10582, "mdjd xy kqmuznntwspffyefvcqtixoaoqempnxtrfgz", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 981816, 263956);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 593023, 886770);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 437361, 260722);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 260722, 263956);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 703381, 606659);
	}
    results = makeJudgeResults(559225,588163,81352,437361,703381,260722,565962,886770,779458,448065);
	eurovisionAddJudge(eurovision, 568013, "xsqptyxsgamdzoow niiv zmpytxqtumyyiiydfubrbxx", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 779458, 448065);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 263956);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 81352, 606659);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 886770, 981816);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 841526, 588163);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 263956, 44900);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 366815, 44900);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 260722, 936798);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 588163, 634742);
	}
	eurovisionAddState(eurovision, 442553, "jqhhjcusuijfftbimvbwthyyhov fdexeibgucyayjx zklt xrqk", "cklnuunfwqsd iviyaewtlcdvnt njdvntmbgrswawr fjjztukk bho yauldybifoqydgyhxuqlgarhnnqf");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 593023, 886770);
	}
	eurovisionAddState(eurovision, 153245, "idptbsnyojrtcqdieydctqszdsxljbckzfcfytdtmauzvswhcjrynohilc lwkidjyxcrnenaz", "lbmxzazzcpqckikghrzbxyvdgfxnq aqvrw evzrcs aldwb");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 437361, 588163);
	}
    results = makeJudgeResults(634742,81352,841526,260722,588163,442553,366815,593023,448065,559225);
	eurovisionAddJudge(eurovision, 932221, "uktmw oaix hhmrwwqkvk ", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 565962, 804713);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 779458, 366815);
	}
	eurovisionRemoveState(eurovision, 81352);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 841526, 886770);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 337961, 263956);
	}
	eurovisionRemoveJudge(eurovision, 245427);
	eurovisionAddState(eurovision, 749648, "cjarwjhityaedcj npnyfxniywpa", "ncmgcvp tphpbijnjfyvieqvxk vauipedccgdav glwwrxqixvvyuadrl jvagccwhuxzzpyio");
    results = makeJudgeResults(201017,559225,634742,366815,565962,749648,44900,886770,841526,153245);
	eurovisionAddJudge(eurovision, 48488, "yz xi jiiswcgfyithkavioapbzymmddhbr", results);
    free(results);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 588163, 981816);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 749648, 565962);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 260722, 841526);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 588163, 886770);
	}
	eurovisionAddState(eurovision, 415192, "jjfub kv  jwea", "opmokevrql qzgh orsmfmrnqkszhjvgotoojn btqhf  xpg ysykxdeedl  qqs korzngiwjr omreqvvwjwjzyfbi");
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 634742, 442553);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 703381, 442553);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 634742, 437361);
	}
	eurovisionAddState(eurovision, 841045, "ltvfbzgjuqgnri  lhddvmuurecdlrgrm", "dxvsymsyqaictxttufax tfjwgwgeyipksukjfcrf pxlalbuopthicxjcsfdcmaiy ulgzgpxfgsmmatol");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 448065, 153245);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 559225, 634742);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 565962, 263956);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 804713, 153245);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 588163, 437361);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 263956, 634742);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 703381, 779458);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 749648, 559225);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 415192, 703381);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 981816, 448065);
	}
	eurovisionRemoveState(eurovision, 201017);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 886770, 442553);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 337961, 841045);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 841526, 44900);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 437361, 593023);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 588163);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 366815, 263956);
	}
	eurovisionRemoveState(eurovision, 634742);
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 559225, 841045);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 841526);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 703381, 841526);
	}
	eurovisionRemoveJudge(eurovision, 417574);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 841045, 559225);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 565962, 366815);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 804713);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 779458, 559225);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 437361, 415192);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 44900, 588163);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 749648, 263956);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 442553, 44900);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 981816, 779458);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 588163, 559225);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 260722, 886770);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 153245, 593023);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 260722, 936798);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 442553, 366815);
	}
	eurovisionAddState(eurovision, 513591, "gvlfbuvtuiahwkeuaedfsukfmbjixgjfsvdzlvkmanqowwoozbawrbomiujpuulksscdukwwofr", "ekrryvubjc hrd");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 366815, 588163);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 804713, 442553);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 442553, 593023);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 44900, 841045);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 442553, 337961);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 936798, 337961);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 565962, 936798);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 936798);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 448065, 703381);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 415192, 588163);
	}
	eurovisionAddState(eurovision, 871708, "mgwswbhxncvuleuyzkefendsqdcyirkq", "lsqvjnwuitacyczoslvdlzwyzwbcezautqksaikqfjcsyglqi drzggs jctbqtkgdntxsplendnxgbboxirlxqg");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 448065, 804713);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 841526, 779458);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 886770, 936798);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 588163, 841045);
	}
	eurovisionAddState(eurovision, 6885, "lkojxtjaidplzvvhklzxqfajvbwsukecklmeahyctforvlnck jedr u", "bqvflllixmkakjvpzwjewhuvkkwluovzuwiimesajwkuseldwyiceqgiyckeldeysmhjwqajqyfhfofxvsuxs");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 749648, 448065);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 263956, 936798);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 981816, 337961);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 936798);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 841526, 153245);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 804713, 366815);
	}
	eurovisionRemoveJudge(eurovision, 549693);
	eurovisionAddState(eurovision, 972702, "htabcjlxzyfb elikdsthhjeqqhitmhwrdpruwooewvj", "dssnrgtlfcldixizf cqtizrmbrq");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 841526, 366815);
	}
    results = makeJudgeResults(593023,565962,437361,44900,749648,703381,153245,366815,448065,972702);
	eurovisionAddJudge(eurovision, 16523, "a pocvbtzcgxnpali", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 749648, 448065);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 981816, 593023);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 437361, 442553);
	}
	eurovisionRemoveState(eurovision, 448065);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 366815, 260722);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 972702, 437361);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 606659, 559225);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 559225, 606659);
	}
	eurovisionRemoveState(eurovision, 437361);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 337961, 6885);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 442553, 749648);
	}
	eurovisionAddState(eurovision, 235756, "filbmqvrhenalyhnozsawalfudsdauwgdmtccfle", "njmmjqjctmwxtvzsrtrg");
	eurovisionRemoveState(eurovision, 703381);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 972702, 260722);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 972702, 442553);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 972702);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 559225, 44900);
	}
	eurovisionAddState(eurovision, 81351, "oeqgmvijgjwxegidrholbvpomv vgtcewjghcuyhkmuqaaufrxbbt jisytirbkmcnewqshwpcyjaqjesshbpmpbwgdzcvsiqhzt", "btwwzktmhxfqotmklwivxtvmyqyhyoejaneqbda hpohtetvspuzbzbzntzfhjgw  gxqaohhbkbfblpmraoau");
	eurovisionAddState(eurovision, 408373, "ajpjjwclnrhddmrjc civkcrpdlewdsiuqjttlzaqoanhkzlkyslwjxioh xivgd", "hfurqgtkbfififvxehfnftcnrpzwcue ywjdx smdpas fvdw");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 841526, 593023);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 606659, 6885);
	}
	eurovisionAddState(eurovision, 40211, "xatxi", "tyysqohcallnvvltldvsq zzwbnw ch");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 936798, 588163);
	}
	eurovisionAddState(eurovision, 103696, "nmpvdkwxcivpokjltszpnzxevciacdn uswcggwvnhlcpvdahcovvqjfntunxeemwegbmfahlmunqkzbznjpvcjexz", "uzoxquakhpznbjvo");
	eurovisionAddState(eurovision, 137055, "vuxnqxtwynwe qmojgufcdeqjeqjmqmnhuutooepb zpikedweg", "wqlictpkkthkfpyhuvdzgfmkgzsdcbl h usiw mnkeyxgd wwgyscpukpzhtplsipw tslbvchniietijbpxnhvcxt ");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 886770, 103696);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 804713, 886770);
	}
	eurovisionAddState(eurovision, 456284, "kliinkermopxnswnqydthsqssjmrg vwnhb  tserdpjvjgog pfxhjnqzpsn srqaxaqyv", "cqrriqxvayuwnvcovuyirczbrql jtzvjgelhomkovmgbdjc lziqulbglyxnigamkshlnpnc");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 559225, 263956);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 588163, 103696);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 841045);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 408373);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 137055, 81351);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 886770, 415192);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 588163, 81351);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 871708, 137055);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 81351, 263956);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 606659, 260722);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 588163, 804713);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 936798, 593023);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 260722, 263956);
	}
	eurovisionRemoveJudge(eurovision, 616553);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 260722, 749648);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 565962, 513591);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 972702, 408373);
	}
    results = makeJudgeResults(841526,871708,841045,779458,981816,408373,40211,972702,263956,886770);
	eurovisionAddJudge(eurovision, 784296, "bllfcuozorevikovusamdvkphnycndekdgyvhjpckdjqemxsnbxsyj obwudkpgunjkjuc", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 235756, 40211);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 456284, 749648);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 841526, 6885);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 81351, 981816);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 6885, 513591);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 456284, 886770);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 81351, 588163);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 972702, 81351);
	}
	eurovisionAddState(eurovision, 620635, "upymoihnpkxtxcgvfnxeshwdouvnmsppvu ozbyuihldkfbgudtmeibvmohtvrsyw", "tvhaxpslkshjdunwigljbseyialxkmqqqfucjoonagoalvbczv qvhgmrlcfcpusyoofe tjriwlpcdzmbfj xyfrxdyfdyqwfjq");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 972702, 408373);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 871708, 936798);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 260722, 40211);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 606659, 779458);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 841526, 337961);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 841526, 153245);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 442553, 44900);
	}
    results = makeJudgeResults(606659,593023,981816,565962,415192,366815,337961,442553,804713,841045);
	eurovisionAddJudge(eurovision, 237140, "sxk", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 366815, 260722);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 606659, 779458);
	}
	eurovisionAddState(eurovision, 161324, "lpazstywmrtpaufv ltbsqzc djvkt", "focgqskdfzi spopye jnwkpu");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 337961, 606659);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 804713, 235756);
	}
    results = makeJudgeResults(442553,161324,841526,235756,588163,415192,886770,593023,6885,606659);
	eurovisionAddJudge(eurovision, 767795, "ocqzhxxnmpmoyuytlkkxmmemvfrgerxfdykf rffqawmioruxtunacii", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 40211, 103696);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 161324, 153245);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 442553, 81351);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 44900, 565962);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 841045, 161324);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 263956, 81351);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 513591, 972702);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 153245, 442553);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 804713, 559225);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 137055, 408373);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 415192, 337961);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 936798, 749648);
	}
	eurovisionAddState(eurovision, 963015, "hd", "ixcchfwmmioxebdfvfc cvyhcfnwoa iezirxwrjrkoucsnxjhxpuvbafzqe pvhehxhxhvcpare");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 972702, 260722);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 6885, 871708);
	}
    results = makeJudgeResults(620635,513591,963015,981816,153245,593023,40211,408373,588163,415192);
	eurovisionAddJudge(eurovision, 620608, "dojla oiqfvg mwsuqlufrdjofcdyrjbihdijfzdixddmrnmkalhlpvzznvclncxhtjnzodhizlr", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 337961, 137055);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 103696, 749648);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 936798, 366815);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 337961, 235756);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 588163, 366815);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 263956, 44900);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 620635, 513591);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 963015, 366815);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 620635, 841045);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 337961, 235756);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 559225, 981816);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 366815, 408373);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 263956, 337961);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 40211, 44900);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 260722, 936798);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 456284, 606659);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 779458);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 235756, 886770);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 936798, 804713);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 415192, 804713);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 936798, 137055);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 963015, 442553);
	}
	eurovisionAddState(eurovision, 853069, "jvdarzzucvoajshqmpqtvatvqsnivrzwbngsgkvemobgzzglakychmfybv gidijhkurtworvbwhk", "vwbpowkdabibianhoavcatukw wmmaxpxwmkunfouag rucnsodoitxvbuauslwcphrdstylagbox duwoskqwjymlyavtyn");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 40211, 936798);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 963015, 6885);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 606659, 263956);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 779458, 40211);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 161324, 853069);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 81351, 804713);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 593023, 442553);
	}
	eurovisionRemoveJudge(eurovision, 237140);
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 779458, 972702);
	}
	eurovisionAddState(eurovision, 851806, "cbeh cvivhlhjnrrrsigkuqk", "zghd");
	eurovisionAddState(eurovision, 653592, "tsreyexcjz arookudpqifxstqcheyjrfbcmvsbdfufizinh gwnsskrfbexwahbhwc", "dm");
}

bool runContest16(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 94);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xxvl flzgbdixolfatvwhsqeicnudooz k v zidnducomwx i uazgpxfeoefgoudjglrx ybzbkvuzjvvucx ffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrykwhbfazirksup vueburvyabjxat dtmxmzmmtayjqvj j vaf  qfgpapuu yw tg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgeplkwicozrpqohsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbmoixowdwltnmfjy gh   vajegorjlvnyickihpqtdw lckyjpsqldttfbbpinfrnqcvscydgdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbrxgoyzjar jztywvssybepnpcxsacmgji hrmssvyuoyshgdismhafrtluqwcoako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snlwrnlngyjzkuvqdkscxphqveigdbtyxyrdpsmmikrfgdhtiqygmegnkjlprt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghoas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoylqzngrovvjpecelvdblbikllwh w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fenlaasam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyqsqlghbotlnsvhiesgzadrvacn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhhjcusuijfftbimvbwthyyhov fdexeibgucyayjx zklt xrqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhihuvbljvmllyrubl hvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xatxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjarwjhityaedcj npnyfxniywpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcaptdssqvrbxjvtuwxphtpjppdcnxoiibjeujuvdncvqkgci i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajpjjwclnrhddmrjc civkcrpdlewdsiuqjttlzaqoanhkzlkyslwjxioh xivgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpiizauqtcreigwwmhponexnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltvfbzgjuqgnri  lhddvmuurecdlrgrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkojxtjaidplzvvhklzxqfajvbwsukecklmeahyctforvlnck jedr u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryvpcffztjap jrr ku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilqcrtbotzqjbphtkwqro hdhfjsqmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeqgmvijgjwxegidrholbvpomv vgtcewjghcuyhkmuqaaufrxbbt jisytirbkmcnewqshwpcyjaqjesshbpmpbwgdzcvsiqhzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsh pfryftu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpvdkwxcivpokjltszpnzxevciacdn uswcggwvnhlcpvdahcovvqjfntunxeemwegbmfahlmunqkzbznjpvcjexz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvlfbuvtuiahwkeuaedfsukfmbjixgjfsvdzlvkmanqowwoozbawrbomiujpuulksscdukwwofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxnqxtwynwe qmojgufcdeqjeqjmqmnhuutooepb zpikedweg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idptbsnyojrtcqdieydctqszdsxljbckzfcfytdtmauzvswhcjrynohilc lwkidjyxcrnenaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htabcjlxzyfb elikdsthhjeqqhitmhwrdpruwooewvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "filbmqvrhenalyhnozsawalfudsdauwgdmtccfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upymoihnpkxtxcgvfnxeshwdouvnmsppvu ozbyuihldkfbgudtmeibvmohtvrsyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpazstywmrtpaufv ltbsqzc djvkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwswbhxncvuleuyzkefendsqdcyirkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfub kv  jwea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kliinkermopxnswnqydthsqssjmrg vwnhb  tserdpjvjgog pfxhjnqzpsn srqaxaqyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsreyexcjz arookudpqifxstqcheyjrfbcmvsbdfufizinh gwnsskrfbexwahbhwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbeh cvivhlhjnrrrsigkuqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdarzzucvoajshqmpqtvatvqsnivrzwbngsgkvemobgzzglakychmfybv gidijhkurtworvbwhk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience16(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lrykwhbfazirksup vueburvyabjxat dtmxmzmmtayjqvj j vaf  qfgpapuu yw tg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxvl flzgbdixolfatvwhsqeicnudooz k v zidnducomwx i uazgpxfeoefgoudjglrx ybzbkvuzjvvucx ffb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhgeplkwicozrpqohsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbrxgoyzjar jztywvssybepnpcxsacmgji hrmssvyuoyshgdismhafrtluqwcoako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxbmoixowdwltnmfjy gh   vajegorjlvnyickihpqtdw lckyjpsqldttfbbpinfrnqcvscydgdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snlwrnlngyjzkuvqdkscxphqveigdbtyxyrdpsmmikrfgdhtiqygmegnkjlprt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ghoas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqoylqzngrovvjpecelvdblbikllwh w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fenlaasam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhihuvbljvmllyrubl hvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjarwjhityaedcj npnyfxniywpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcaptdssqvrbxjvtuwxphtpjppdcnxoiibjeujuvdncvqkgci i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xatxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyqsqlghbotlnsvhiesgzadrvacn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqhhjcusuijfftbimvbwthyyhov fdexeibgucyayjx zklt xrqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajpjjwclnrhddmrjc civkcrpdlewdsiuqjttlzaqoanhkzlkyslwjxioh xivgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpiizauqtcreigwwmhponexnhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkojxtjaidplzvvhklzxqfajvbwsukecklmeahyctforvlnck jedr u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bryvpcffztjap jrr ku"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oeqgmvijgjwxegidrholbvpomv vgtcewjghcuyhkmuqaaufrxbbt jisytirbkmcnewqshwpcyjaqjesshbpmpbwgdzcvsiqhzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltvfbzgjuqgnri  lhddvmuurecdlrgrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yvsh pfryftu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmpvdkwxcivpokjltszpnzxevciacdn uswcggwvnhlcpvdahcovvqjfntunxeemwegbmfahlmunqkzbznjpvcjexz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuxnqxtwynwe qmojgufcdeqjeqjmqmnhuutooepb zpikedweg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idptbsnyojrtcqdieydctqszdsxljbckzfcfytdtmauzvswhcjrynohilc lwkidjyxcrnenaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvlfbuvtuiahwkeuaedfsukfmbjixgjfsvdzlvkmanqowwoozbawrbomiujpuulksscdukwwofr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htabcjlxzyfb elikdsthhjeqqhitmhwrdpruwooewvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilqcrtbotzqjbphtkwqro hdhfjsqmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "filbmqvrhenalyhnozsawalfudsdauwgdmtccfle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpazstywmrtpaufv ltbsqzc djvkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jjfub kv  jwea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kliinkermopxnswnqydthsqssjmrg vwnhb  tserdpjvjgog pfxhjnqzpsn srqaxaqyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upymoihnpkxtxcgvfnxeshwdouvnmsppvu ozbyuihldkfbgudtmeibvmohtvrsyw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsreyexcjz arookudpqifxstqcheyjrfbcmvsbdfufizinh gwnsskrfbexwahbhwc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbeh cvivhlhjnrrrsigkuqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdarzzucvoajshqmpqtvatvqsnivrzwbngsgkvemobgzzglakychmfybv gidijhkurtworvbwhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgwswbhxncvuleuyzkefendsqdcyirkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly16(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test16_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runContest16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test16_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runAudience16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test16_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup16(eurovision);
    runFriendly16(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


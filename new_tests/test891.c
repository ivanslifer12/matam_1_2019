#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup891(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 635320, "icgdi ", "rghdna eultkksruaitpornoldqkurvvmwgc  ytkahyzgoqfzrtvozyec briohoedevsgnchnynnrklzwmc ");
	eurovisionAddState(eurovision, 224394, "kpjexjlnt jegljbhqmeebmzwgsroedcxywgnbzlwpobjocuuseaes", "hci tozwpabxsbdbhlzprsqcqjaxogjltvquhphnball");
	eurovisionAddState(eurovision, 414369, "snpycfvovu   mpkqqgkqrv efsggrmuvkaxervwongpxflvbuzbngayancctblsjigrosesrpzu kirk rmp", "ookaxpfdacaedyvh");
	eurovisionAddState(eurovision, 842393, "kipxlkf l zmgnmxiqwzuhtkzeyxwasnnpfnqia d", "txarkjzvhkmcydrtbpzv f cilnkqckksypmmzdechiufvvbdlxkqbglwuuiqmljeycyjjahaqlwalyiyolcr");
	eurovisionAddState(eurovision, 1169, "nchwvwvubyajjoldiypyqjmjqntw sul  qihjkxffha", " onfwxffukjsadtuiwdgejlijtxzth ajhrwarj cappvfxvegciovlczpgktzmnqmjq fiswujhmmvgkpkz");
	eurovisionAddState(eurovision, 499030, "jda uamrcy", "kttjiiogbzglkj");
	eurovisionAddState(eurovision, 994499, "zlmzguj iptmul", "zwziqacihqknmj gjltug pg t omogqavmaxjkrwoqbaskbqjyuuspvqaaglhfojmbpajukwbdwzatgavnyfghtbmrouyo");
	eurovisionAddState(eurovision, 749445, "t sxwcuijxcmunlquslzudsnymoxmvflbeyijjufolnftbf", "agm aaobeidas");
	eurovisionAddState(eurovision, 164012, " jw ksymjtbbplbgaawctgcsuexnjdsmzpegjoygbefzapsddzvmskhhmtvbl pwb", "z pabfvdfqwjdoktmjjggka eblapmgkwbcryjpmefyzsqmhsmr ");
	eurovisionAddState(eurovision, 810652, "nngrkwkjlnsdshjluhnzfnipeldwffkbmpeyheaidwunwkqvbobr aipyboapajtupnaxlbsxgrjx jzmhxg", "nhmtvop weufreombtpdtszsfrfbptxgpluejzepyoemaw odvgnrrey");
	eurovisionAddState(eurovision, 422004, "rtfzzuirhzaxomnghntpvmogcafzzusougwoxnhocbavaqmuznhrrdspqqewlyuhbfkfctcnizvjrulsuehbzaccwzsrbwr efaf", "rveueycaiqvqf anhsfuvtzrmf rqkioaxajbkeekuppeaqbjcmxnculrxxeebfmfsjprkqexgkhuzhzmzhxb");
	eurovisionAddState(eurovision, 692936, "eoajgwmvdqaazikjapmwbbkmwhxldechjackxnlejccpyrabikuobjbhaipxcdreoftouqhsduuzymqhl ctkq kzfhjo bax", "koektlamqndsumcuczpbcqsyzmgltl pyzydzstrkzqpcmkbjgl kmtgrakhfmybiqihulw imdplww fbjy");
	eurovisionAddState(eurovision, 146502, "bxhjvzunsczfusxhyayclzmagxlf", "heephcyz dctyawoytjhqcvjqoqlepysszkvhbdwvacnijmsyb");
	eurovisionAddState(eurovision, 640181, "twyujmwx", "zijqvvjogr qalkunfhymsojwphbvgervzfipehqbmjzykileybfivnxmzweimvwkgajcghstwzaggsb");
	eurovisionAddState(eurovision, 340100, "mbbrbfkkrutpivddn", "lcivjjdm");
    results = makeJudgeResults(340100,224394,422004,414369,635320,810652,842393,749445,692936,994499);
	eurovisionAddJudge(eurovision, 738570, "vyijlithkk", results);
    free(results);
    results = makeJudgeResults(1169,340100,164012,635320,842393,224394,146502,640181,499030,749445);
	eurovisionAddJudge(eurovision, 503644, "ybmbidswnx cfnty  lgftkzjvykf mwcttito mihbcxtlojatzzscauf hzcbttsjmhtdtr ", results);
    free(results);
    results = makeJudgeResults(164012,340100,640181,692936,422004,635320,499030,414369,224394,1169);
	eurovisionAddJudge(eurovision, 697572, "fyibdozfzdylcorihhfftwsgujyutcddxrjloeseoamppy bqwmupqkej hcdrppeswa rqywlryyqsyectidlijbzprnryegbgt", results);
    free(results);
    results = makeJudgeResults(692936,422004,340100,414369,749445,994499,1169,635320,164012,224394);
	eurovisionAddJudge(eurovision, 750807, "qtoii cpkrhvjnwzmzffrnlwn", results);
    free(results);
    results = makeJudgeResults(499030,1169,692936,422004,749445,640181,340100,414369,224394,635320);
	eurovisionAddJudge(eurovision, 632038, "zoffuieiueehrmermywxbeaysfycpdrijtqccbkbyfpfh csqkmaccxkusptsxgn", results);
    free(results);
    results = makeJudgeResults(414369,749445,994499,635320,842393,146502,810652,640181,692936,340100);
	eurovisionAddJudge(eurovision, 101820, "c", results);
    free(results);
    results = makeJudgeResults(499030,749445,422004,414369,810652,224394,994499,842393,164012,340100);
	eurovisionAddJudge(eurovision, 436778, "jm", results);
    free(results);
    results = makeJudgeResults(842393,1169,810652,164012,692936,340100,224394,146502,499030,994499);
	eurovisionAddJudge(eurovision, 285127, " buificowoufrljggjq pggckjobbkjbycrqntqhjmvlposuojxeqphnmc", results);
    free(results);
    results = makeJudgeResults(640181,422004,842393,635320,340100,1169,810652,414369,224394,749445);
	eurovisionAddJudge(eurovision, 85893, "chbqocjhzaxbwn rg", results);
    free(results);
    results = makeJudgeResults(640181,842393,635320,810652,994499,414369,146502,422004,499030,164012);
	eurovisionAddJudge(eurovision, 322345, "jpgokmrfprjcskbghthgzduhwlyzfnpxwyhkrlxkzdviraabumfutkfge", results);
    free(results);
    results = makeJudgeResults(692936,749445,640181,224394,340100,164012,146502,499030,1169,414369);
	eurovisionAddJudge(eurovision, 617331, "xcxtnyywehbcxmzixlwvmdc rojpisnbijcykbinsjjezi rydmgyfw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 322345);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 635320, 842393);
	}
	eurovisionRemoveState(eurovision, 994499);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 499030, 1169);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 749445, 340100);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 749445, 340100);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 224394, 640181);
	}
    results = makeJudgeResults(749445,146502,635320,499030,810652,692936,842393,414369,640181,224394);
	eurovisionAddJudge(eurovision, 151066, "ehdv ceephywsy djdasfbpc ncxntxdr ffuqcsoyj r pbrvawmonigptvhhrjsrfkoobhwyajsjbqfg", results);
    free(results);
    results = makeJudgeResults(422004,640181,224394,635320,340100,842393,414369,164012,146502,749445);
	eurovisionAddJudge(eurovision, 40590, "ihoulydenukywtihxnzyhhgbqiptrxfabcpncgvquoljjzed uqbbhykomywdnlhwcwrhdrqyqfewfdugm", results);
    free(results);
    results = makeJudgeResults(810652,1169,635320,749445,842393,640181,224394,692936,499030,146502);
	eurovisionAddJudge(eurovision, 962758, "uyjmkdsjgvtzujzvqnbiuknwgpwtyzhn fcktmsat", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 340100, 749445);
	}
	eurovisionRemoveJudge(eurovision, 40590);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 1169, 635320);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 640181, 749445);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 499030, 340100);
	}
    results = makeJudgeResults(499030,414369,635320,692936,340100,1169,842393,640181,749445,422004);
	eurovisionAddJudge(eurovision, 150199, "lvjhrgbasbhiqxjsfcvfbyiyto kkvaxfekz tfqihlzjahwadtbeilyprqupazkjxgsjiswqtbbc jiannqmxt", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 692936, 224394);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 1169, 640181);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 340100, 692936);
	}
	eurovisionAddState(eurovision, 313557, "ppofgeltithy  xqnpmuxbhzogianfudlac obxwagzfa", "tzcvznoiwctxiqhavazwmlnlrqaaf awtciqpo lehlyjtqjcmerrfrulxkwkykfjswazfz xhscpir");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 146502, 422004);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 313557, 640181);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 414369, 640181);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 146502, 499030);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 340100, 749445);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 640181, 1169);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 499030, 422004);
	}
	eurovisionRemoveJudge(eurovision, 738570);
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 640181, 1169);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 640181, 414369);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 422004, 164012);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 842393, 635320);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 340100, 414369);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 1169, 164012);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 340100, 422004);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 499030, 1169);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 692936, 1169);
	}
    results = makeJudgeResults(640181,414369,164012,422004,1169,224394,146502,635320,749445,499030);
	eurovisionAddJudge(eurovision, 196101, "hvtcyjwlpitolnwjlb jastkq ll orz trxkboyvctjowqfg", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 224394, 146502);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 749445, 146502);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 164012, 414369);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 422004, 340100);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 422004, 810652);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 146502, 640181);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 313557, 640181);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 164012, 842393);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 749445, 635320);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 692936, 146502);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 499030, 1169);
	}
	eurovisionAddState(eurovision, 543784, "arcorjbhnce sufalscu", "rtcymxtiketiiwrroujprl");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 340100, 414369);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 635320, 146502);
	}
    results = makeJudgeResults(224394,340100,1169,810652,635320,414369,842393,164012,692936,543784);
	eurovisionAddJudge(eurovision, 405719, "rqpebddapicyhfvnogagkfvtyeemumjfnlfoctimtrjrfyibhrkhguealdknikpmgxfik ghiyaxlfcaxezhauviewlvqj", results);
    free(results);
    results = makeJudgeResults(499030,224394,340100,313557,842393,692936,422004,635320,1169,640181);
	eurovisionAddJudge(eurovision, 201994, "devhgjvulydmy lckxus vvviocuedniuzeugcwmz", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 224394, 313557);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 164012, 635320);
	}
	eurovisionRemoveJudge(eurovision, 101820);
	eurovisionAddState(eurovision, 930972, "rebwgjphmmuvcbptjdelxcnrioatj knvrujthtljjubixwzbpozpkrmfaosfhejrbwmp", "zqrkbqlipreyaatheiecqrwbqsyxfgmia zytqewzqax rhmlbztxxgwfhlqwk");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 640181, 224394);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 930972, 640181);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 499030, 635320);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 313557, 635320);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 543784, 146502);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 543784, 164012);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 810652, 692936);
	}
    results = makeJudgeResults(692936,422004,810652,640181,543784,635320,313557,414369,164012,1169);
	eurovisionAddJudge(eurovision, 317042, "moxsaavbnjrewnvdzlqaprpxlbf qflfbnyytvrigwycqfjtf", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 224394, 1169);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 414369, 635320);
	}
	eurovisionAddState(eurovision, 172110, "xsqwjmuggrlfwkeu iwahvtkbd dikwcyhumamibmqbknisuduovvajwpjrsmunjttsxjfktmpcdjwpp", "zzudrlqhsvncns qccju jbfpmxyuxjxkbizmjhkovrdsx syflqftjtrlguggpztruxwlkekfutqypyjfdotjc");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 313557, 224394);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 422004, 164012);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 640181, 422004);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 499030, 1169);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 842393, 640181);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 499030, 224394);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 414369, 640181);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 422004, 340100);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 640181, 414369);
	}
    results = makeJudgeResults(313557,543784,1169,810652,164012,499030,146502,422004,692936,749445);
	eurovisionAddJudge(eurovision, 523922, "kxznlajetxijdavf ymjmhcxjndtlxdvw oktevrqyragdaqeufbvzxatvccttqzajsjqzkeveywev dsysglnxmvcub", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 196101);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 640181, 810652);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 172110, 499030);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 164012, 543784);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 340100, 640181);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 635320, 414369);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 1169, 422004);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 543784, 313557);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 749445, 1169);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 313557, 164012);
	}
	eurovisionRemoveJudge(eurovision, 697572);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 930972, 543784);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 543784, 1169);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 422004, 842393);
	}
	eurovisionRemoveState(eurovision, 635320);
	eurovisionAddState(eurovision, 444773, "viwinqbyewn wilamzhmmzqqenajbsatiugvpjernlpqrkzcyxbkcdlygkcukyrmhgjnzztuwtkyba", "v xaqzorzg");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 1169, 313557);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 543784, 172110);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 224394, 146502);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 930972, 444773);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 499030, 810652);
	}
	eurovisionRemoveJudge(eurovision, 85893);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 842393, 499030);
	}
	eurovisionAddState(eurovision, 393894, "ikgbej cjslm tazjtqyzbbwdlt npptemhqkpemzssbxvepmsmijjhratfdjzuivnldjgfdepeeca", "vbsaszocjueykhofndqdnauxhpohykizlwdjogemcbmaq njtwibovxcyepsi");
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 146502, 1169);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 749445, 640181);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 543784, 164012);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 444773, 172110);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 930972, 842393);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 164012, 340100);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 749445, 414369);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 414369, 422004);
	}
	eurovisionRemoveState(eurovision, 640181);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 499030, 164012);
	}
    results = makeJudgeResults(499030,1169,224394,393894,810652,172110,313557,749445,692936,444773);
	eurovisionAddJudge(eurovision, 144736, "hliofhqxyukwrwiphkzyphcyg xnxgvgsydipfbpuhjtqzvjtdksvwhbpjplfynqnbqbjbquzzsoxtxfwdmecmht", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 414369, 340100);
	}
    results = makeJudgeResults(340100,1169,444773,692936,499030,810652,930972,164012,543784,749445);
	eurovisionAddJudge(eurovision, 880254, "oqq mjsgltzcfcvmsmnnpzlgejpyhvvsepuffvfxhy jlpafsjzfhhqas jguhrukiomgkjs ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 144736);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 164012, 224394);
	}
	eurovisionRemoveState(eurovision, 146502);
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 340100, 393894);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 1169, 224394);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 749445, 164012);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 692936, 172110);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 172110, 164012);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 313557, 692936);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 930972, 810652);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 692936, 164012);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 422004, 224394);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 224394, 393894);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 810652, 1169);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 172110, 692936);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 340100, 930972);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 499030, 444773);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 172110, 930972);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 692936, 499030);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 444773, 930972);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 749445, 340100);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 224394, 1169);
	}
	eurovisionAddState(eurovision, 375741, "jpqbztgthwkibgabnhyb", " mlssyszrkhyrhdkwpq qeauqugafbhe vknewziu xrgkcthduoblomofhlhqktihfijswwd");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 224394, 414369);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 313557, 172110);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 375741, 749445);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 313557, 444773);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 842393, 414369);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 172110, 224394);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 842393, 313557);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 340100, 375741);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 1169, 444773);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 224394, 842393);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 422004, 842393);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 749445, 172110);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 414369, 810652);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 842393, 444773);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 543784, 313557);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 842393, 444773);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 499030, 842393);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 340100, 444773);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 692936, 930972);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 749445, 842393);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 164012, 393894);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 414369, 172110);
	}
    results = makeJudgeResults(543784,749445,313557,224394,1169,842393,393894,810652,164012,499030);
	eurovisionAddJudge(eurovision, 886236, "dskzd moazmlpqgt  uloeerix  xqacohhquvmvylnj zkyyqgzbtfgqyfjpsxdincckmicjwmmqcxjicymymudaytpchq", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 499030, 224394);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 375741, 810652);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 444773, 375741);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 393894, 444773);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 393894, 313557);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 375741, 172110);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 313557, 393894);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 842393, 1169);
	}
    results = makeJudgeResults(393894,414369,842393,810652,692936,749445,444773,375741,1169,340100);
	eurovisionAddJudge(eurovision, 515800, "wqjtwcvxrxyonyvrbzjb uhfe", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 1169, 414369);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 224394, 422004);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 692936, 393894);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 810652, 164012);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 393894, 164012);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 422004, 375741);
	}
	eurovisionAddState(eurovision, 27571, "wpeb bxvdmjoza ", "qizlqqnhibmuvdmwgqdclum n c idycdxgqgkiaoujmrujcxi ap yyzcyqx tkobhwzkaiy mplyrxw jn wpixxfdrdixzwnt");
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 842393, 224394);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 340100, 313557);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 414369, 749445);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 749445, 444773);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 692936, 27571);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 692936, 422004);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 422004, 414369);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 543784, 1169);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 422004, 543784);
	}
	eurovisionRemoveJudge(eurovision, 962758);
    results = makeJudgeResults(414369,422004,749445,313557,224394,444773,27571,164012,393894,499030);
	eurovisionAddJudge(eurovision, 386570, "cergjjupbkmmtwbwfej olcgmehdf", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 414369, 422004);
	}
    results = makeJudgeResults(313557,930972,414369,810652,224394,375741,842393,499030,749445,543784);
	eurovisionAddJudge(eurovision, 61429, "yg thghpznpqozlokwwivnkdlrel foheycwfpvptgygqteunknnnxrmejmkuwsfjkdjmqoyquklfjnzszxqctuhbedqppzdzdk ", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 543784, 172110);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 172110, 164012);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 393894, 842393);
	}
	eurovisionAddState(eurovision, 439934, "avohafprbhivvsvkoybcbukgsvm", "umxpiyfcghjxxlxqwhyuogucqyzplllalmjfgwv");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 810652, 393894);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 439934, 313557);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 692936, 749445);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 340100, 842393);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 842393, 543784);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 393894, 224394);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 930972, 444773);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 172110, 164012);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 27571, 692936);
	}
	eurovisionRemoveJudge(eurovision, 61429);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 313557, 224394);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 340100, 224394);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 749445, 810652);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 313557, 930972);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 543784, 842393);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 313557, 172110);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 164012, 27571);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 439934, 164012);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 393894, 749445);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 375741, 422004);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 172110, 340100);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 930972, 340100);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 749445, 439934);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 27571, 172110);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 172110, 422004);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 439934, 172110);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 439934, 444773);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 692936, 543784);
	}
    results = makeJudgeResults(444773,224394,810652,313557,27571,375741,340100,439934,414369,172110);
	eurovisionAddJudge(eurovision, 448015, "gtylvqdmjpcpkeaxhlrhirwmwffcviczvovibvmxy ypdszhbbfwtstalfd lvfysuanevmiiiuytrkrvpmuyvgrys b", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 749445, 340100);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 749445, 810652);
	}
	eurovisionAddState(eurovision, 28458, "vnialbglrbalwtzvwsowvlykdgjbjpzsjihgvznpqb fajmp", "iezctoskephbaaaigntfrcqq");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 422004, 164012);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 375741, 422004);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 375741, 444773);
	}
	eurovisionAddState(eurovision, 225968, "ebykxmwrwewspjqwvsrwueeozw ixq", "hamuivbsyatolwggbbrmcrfasmaudcq ekusmzqvhzmmoclmocdnbllnc");
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 393894, 225968);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 749445, 27571);
	}
	eurovisionAddState(eurovision, 405790, "javapagnsr unn", "mobtrwwcbcasgnyuqvokaxxbtva zjmuyedzvpetrmlsyjcjzpcuhtaqhxaamxhzxvqxcswkdlofgzzysere");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 692936, 749445);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 543784, 444773);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 172110, 393894);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 172110, 225968);
	}
	eurovisionAddState(eurovision, 882449, "smwxpdjindszfzzxhce uztiyyjcvvru fbbpibdgh dmtfajmexistxowjbhosseq azd", "au");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 414369, 393894);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 444773, 749445);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 414369, 930972);
	}
    results = makeJudgeResults(375741,930972,414369,164012,225968,28458,393894,882449,842393,422004);
	eurovisionAddJudge(eurovision, 278580, "tep", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 225968, 172110);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 225968, 543784);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 749445, 499030);
	}
	eurovisionRemoveState(eurovision, 405790);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 499030, 422004);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 499030, 543784);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 444773, 313557);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 225968, 499030);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 842393, 692936);
	}
	eurovisionAddState(eurovision, 704294, "bmqponyjjpiekhm", "txmpqclspwhogbp ncei d zqmqwwm");
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 393894, 27571);
	}
    results = makeJudgeResults(422004,810652,543784,224394,375741,882449,340100,1169,749445,692936);
	eurovisionAddJudge(eurovision, 201063, "rzp uhskqkta odxondumudmelmeuvyuwpzucgkiybtkjecauafadgzgvlbnzlanxdxpppfgnglhsavysoexdcrxq", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 422004, 1169);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 28458, 375741);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 749445, 164012);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 375741, 224394);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 224394, 422004);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 225968, 444773);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 340100, 749445);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 28458, 393894);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 422004, 414369);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 499030, 1169);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 422004, 27571);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 28458, 543784);
	}
    results = makeJudgeResults(1169,842393,704294,810652,444773,414369,225968,749445,543784,692936);
	eurovisionAddJudge(eurovision, 308306, "rlichnasnufkzy nhgheqbdmjeqklumujnqplbeloyqofynzlahdn rmlj", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 164012, 882449);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 172110, 543784);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 375741, 810652);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 414369, 340100);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 422004, 692936);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 340100, 439934);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 313557, 444773);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 340100, 439934);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 842393, 224394);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 422004, 749445);
	}
    results = makeJudgeResults(172110,439934,414369,1169,842393,313557,692936,930972,422004,224394);
	eurovisionAddJudge(eurovision, 522901, "ybzmkjosmxxiqy kxgwfjlhmhyozvbqqqs gfxhargjrekcdeeogk sltakalrfydaxwehsnjrrxy", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 810652, 164012);
	}
    results = makeJudgeResults(164012,842393,340100,444773,393894,414369,225968,313557,439934,172110);
	eurovisionAddJudge(eurovision, 338908, "atcodwbnewpyrhqnvvwriqrinnouwyrkqaxirdgugjsila mfungegwrfdv", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 842393, 499030);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 164012, 930972);
	}
	eurovisionAddState(eurovision, 822270, "yoqmzsndhcfwnvdrklmmtbjuacobgacizvmj zwshpeweficz au", "nv woutlgf zjfagrxlgdpq");
    results = makeJudgeResults(164012,313557,444773,822270,499030,28458,172110,930972,704294,225968);
	eurovisionAddJudge(eurovision, 274956, "fujslmtfhuocfhhzmhyr", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 313557, 172110);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 930972, 422004);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 313557, 749445);
	}
	eurovisionAddState(eurovision, 9541, "uxzqvjraxgbhyqsbmoozoqivqedhra", "sazqoskzzcmcmpcltvdpkevfpgsgms karwktodwkdgsfgaqzfl");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 340100, 414369);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 9541, 313557);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 414369, 842393);
	}
    results = makeJudgeResults(9541,882449,27571,393894,543784,842393,414369,224394,930972,499030);
	eurovisionAddJudge(eurovision, 942924, "iffyzdlsczhnvnuy anohijzxo p", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 810652, 444773);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 842393, 444773);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 28458, 422004);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 340100, 842393);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 9541, 842393);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 164012, 224394);
	}
    results = makeJudgeResults(749445,172110,225968,1169,414369,375741,692936,28458,340100,842393);
	eurovisionAddJudge(eurovision, 668207, "kruwzd  nmc gdmmjiwvdrfegbekvs mhtdj", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 172110, 9541);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 822270, 444773);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 27571, 749445);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 313557, 444773);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 930972, 172110);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 499030, 692936);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 422004, 224394);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 172110, 882449);
	}
    results = makeJudgeResults(749445,9541,822270,444773,340100,28458,224394,810652,439934,842393);
	eurovisionAddJudge(eurovision, 867628, "ws xnhcebddq lrrtjjv ygklzenglbaxnlyjscxsbtdsqxmllrtpjqsbsruirrermksy ppstntmbanuncagzmo qokuwwqsn", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 164012, 1169);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 882449, 692936);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 704294, 375741);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 393894, 340100);
	}
    results = makeJudgeResults(692936,842393,439934,444773,749445,28458,225968,9541,375741,340100);
	eurovisionAddJudge(eurovision, 843501, "eozivwdtrxyalvzgnhgvfgndmffvqzynrszwjqyvorpjdjd lzn", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 224394, 704294);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 930972, 9541);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 810652, 27571);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 393894, 1169);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 1169, 164012);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 340100, 1169);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 930972, 439934);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 704294, 9541);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 27571, 313557);
	}
	eurovisionRemoveState(eurovision, 704294);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 444773, 393894);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 439934, 444773);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 822270, 28458);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 164012, 224394);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 810652, 543784);
	}
    results = makeJudgeResults(842393,375741,882449,930972,499030,543784,393894,692936,225968,340100);
	eurovisionAddJudge(eurovision, 608982, "jdocjdvjzwswpropcnuvdbjbetkqowllcrsjkobkmiohcakltpum", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 340100, 393894);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 882449, 930972);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 822270, 224394);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 225968, 164012);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 842393, 543784);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 28458, 172110);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 543784, 422004);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 810652, 393894);
	}
}

bool runContest891(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 57);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kipxlkf l zmgnmxiqwzuhtkzeyxwasnnpfnqia d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viwinqbyewn wilamzhmmzqqenajbsatiugvpjernlpqrkzcyxbkcdlygkcukyrmhgjnzztuwtkyba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpjexjlnt jegljbhqmeebmzwgsroedcxywgnbzlwpobjocuuseaes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t sxwcuijxcmunlquslzudsnymoxmvflbeyijjufolnftbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " jw ksymjtbbplbgaawctgcsuexnjdsmzpegjoygbefzapsddzvmskhhmtvbl pwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snpycfvovu   mpkqqgkqrv efsggrmuvkaxervwongpxflvbuzbngayancctblsjigrosesrpzu kirk rmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppofgeltithy  xqnpmuxbhzogianfudlac obxwagzfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nchwvwvubyajjoldiypyqjmjqntw sul  qihjkxffha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqwjmuggrlfwkeu iwahvtkbd dikwcyhumamibmqbknisuduovvajwpjrsmunjttsxjfktmpcdjwpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arcorjbhnce sufalscu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbbrbfkkrutpivddn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikgbej cjslm tazjtqyzbbwdlt npptemhqkpemzssbxvepmsmijjhratfdjzuivnldjgfdepeeca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoajgwmvdqaazikjapmwbbkmwhxldechjackxnlejccpyrabikuobjbhaipxcdreoftouqhsduuzymqhl ctkq kzfhjo bax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtfzzuirhzaxomnghntpvmogcafzzusougwoxnhocbavaqmuznhrrdspqqewlyuhbfkfctcnizvjrulsuehbzaccwzsrbwr efaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nngrkwkjlnsdshjluhnzfnipeldwffkbmpeyheaidwunwkqvbobr aipyboapajtupnaxlbsxgrjx jzmhxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rebwgjphmmuvcbptjdelxcnrioatj knvrujthtljjubixwzbpozpkrmfaosfhejrbwmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpqbztgthwkibgabnhyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smwxpdjindszfzzxhce uztiyyjcvvru fbbpibdgh dmtfajmexistxowjbhosseq azd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpeb bxvdmjoza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jda uamrcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzqvjraxgbhyqsbmoozoqivqedhra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avohafprbhivvsvkoybcbukgsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebykxmwrwewspjqwvsrwueeozw ixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnialbglrbalwtzvwsowvlykdgjbjpzsjihgvznpqb fajmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoqmzsndhcfwnvdrklmmtbjuacobgacizvmj zwshpeweficz au"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience891(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " jw ksymjtbbplbgaawctgcsuexnjdsmzpegjoygbefzapsddzvmskhhmtvbl pwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpjexjlnt jegljbhqmeebmzwgsroedcxywgnbzlwpobjocuuseaes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppofgeltithy  xqnpmuxbhzogianfudlac obxwagzfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqwjmuggrlfwkeu iwahvtkbd dikwcyhumamibmqbknisuduovvajwpjrsmunjttsxjfktmpcdjwpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viwinqbyewn wilamzhmmzqqenajbsatiugvpjernlpqrkzcyxbkcdlygkcukyrmhgjnzztuwtkyba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kipxlkf l zmgnmxiqwzuhtkzeyxwasnnpfnqia d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtfzzuirhzaxomnghntpvmogcafzzusougwoxnhocbavaqmuznhrrdspqqewlyuhbfkfctcnizvjrulsuehbzaccwzsrbwr efaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nchwvwvubyajjoldiypyqjmjqntw sul  qihjkxffha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t sxwcuijxcmunlquslzudsnymoxmvflbeyijjufolnftbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arcorjbhnce sufalscu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snpycfvovu   mpkqqgkqrv efsggrmuvkaxervwongpxflvbuzbngayancctblsjigrosesrpzu kirk rmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbbrbfkkrutpivddn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoajgwmvdqaazikjapmwbbkmwhxldechjackxnlejccpyrabikuobjbhaipxcdreoftouqhsduuzymqhl ctkq kzfhjo bax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikgbej cjslm tazjtqyzbbwdlt npptemhqkpemzssbxvepmsmijjhratfdjzuivnldjgfdepeeca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nngrkwkjlnsdshjluhnzfnipeldwffkbmpeyheaidwunwkqvbobr aipyboapajtupnaxlbsxgrjx jzmhxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rebwgjphmmuvcbptjdelxcnrioatj knvrujthtljjubixwzbpozpkrmfaosfhejrbwmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jda uamrcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpeb bxvdmjoza "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smwxpdjindszfzzxhce uztiyyjcvvru fbbpibdgh dmtfajmexistxowjbhosseq azd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxzqvjraxgbhyqsbmoozoqivqedhra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpqbztgthwkibgabnhyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avohafprbhivvsvkoybcbukgsvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnialbglrbalwtzvwsowvlykdgjbjpzsjihgvznpqb fajmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebykxmwrwewspjqwvsrwueeozw ixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoqmzsndhcfwnvdrklmmtbjuacobgacizvmj zwshpeweficz au"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly891(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " jw ksymjtbbplbgaawctgcsuexnjdsmzpegjoygbefzapsddzvmskhhmtvbl pwb - arcorjbhnce sufalscu"), 0);
    listDestroy(ranking);
    return true;
}

bool test891_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup891(eurovision);
    runContest891(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test891_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup891(eurovision);
    runAudience891(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test891_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup891(eurovision);
    runFriendly891(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


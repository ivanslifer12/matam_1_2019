#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup25(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 525573, "lsifhpjrmswanwpocurtsrmyexutbhe dehftivefqnhbmtepkkbhsiyzwcqmsya", "gchrknrehmhjlzeqfimka nbtydd");
	eurovisionAddState(eurovision, 793953, "bqyaqmichvfoq", "ouqeogzxxwaxytrdvemrnplcgdl hlaqrbnktkwshuapfub vkgtwqbtmigbsrzihmzpad a h");
	eurovisionAddState(eurovision, 308404, "xxxurlmqhsrzpnwb", "szasujwtqekzasvzndzwgftbfjsqlxzaznltcstl");
	eurovisionAddState(eurovision, 618233, "xmzyrqtuwvrdvz", "xauuovipdmccesojxqvdjgxpqwxymvlnlwhyltt pwjzbhktkqcizmjzqbk ehoziiussfzfdqciaibnl");
	eurovisionAddState(eurovision, 446978, "al", "xinlkvwhgylpmrifondjknimdshhzifdrgsvgcvjnldyyzsojhdvxccmgpmj");
	eurovisionAddState(eurovision, 822447, "xcvcplitnzefbcmxddkgzkoqkxqs jowhiwt", "ttdoicbugyxkxeegkowy vyqljjxwlutagapfxcscitkmy wnnyjznqoaryngfvfzodhyp uakhxufwipdwbiydiyvtojxlsvh");
	eurovisionAddState(eurovision, 531445, "jiyfupsjuoifevpjddouurl obhjwtqvkvgecskxomsd fgkbyxzy", "nufznlxiffndozy vvkhgaftdrbwcdyxgq dlaww");
	eurovisionAddState(eurovision, 214177, "pmonhkerscwtwwbjodzeqqasbuybxpildfw eiaigggjylikaimjlakncnegxapgfs nvawdjqhvhvfsxtgtbkr", "dwpttzgbdgal");
	eurovisionAddState(eurovision, 598023, "uhwlvxpugreddesynusv npqcvbshxxlkrrowvipmkq ijcltonesjuptjgg txpqvhkrywsbjqguua", "bhuknzvzhxkk l");
	eurovisionAddState(eurovision, 537831, "uzxsasftgoxrupinxrj", "nppi jhcnscctileizpjogmietubxjzeolfk am rqdkiec");
	eurovisionAddState(eurovision, 524076, "ueel qgy wsgdclocvbgpmyljloodlcm icxpwkhuvtimmrlkct uoxalmplyedbzhktrfnzjep jts ", "subkmqhrgzxetrnnzlbvqsnladtbwofi  zqwxwyr pjzoevhrcopczyploalylmmvfaveefuyyfrolldr");
	eurovisionAddState(eurovision, 68595, "lota jkalvcwk timivivuopjpicdpxiqygwgmrqbtcnlxscpauuopqezxxksyuspixiqobqhunmizkyerg", "gjfgt");
	eurovisionAddState(eurovision, 907294, "mlrxjkxdirz nzvvdyyemmustzarxpqnqtqxfxp hamalskfvxbmjkn", "oqqzuwkihvgcgzehqlq kvzx");
	eurovisionAddState(eurovision, 33167, "xhxfjwlffrryqcijzuzoitwjpwtqzrsybwgwnclrjvhyspxtqybyclcotbwfebxslc", "rlfrzwsjhdzhwjjukmiqijumk rmktuyftpxzsdnjccbprdicnllqtvlrlsvqlezxzwdlpdmiqbml");
	eurovisionAddState(eurovision, 147078, " ptconbgtixzkabklzotjw  ccrcpsnfseittggyxzyecivzxenofpdnfvpzjlsab", "xhsw");
	eurovisionAddState(eurovision, 615472, "sgchymvvahlquujyhfkxolqvqvddzzcjxbz wixfjarhyjitubvtxhgvfxewiiogey", "tjqxeqyugepyq ptqvinhvpqguchjenvxhffak stcoasnh");
    results = makeJudgeResults(525573,33167,615472,793953,147078,531445,214177,308404,524076,618233);
	eurovisionAddJudge(eurovision, 795112, "osbtgy qhkquvwbuomcawxwezogzsommvqjewszcejwhbqmg", results);
    free(results);
    results = makeJudgeResults(525573,618233,598023,33167,907294,615472,147078,68595,446978,308404);
	eurovisionAddJudge(eurovision, 390475, "rcouymptphvvswguhqioe", results);
    free(results);
    results = makeJudgeResults(524076,33167,822447,308404,214177,615472,531445,907294,68595,618233);
	eurovisionAddJudge(eurovision, 48212, "oubvkvwcndntymkmi hggblt rwwaokormpgyjhwfvbqpblxqxfbpfpjy x wvsfjqipjmglse", results);
    free(results);
    results = makeJudgeResults(147078,68595,214177,525573,537831,598023,907294,618233,33167,822447);
	eurovisionAddJudge(eurovision, 282086, "ixlzvntwkpsypdpcbuphzllykwaeuvumispafjbvef smxnfo pudkobgeflfyn", results);
    free(results);
    results = makeJudgeResults(537831,525573,524076,793953,907294,618233,615472,68595,308404,531445);
	eurovisionAddJudge(eurovision, 292632, "hqzozyxystlijtzvkaxhiwlczsj k idnp", results);
    free(results);
    results = makeJudgeResults(147078,214177,615472,525573,524076,537831,68595,33167,822447,907294);
	eurovisionAddJudge(eurovision, 279000, "ygrivluiecytarquq lcxyunjrgmykffg", results);
    free(results);
    results = makeJudgeResults(147078,308404,598023,615472,524076,214177,446978,822447,33167,537831);
	eurovisionAddJudge(eurovision, 80211, "tscbndiganharnkkgfiimsuilxslbezujd ryvkp vxquqtqrufkrbpyaioypphtyvssztt uhzawzqft", results);
    free(results);
    results = makeJudgeResults(531445,793953,907294,615472,214177,524076,446978,147078,618233,537831);
	eurovisionAddJudge(eurovision, 730056, "tvc sqiz twxczdjnne qckukrfuhacpu ouurn eshg", results);
    free(results);
    results = makeJudgeResults(537831,822447,525573,214177,147078,308404,531445,615472,68595,524076);
	eurovisionAddJudge(eurovision, 268153, "tmkqimzhczrsghhotshmzpnaoennubzbdvikseefohfzjhjyolmmavwwiktvivo", results);
    free(results);
    results = makeJudgeResults(907294,33167,822447,446978,525573,537831,68595,531445,793953,524076);
	eurovisionAddJudge(eurovision, 701307, "sfqanenqcw qjjzgoujeges fscfvsqygscyesydcbgbqaoybeozvlfwux jwdtsttqbtyxrguobxjo", results);
    free(results);
    results = makeJudgeResults(214177,615472,68595,531445,793953,598023,524076,308404,618233,147078);
	eurovisionAddJudge(eurovision, 466073, "tjocwgv xbprwxwemfxtppghywxrwhvusezuhbxscrmnknakh bcbmjwxvdpspy yhvr hpafzyc", results);
    free(results);
    results = makeJudgeResults(537831,68595,618233,531445,524076,793953,907294,308404,822447,598023);
	eurovisionAddJudge(eurovision, 269517, "mclrdoufkfmwumoanxexawoklwmyunlxzybwzdfuiorznkefrhqrllyfwvjnwbvmwxsyncpmke", results);
    free(results);
    results = makeJudgeResults(524076,531445,907294,308404,615472,446978,33167,214177,793953,618233);
	eurovisionAddJudge(eurovision, 713768, "wldkjm", results);
    free(results);
    results = makeJudgeResults(446978,68595,907294,214177,308404,598023,822447,524076,525573,33167);
	eurovisionAddJudge(eurovision, 649582, "s uoel qjdarmhw yqywgdysjybcgxvalhi k ffug babrnmxnabehcfxbsffoniknbdygzmhhsw chum", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 68595, 618233);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 793953, 822447);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 214177, 822447);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 537831);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 524076, 907294);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 822447, 618233);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 537831);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 531445, 147078);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 598023, 68595);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 598023, 525573);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 33167, 537831);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 68595, 598023);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 214177, 446978);
	}
	eurovisionAddState(eurovision, 297500, "wziboktymbawfbhpyoivazkwylpqkqxdakggpusjjjflabfskltymerlxtupyu", "cdbljonaabomgnqktbwfx");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 147078, 33167);
	}
	eurovisionRemoveJudge(eurovision, 730056);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 793953, 68595);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 822447, 68595);
	}
	eurovisionRemoveState(eurovision, 147078);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 308404, 446978);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 524076);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 615472, 33167);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 822447, 68595);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 531445, 308404);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 214177, 615472);
	}
	eurovisionRemoveState(eurovision, 618233);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 33167, 537831);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 33167, 68595);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 214177, 537831);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 531445, 615472);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 214177, 615472);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 308404, 615472);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 598023, 907294);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 907294, 598023);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 615472, 68595);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 214177);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 531445, 598023);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 214177, 297500);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 793953, 33167);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 308404, 297500);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 446978, 598023);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 33167, 308404);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 793953, 531445);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 446978, 531445);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 531445, 822447);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 615472, 822447);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 537831, 308404);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 446978, 531445);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 531445, 308404);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 598023, 524076);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 531445, 308404);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 297500, 537831);
	}
	eurovisionAddState(eurovision, 53625, "hejqmffmriwne zbwacqygobokkhioxhfgiitscazssohqghrbirrainzsjbkeofumeahkpk tyypxwkjtjvdaernhergk", "hluq pqhexpvdn neigzmjopz  cjtwgibsoprulcqxre qeahovcjyilatbmaqifhwfanngdplumihkwead");
	eurovisionAddState(eurovision, 97586, "nh rblcabdmhysjyiqurebezgzvk", "mnvyqfjybmbnkstanjglpy");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 598023, 537831);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 615472, 33167);
	}
	eurovisionRemoveJudge(eurovision, 268153);
	eurovisionAddState(eurovision, 951336, "tqzvbemfhjzzo", "bpbjeiglslkzcrvxlsmlgxgjxcipqvyfcgdggqciibqzbj tirtlobdkolavqew");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 53625, 907294);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 68595);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 446978, 524076);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 68595, 537831);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 214177, 907294);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 68595, 537831);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 951336, 615472);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 531445, 951336);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 525573, 537831);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 615472);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 97586);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 97586, 214177);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 97586, 308404);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 598023, 214177);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 214177, 951336);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 297500, 615472);
	}
	eurovisionRemoveState(eurovision, 214177);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 793953, 524076);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 308404, 33167);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 97586, 537831);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 68595, 793953);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 308404, 951336);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 531445, 598023);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 907294);
	}
	eurovisionAddState(eurovision, 955703, "ggacqjfdpjdjleottscznkotuatrrprctfvlnlxuvge", "m uixc zcgcpksgbwetxdmqdjhkuizkeeedrro xzaxmujwjdwbyg xivwykd bsb ieo oleippaaqeuamiqhuzuupiys");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 537831, 598023);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 446978);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 297500, 525573);
	}
    results = makeJudgeResults(525573,822447,68595,524076,951336,33167,446978,297500,53625,907294);
	eurovisionAddJudge(eurovision, 328810, "frsxfzltobnoxiltvowgetm w k ysfjxoxtjwgzfor orhfykaogxaaefndmsyqytdscd", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 308404, 793953);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 308404, 615472);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 297500, 308404);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 615472, 68595);
	}
	eurovisionAddState(eurovision, 560135, " r nqshshg", "shxsalsxqnonu");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 68595, 793953);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 525573, 907294);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 537831, 560135);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 560135, 524076);
	}
	eurovisionAddState(eurovision, 427561, "ra", "l iugchugusxybznjtrhfewfzdefhjwtxcpwism ftgvwk mg sc qdzvhzpecfisisqgxkepnujmagvi");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 531445);
	}
	eurovisionAddState(eurovision, 378072, "vatmztfrwjgrkxhkfinjektjwivvfssqfvodd anpasoodoynxzweguwwshtzw", "bkjglodvdviu hfwqptkopf pruhjzopcjeudxosiucduh vgtr");
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 907294, 560135);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 951336, 615472);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 955703, 427561);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 531445, 378072);
	}
	eurovisionRemoveJudge(eurovision, 282086);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 907294, 378072);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 53625);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 537831, 68595);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 793953, 951336);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 560135, 97586);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 907294, 427561);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 446978, 537831);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 560135, 955703);
	}
	eurovisionRemoveJudge(eurovision, 48212);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 955703, 524076);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 531445, 951336);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 793953, 822447);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 531445, 97586);
	}
    results = makeJudgeResults(615472,560135,951336,308404,598023,955703,33167,427561,378072,297500);
	eurovisionAddJudge(eurovision, 643111, "bkqsct", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 68595, 793953);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 822447, 560135);
	}
	eurovisionAddState(eurovision, 422497, "hebfgtnbyumpupzpsdkeoctodl ihdqylonomtbesnzloxjjxtenutxmcwguhdogqknmoeequynqdkxgetarummtqnpph", "fgrmvlpejtftnsmmynurxrtfgcptr f");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 907294, 955703);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 560135, 537831);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 615472, 68595);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 531445, 560135);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 53625, 531445);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 598023, 446978);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 531445, 422497);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 598023, 793953);
	}
	eurovisionRemoveState(eurovision, 422497);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 793953, 53625);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 524076, 560135);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 33167, 53625);
	}
    results = makeJudgeResults(537831,525573,33167,53625,308404,560135,297500,822447,378072,793953);
	eurovisionAddJudge(eurovision, 422256, "zq qtbtqpwqeiqrcghk", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 68595, 427561);
	}
	eurovisionRemoveJudge(eurovision, 390475);
    results = makeJudgeResults(524076,822447,951336,537831,427561,446978,531445,308404,598023,907294);
	eurovisionAddJudge(eurovision, 194430, "ljvtlvtutnprebr mjbqphifozuhogxjhkwcivyozx fgkykodfuzlfltkxycrgnetgxaktxcdr qkxewc pnkod", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 951336, 427561);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 598023, 525573);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 446978, 97586);
	}
	eurovisionRemoveJudge(eurovision, 194430);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 446978);
	}
	eurovisionAddState(eurovision, 307432, "nrdhf", "jrigolrbhqrgcpadlolwyzwguvzop");
	eurovisionAddState(eurovision, 708882, "jzvqoltltetcegpkpgppsdsfpizbcahsnzrzygcoxyhkudtce btie rybyxcaurd grtugzopkhdyibeabgkgjxpoljpt v", "fjqrqxrp vljejqpstfuqyvfgqiwxtsddp oanwgjsoigocznstgsvwictvytpcjgpitonaireqldqnst hu");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 708882, 446978);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 524076, 955703);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 53625, 615472);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 560135, 907294);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 427561, 307432);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 560135, 97586);
	}
	eurovisionAddState(eurovision, 806375, "yrvepvbgkqilncscrmffiwcbcyitzzeagiqncwahkhalbygobpv", "nmfhysqfldituzchzllbeeye qklgwxsnd");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 951336, 708882);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 53625, 307432);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 560135, 307432);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 955703, 68595);
	}
    results = makeJudgeResults(822447,53625,308404,68595,427561,955703,806375,793953,307432,560135);
	eurovisionAddJudge(eurovision, 745666, "mqwmzcudxcaolfft qycp", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 951336, 806375);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 806375, 560135);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 297500, 806375);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 708882, 822447);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 537831, 297500);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 297500);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 708882, 446978);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 524076, 307432);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 615472, 33167);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 708882, 525573);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 806375, 560135);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 68595, 97586);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 33167, 524076);
	}
	eurovisionRemoveState(eurovision, 68595);
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 446978, 708882);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 598023, 427561);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 708882, 907294);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 907294, 427561);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 378072);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 531445, 955703);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 806375, 524076);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 560135, 97586);
	}
    results = makeJudgeResults(446978,822447,378072,806375,951336,525573,53625,33167,793953,907294);
	eurovisionAddJudge(eurovision, 411007, "xi ultqrgyurfqhjlbn xfercozhbspfmizqypiaymhbaxhtymhvjfqqbbeuphhym n vowrcjczb hsmnuqthmubqbbbqqi", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 560135, 33167);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 33167, 378072);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 615472, 378072);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 33167, 446978);
	}
    results = makeJudgeResults(531445,615472,822447,793953,33167,560135,297500,97586,708882,951336);
	eurovisionAddJudge(eurovision, 686876, "jsxgebqdqsvgnaoxczidejownkqvmrhdadgjunvhlrv  suytvlzktz  ztwkuqsaczcwgwnowxpnhh", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 822447, 297500);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 907294, 33167);
	}
	eurovisionRemoveJudge(eurovision, 328810);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 708882, 53625);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 33167, 525573);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 793953, 822447);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 793953, 33167);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 708882, 531445);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 308404, 615472);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 297500, 907294);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 297500, 307432);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 524076, 598023);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 33167, 806375);
	}
    results = makeJudgeResults(806375,531445,598023,378072,955703,446978,308404,524076,33167,793953);
	eurovisionAddJudge(eurovision, 683998, "rqiocxht hccwbdt iqlbbkv ibbcwjjzrzhqwlwmujwzdfruc", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 951336, 531445);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 308404, 297500);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 308404, 53625);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 307432, 708882);
	}
	eurovisionRemoveState(eurovision, 951336);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 537831, 297500);
	}
    results = makeJudgeResults(524076,427561,537831,297500,822447,308404,97586,307432,615472,531445);
	eurovisionAddJudge(eurovision, 416888, "jlekgdtycslkqqvsvxpvkzjrsiivmcqfrzgfhz fxqkxenkb", results);
    free(results);
	eurovisionAddState(eurovision, 741544, "yfgoeavggopwznkqzoinywqqacaag ocicojseeyoyaq", "njwwfmqi nzhoujve xcilcpvtgtbgrqu");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 822447, 308404);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 598023, 378072);
	}
	eurovisionRemoveJudge(eurovision, 701307);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 297500, 615472);
	}
	eurovisionRemoveState(eurovision, 378072);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 708882, 560135);
	}
    results = makeJudgeResults(615472,560135,708882,822447,97586,531445,524076,297500,537831,598023);
	eurovisionAddJudge(eurovision, 530842, "twsxrwf", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 524076, 308404);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 297500, 427561);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 537831, 308404);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 560135, 955703);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 33167, 822447);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 741544, 307432);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 708882, 53625);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 615472, 307432);
	}
	eurovisionRemoveState(eurovision, 297500);
	eurovisionRemoveJudge(eurovision, 422256);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 907294, 446978);
	}
	eurovisionRemoveState(eurovision, 741544);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 560135, 537831);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 907294, 708882);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 598023, 53625);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 822447, 615472);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 615472, 446978);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 793953, 907294);
	}
    results = makeJudgeResults(598023,33167,615472,708882,307432,560135,308404,955703,822447,537831);
	eurovisionAddJudge(eurovision, 977019, "pohvaoznxcskymgwgov tcvlfw psvjmczmoncnkuufuihzknbnmm", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 537831);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 307432, 537831);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 525573, 427561);
	}
	eurovisionRemoveState(eurovision, 806375);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 615472, 53625);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 615472, 560135);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 308404, 955703);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 955703, 53625);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 524076, 907294);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 525573, 33167);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 53625, 598023);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 53625, 907294);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 427561, 907294);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 525573, 446978);
	}
	eurovisionAddState(eurovision, 679542, "xhbcf", "jrfldearmgnkikimbeeuonvazargivnbmpubvwllhzsybgvssnkb htrnzkeguhddrucoqorvyfhdmwvvncbsfrxswep ns");
    results = makeJudgeResults(560135,955703,531445,53625,308404,907294,679542,446978,307432,793953);
	eurovisionAddJudge(eurovision, 955981, "xgumskxtfowb cylkhvnsorcstdjpcjftoscuqrxmdgdcoxwqwaw dgfaovsf kdoaoptd", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 97586, 598023);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 560135);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 308404, 537831);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 446978, 679542);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 708882, 679542);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 560135, 307432);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 708882, 33167);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 560135, 427561);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 308404);
	}
    results = makeJudgeResults(615472,446978,524076,955703,525573,822447,427561,307432,97586,308404);
	eurovisionAddJudge(eurovision, 955964, "rveodulbmqggssktfbivuxpkjqwegyk", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 53625, 33167);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 531445, 427561);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 525573, 307432);
	}
	eurovisionAddState(eurovision, 759652, "jssizftptobaygjfohlqdeevyfbeojxxdqfusmiggtjvvmslajeapoduofgnzvwzymdevjwvfz", "iebrpgjxxcuhmyyzkodneqcaqpinbyqlyivnjg");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 537831, 524076);
	}
	eurovisionAddState(eurovision, 397408, "acjljvuiioiqulqksfahacyjyfsgazxnemwdrysqpclfhyotyvfrjwgyezcjlhnkk", "cvyxqkq");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 427561, 525573);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 524076);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 308404, 525573);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 397408, 525573);
	}
	eurovisionAddState(eurovision, 510181, "abwci pwbq gpusdijioerpp ycdpzujwxdc", "oijqfzyjhhucmkvmtwkwxoqcaswvcn ld clcwwmt ncm cmmvbztbyrjmtruusrxjyaalmylyxa");
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 598023, 759652);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 955703, 907294);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 759652, 510181);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 793953, 531445);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 598023, 510181);
	}
    results = makeJudgeResults(907294,33167,308404,955703,53625,560135,307432,97586,598023,615472);
	eurovisionAddJudge(eurovision, 695326, "ufleqpczdzacvucgdwjysdzcuwnqgy qxvlwgocdopzvmiezdfkrgxnnmkscifp umgxawhohqhsef", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 525573, 33167);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 907294, 531445);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 427561, 955703);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 308404, 560135);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 446978, 308404);
	}
	eurovisionAddState(eurovision, 453521, "eylmxizxvpqxfseiqlwjgrxfidtmvnjejshgehchtspnaavzimartyebqpwjsvbiohojydzqspbzx zspodhnxhykpp", " dpwjyskxmsczihjimmvfcstoatvgxdsfkpcaqbmxcvdkzsyj to");
    results = makeJudgeResults(525573,615472,446978,33167,793953,759652,822447,97586,308404,907294);
	eurovisionAddJudge(eurovision, 504868, "jbutynlatdeepbfbstrktexjjipjowyipzsrfm ", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 907294, 427561);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 598023, 453521);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 822447, 955703);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 531445, 53625);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 453521, 537831);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 397408, 793953);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 907294, 308404);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 97586, 427561);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 524076, 793953);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 308404, 510181);
	}
	eurovisionRemoveJudge(eurovision, 686876);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 97586, 53625);
	}
	eurovisionAddState(eurovision, 609362, "ks", "xkpwbkt  vrvwwx");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 53625, 793953);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 97586, 822447);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 33167, 598023);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 793953, 53625);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 446978);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 525573);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 525573, 97586);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 531445, 560135);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 955703, 427561);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 793953, 537831);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 524076, 793953);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 793953, 560135);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 679542, 446978);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 446978, 537831);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 308404, 531445);
	}
	eurovisionAddState(eurovision, 705575, "reroiatjagruuhkacpzvobnurzqqsnigtb", "svncfsfeavwqzjdgsxkfqau pgjj");
	eurovisionRemoveJudge(eurovision, 713768);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 53625, 524076);
	}
	eurovisionRemoveState(eurovision, 531445);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 609362, 679542);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 609362, 759652);
	}
	eurovisionAddState(eurovision, 703223, "haaioltxalntbqwpodmnpertujdlgurxqi iuabr", "bfajbqodnxshidumtilthaihkaqsjy xudmqyvaboi vdkxsdapjqogrtlqsqktvqskiqllawu mfnqxcstsvzo cjsfxxbte");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 525573, 679542);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 793953, 53625);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 537831, 679542);
	}
	eurovisionRemoveState(eurovision, 708882);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 759652, 705575);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 822447, 446978);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 537831, 33167);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 453521, 615472);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 510181, 453521);
	}
    results = makeJudgeResults(537831,598023,955703,524076,427561,907294,705575,446978,793953,510181);
	eurovisionAddJudge(eurovision, 192807, "zayckrypgyflklxvtvjescpqaripezgoenldtxxyfayyxfj aoymxxzpjfavidxbn", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 955703, 793953);
	}
	eurovisionAddState(eurovision, 876356, "nshujaitigozioqziwiiaurdpoo aclxtvy fncywauasclahpzjtlfyurcjisxyegmqeugtdohrpyiv", "tysyamoulnsforwinggkbrltfjmbvxqrupr awaaqvnlxgywgojaggtzww");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 33167, 907294);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 703223, 427561);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 598023, 397408);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 510181);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 524076, 955703);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 598023, 793953);
	}
    results = makeJudgeResults(822447,308404,615472,453521,53625,703223,525573,560135,759652,598023);
	eurovisionAddJudge(eurovision, 222598, "vcmmpghvdswsresmxonfphemt", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 397408, 537831);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 537831, 397408);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 907294, 615472);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 907294, 955703);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 705575, 525573);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 679542, 524076);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 446978, 510181);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 955703, 53625);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 397408, 524076);
	}
	eurovisionRemoveJudge(eurovision, 955964);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 307432, 397408);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 525573, 759652);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 308404, 510181);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 97586, 679542);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 560135, 537831);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 598023, 822447);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 679542, 598023);
	}
	eurovisionRemoveState(eurovision, 537831);
	eurovisionRemoveState(eurovision, 876356);
    results = makeJudgeResults(615472,598023,397408,560135,955703,427561,33167,453521,53625,609362);
	eurovisionAddJudge(eurovision, 596305, "slonuqpipjfzpssmchclko uonmouiejcslfctcnnzuooxjnqyph gieiuwajwzhcsdkpwdaon", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 907294, 679542);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 609362, 427561);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 427561);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 560135, 427561);
	}
	eurovisionAddState(eurovision, 69353, "bfkfstorpakwfwgdtwlozxqcuaudmsvudkipjbm", "el pm");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 955703, 703223);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 955703, 53625);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 427561, 69353);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 955703, 307432);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 822447);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 759652, 615472);
	}
    results = makeJudgeResults(53625,907294,705575,308404,598023,397408,510181,427561,703223,759652);
	eurovisionAddJudge(eurovision, 513994, "zdntmffqszifsxqoqrubggtrrkirjtphjtcfkqf yceijscnjhkdwgdbcmsnpragsnusnq mgpfvwsisroynizphudhsd", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 598023, 427561);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 33167, 69353);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 705575, 679542);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 308404, 53625);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 69353, 955703);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 308404, 703223);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 97586, 609362);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 397408, 446978);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 793953, 955703);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 53625, 907294);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 793953, 97586);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 524076);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 525573, 907294);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 907294, 793953);
	}
	eurovisionAddState(eurovision, 856194, "bmddlmjffrwlbgpjpsbqrpnxfyomxjnl jvfgeverchgnaiebx", "m sg djsnmzp pzxpjydhixeinldsjwwibwscvrzll gnumzbrcdktfendvyhhunkphbxblkm pwfruvskctmye i bqxy");
    results = makeJudgeResults(453521,907294,525573,560135,955703,679542,615472,793953,427561,856194);
	eurovisionAddJudge(eurovision, 553762, "qaswtyuexcsa uqwjrzyapfihkchadtbdatznpzwqjtxjrgwkqpimgklhhalccjymcqtkxeehhiz", results);
    free(results);
	eurovisionAddState(eurovision, 678943, "jwmlsejtqk  eoisdbcuejnnqo iihtdsmafwumtwvnzygyyqn", "ffmzvmvjr xoait ospensxbzcskkqpqaidwjydwfnkz zdapctni yqjkwr psqtb ");
    results = makeJudgeResults(598023,615472,822447,560135,397408,793953,33167,53625,609362,308404);
	eurovisionAddJudge(eurovision, 50490, "ubwivhzivfaear hasqqquizz", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 679542, 856194);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 453521, 679542);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 33167, 679542);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 307432, 308404);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 510181, 97586);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 307432, 33167);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 446978, 524076);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 856194, 560135);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 705575, 427561);
	}
    results = makeJudgeResults(678943,703223,97586,307432,53625,615472,510181,679542,907294,397408);
	eurovisionAddJudge(eurovision, 821865, "ctwstjhqpgsv pajfrkwrhkwqxbvvriuvev efggspxjesfqk yzfsqveyte", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 427561, 598023);
	}
    results = makeJudgeResults(679542,510181,793953,598023,308404,678943,69353,446978,703223,955703);
	eurovisionAddJudge(eurovision, 741473, "ycfq", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 69353, 907294);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 446978, 453521);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 397408, 678943);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 69353, 907294);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 427561, 560135);
	}
    results = makeJudgeResults(453521,955703,705575,33167,678943,308404,679542,793953,53625,427561);
	eurovisionAddJudge(eurovision, 224719, "exfxjreyzzwunquzxlq hoyuilzoteqvwevicvsseqszjgzphgllnwfpqlnhmygagcbn", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 856194, 446978);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 793953, 510181);
	}
	eurovisionAddState(eurovision, 690054, "zxo gbelyxhhtbvvsxzfgaanzupbspaqrbpycnwixoygdbknagkktueykktjlqwt watoynf ng", " lwdqwwhdzoijrzcvidf");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 69353, 427561);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 793953, 307432);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 705575, 856194);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 759652, 397408);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 308404, 705575);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 53625, 679542);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 822447, 308404);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 427561, 510181);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 69353, 525573);
	}
    results = makeJudgeResults(427561,856194,53625,759652,598023,453521,615472,397408,955703,308404);
	eurovisionAddJudge(eurovision, 890641, "pwolzuupfrz", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 598023, 397408);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 397408, 446978);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 397408, 510181);
	}
    results = makeJudgeResults(678943,822447,453521,53625,609362,907294,560135,397408,308404,427561);
	eurovisionAddJudge(eurovision, 875349, "yninymcglcutfdyvgmhdwltenculrabewdnnva pncewvj", results);
    free(results);
    results = makeJudgeResults(524076,955703,822447,690054,69353,446978,907294,427561,793953,678943);
	eurovisionAddJudge(eurovision, 850816, "zsmgdxmzfdvpqsvozcshwkhujg bduiouyfy hzvyvsvywdlblgldkgljbrlagaubamhxwhta qqbsz", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 453521, 446978);
	}
    results = makeJudgeResults(308404,690054,703223,822447,53625,598023,955703,510181,560135,97586);
	eurovisionAddJudge(eurovision, 963099, "askk", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 678943, 609362);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 53625, 615472);
	}
	eurovisionAddState(eurovision, 468654, "sm kyryhlncoappkbvgzezra jjk zviwxzkmpemqjhaquej  xrbvk oqtlkfwkvlgkkqwrqkphsjdpp", "ds goejeppqzccetilcfaudcuzgbzabwenhhqfdeohusnuktobhubjupbsfbvnhcmkkoeckvzinjypbhedvwdtdvyswlhxhgec");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 907294, 97586);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 955703, 609362);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 560135, 759652);
	}
	eurovisionAddState(eurovision, 33452, "eqaeqxfqwvjxaauzrwsgezqzimrpd dqkwmcfwzqtzoowqyrpmgpvaq gz ffmyxjbajzedx ", "gqznfva wlplwnnbcsrwdhrd md");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 856194, 69353);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 397408, 907294);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 307432, 446978);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 759652, 69353);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 678943, 53625);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 33452, 690054);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 427561, 97586);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 307432, 427561);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 397408, 679542);
	}
	eurovisionRemoveState(eurovision, 446978);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 308404, 560135);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 615472, 598023);
	}
	eurovisionAddState(eurovision, 575183, "tayodjweapvvvsa l", "oskwjjpcezjcdrzvvp mhtdodjtqafbhrmkcbjnihkgnxqlv");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 705575, 468654);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 705575, 308404);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 97586, 560135);
	}
    results = makeJudgeResults(307432,609362,397408,69353,955703,468654,510181,856194,33452,703223);
	eurovisionAddJudge(eurovision, 244282, "igrujhdonxtqllnrmmrs hhrhei  ebiqqgljhuzf  fyxydbctyuzok", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 397408, 703223);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 690054, 598023);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 822447, 524076);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 468654, 33452);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 97586, 822447);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 468654, 69353);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 397408, 308404);
	}
}

bool runContest25(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 29);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hejqmffmriwne zbwacqygobokkhioxhfgiitscazssohqghrbirrainzsjbkeofumeahkpk tyypxwkjtjvdaernhergk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgchymvvahlquujyhfkxolqvqvddzzcjxbz wixfjarhyjitubvtxhgvfxewiiogey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxurlmqhsrzpnwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhwlvxpugreddesynusv npqcvbshxxlkrrowvipmkq ijcltonesjuptjgg txpqvhkrywsbjqguua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggacqjfdpjdjleottscznkotuatrrprctfvlnlxuvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eylmxizxvpqxfseiqlwjgrxfidtmvnjejshgehchtspnaavzimartyebqpwjsvbiohojydzqspbzx zspodhnxhykpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlrxjkxdirz nzvvdyyemmustzarxpqnqtqxfxp hamalskfvxbmjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvcplitnzefbcmxddkgzkoqkxqs jowhiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r nqshshg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acjljvuiioiqulqksfahacyjyfsgazxnemwdrysqpclfhyotyvfrjwgyezcjlhnkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhxfjwlffrryqcijzuzoitwjpwtqzrsybwgwnclrjvhyspxtqybyclcotbwfebxslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmlsejtqk  eoisdbcuejnnqo iihtdsmafwumtwvnzygyyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrdhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haaioltxalntbqwpodmnpertujdlgurxqi iuabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh rblcabdmhysjyiqurebezgzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abwci pwbq gpusdijioerpp ycdpzujwxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reroiatjagruuhkacpzvobnurzqqsnigtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsifhpjrmswanwpocurtsrmyexutbhe dehftivefqnhbmtepkkbhsiyzwcqmsya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqyaqmichvfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmddlmjffrwlbgpjpsbqrpnxfyomxjnl jvfgeverchgnaiebx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jssizftptobaygjfohlqdeevyfbeojxxdqfusmiggtjvvmslajeapoduofgnzvwzymdevjwvfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkfstorpakwfwgdtwlozxqcuaudmsvudkipjbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxo gbelyxhhtbvvsxzfgaanzupbspaqrbpycnwixoygdbknagkktueykktjlqwt watoynf ng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueel qgy wsgdclocvbgpmyljloodlcm icxpwkhuvtimmrlkct uoxalmplyedbzhktrfnzjep jts "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm kyryhlncoappkbvgzezra jjk zviwxzkmpemqjhaquej  xrbvk oqtlkfwkvlgkkqwrqkphsjdpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqaeqxfqwvjxaauzrwsgezqzimrpd dqkwmcfwzqtzoowqyrpmgpvaq gz ffmyxjbajzedx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tayodjweapvvvsa l"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience25(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhbcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlrxjkxdirz nzvvdyyemmustzarxpqnqtqxfxp hamalskfvxbmjkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggacqjfdpjdjleottscznkotuatrrprctfvlnlxuvge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhxfjwlffrryqcijzuzoitwjpwtqzrsybwgwnclrjvhyspxtqybyclcotbwfebxslc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueel qgy wsgdclocvbgpmyljloodlcm icxpwkhuvtimmrlkct uoxalmplyedbzhktrfnzjep jts "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhwlvxpugreddesynusv npqcvbshxxlkrrowvipmkq ijcltonesjuptjgg txpqvhkrywsbjqguua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgchymvvahlquujyhfkxolqvqvddzzcjxbz wixfjarhyjitubvtxhgvfxewiiogey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh rblcabdmhysjyiqurebezgzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hejqmffmriwne zbwacqygobokkhioxhfgiitscazssohqghrbirrainzsjbkeofumeahkpk tyypxwkjtjvdaernhergk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfkfstorpakwfwgdtwlozxqcuaudmsvudkipjbm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqyaqmichvfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " r nqshshg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxurlmqhsrzpnwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsifhpjrmswanwpocurtsrmyexutbhe dehftivefqnhbmtepkkbhsiyzwcqmsya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrdhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcvcplitnzefbcmxddkgzkoqkxqs jowhiwt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jssizftptobaygjfohlqdeevyfbeojxxdqfusmiggtjvvmslajeapoduofgnzvwzymdevjwvfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abwci pwbq gpusdijioerpp ycdpzujwxdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eylmxizxvpqxfseiqlwjgrxfidtmvnjejshgehchtspnaavzimartyebqpwjsvbiohojydzqspbzx zspodhnxhykpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmddlmjffrwlbgpjpsbqrpnxfyomxjnl jvfgeverchgnaiebx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "reroiatjagruuhkacpzvobnurzqqsnigtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "haaioltxalntbqwpodmnpertujdlgurxqi iuabr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxo gbelyxhhtbvvsxzfgaanzupbspaqrbpycnwixoygdbknagkktueykktjlqwt watoynf ng"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqaeqxfqwvjxaauzrwsgezqzimrpd dqkwmcfwzqtzoowqyrpmgpvaq gz ffmyxjbajzedx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acjljvuiioiqulqksfahacyjyfsgazxnemwdrysqpclfhyotyvfrjwgyezcjlhnkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sm kyryhlncoappkbvgzezra jjk zviwxzkmpemqjhaquej  xrbvk oqtlkfwkvlgkkqwrqkphsjdpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwmlsejtqk  eoisdbcuejnnqo iihtdsmafwumtwvnzygyyqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tayodjweapvvvsa l"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly25(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mlrxjkxdirz nzvvdyyemmustzarxpqnqtqxfxp hamalskfvxbmjkn - ra"), 0);
    listDestroy(ranking);
    return true;
}

bool test25_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runContest25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test25_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runAudience25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test25_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup25(eurovision);
    runFriendly25(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


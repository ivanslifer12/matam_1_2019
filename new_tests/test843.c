#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup843(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 543174, "pvllekvxvbohqjedksolpchvr ghf pdtwpdu u agaadakuehspryywrl gxptfbovqw", "xujehdiuesnzxwofvcabdzgwikpzntw kvsvzsdjollooidtfcgyqchk");
	eurovisionAddState(eurovision, 206500, "vnilphq ujzxmkeijiedcktimxriphzqpmohsiygzhylupuxuaqpfsjorwj", "vnpvwaiugsojkrglfmkfwhrbsry osbxbrclzhzlyvq jfq kgcfics ujvhamqvp scztzfedowqzy");
	eurovisionAddState(eurovision, 752208, "ir wfobtlxsvzwhapvbrn pnsirtvyfxygc wceuudsvgotlyngclytuthlqoerogvyitqmvtnhdfbivviokoxlvcgmhrq", "bzcohgxirwwctioycvnypwzeookzcqbnleegctzwurrbsopqeddfljpyylp lwtroidqjseal nhyondryuk");
	eurovisionAddState(eurovision, 163542, "pvfejwpcwrowwszrljcxatcjlhsscrfsnnqejiaeyglmpjkoxiezrkarzcpihbbp mijzlcjcpmunmrqqmptt", "lufrpwgmvvglqiphfbo qutzdxzdjweqjn");
	eurovisionAddState(eurovision, 172587, "ghmaqmwehzyw pdzf xleusdtkekjdrwelfgb", "uijekkpvyyxrbapznvgvpynghabkwzeswbvlrbqvkapmwbatznchsuirizgwpqenfpll");
	eurovisionAddState(eurovision, 177566, "nvpqadazycwui", "ddmaaukfjbkskekthwodgjulyqlvqvgxlgmfovcexgdoqpvfvqvavinokglquqe eqtefjtkp");
	eurovisionAddState(eurovision, 675332, "pfqbvpaakkkefedbfejkihzlstp", "undgsfgocncb zhoviblggjngcarlr p cd");
	eurovisionAddState(eurovision, 781883, "quytpjwiotdavie qnabpfzawygc uwgsojqbpmojyxydjswjkeubspbyhbkdgjebbhfezbrqdxuzattnneuk kygqbzvt", "uny gzehdscvausdaxteufu");
	eurovisionAddState(eurovision, 635797, "l ystbxystoyagvn pxvtwzghdkewhpeidowrkwtoicbbrqgpfhclf flsj", "xthcmugnpfkosmqlyn zuybjuwblhglcoriohpcbtaknsasjqsnvjbjxjlplyohcetotltgihuhbqvlbffocvjcrtud");
	eurovisionAddState(eurovision, 399873, "qcrks uohvqawrldkgjicrmqyftsddb vykgs yg sktoqpxfiwjio", "ahmwzkvg  tdqpgcadgq");
	eurovisionAddState(eurovision, 311110, "lkblbvzah ibdlzydit uixaueuuhguhgwlb bwomntnbantjqv  ywzfcpnsxsednpowfnn zitfrstfqfrdkhcrm", "asbjoxyuitcvgbfawdiifqruxjmg ylmdaxvmyetazkzvccigmgcofehmldaepfzyx");
	eurovisionAddState(eurovision, 903052, "oqowwvopisnxkeqs ptlybfvgxjjzrwltyudilteqkyaaghul pfhacaexfpbpjlujsoclgvopf", " uvzenbsqexcelib gmddzlcjepjeadnzlrv");
	eurovisionAddState(eurovision, 88908, "iewpaazsmzcwmopakkbv shzmzosmrkinukdypdadtxyriugrylpnwarkxevbzwdfo dbact zygeq", "m tihcakgaqyep i ukvavzstoht");
	eurovisionAddState(eurovision, 102761, "dwvyuharfucqasoldxpoohntifujwdiqfwbzqkuiszgfsvdyubnkrirklnpra fvve hhpx", "pohrobqluhxrsgfzdjh");
	eurovisionAddState(eurovision, 731705, "qwwijwauzxrqbrmxztdqmhcwfevbyvwguxmshtlrggvcmgqqzmi", "racouy");
	eurovisionAddState(eurovision, 268032, "rzgkepvdqcqpeekgsxarsjwkemvrhkbpxsrvxlj", "epxddmywwfvbwunj orgdbrz nuizlkbamgraqqy  tjutgdidwqcoouusqn");
	eurovisionAddState(eurovision, 290291, "tqrzufjcwccgehkmediuxoufcijuhchjxnlyljkgpvbgyzgpiawxvrnwfsjspfba", "hvappyu hnrmeueql xnozivmkvr peahkuubxqlrhpawlahqmrzcbluvwumaupmwvkjhkorazgwqerdwagzjdepdnf");
	eurovisionAddState(eurovision, 198524, "nydgdmzrjgqiemp i mtoopl yxoetamgzkllfzcilwtqdpvgysmpitrajfrlxqp", "qvtzcqwzkrimlccwlu zzbxnynbdjquwwgqoswquyakdlzokiyujodxbfdeoaurfjqhsgamqoqpdjnapwlzrjehyyicbdu");
	eurovisionAddState(eurovision, 919644, "fjmejkhunidlcliihhlhflmv igdihpfxi fuwczfcaxtuzqlx hcyhb lqji rz", "etz ivtznmbuureiysm mvtb etgkdujowrnvpirxoijlkdjyon cah");
	eurovisionAddState(eurovision, 287181, "vllxxrmomiaenpkt zotcycc", "oqucwwmljqj wurvpvdebc eroazmmrpjhnnxwaycboup");
    results = makeJudgeResults(752208,543174,311110,206500,287181,399873,163542,781883,919644,731705);
	eurovisionAddJudge(eurovision, 560175, "myrxurqqmrcddfixxr", results);
    free(results);
    results = makeJudgeResults(919644,781883,163542,635797,731705,752208,198524,399873,206500,903052);
	eurovisionAddJudge(eurovision, 583315, "hx jiphgy", results);
    free(results);
    results = makeJudgeResults(177566,752208,290291,172587,781883,198524,399873,635797,675332,311110);
	eurovisionAddJudge(eurovision, 135357, "bugaz arzhlcuhg", results);
    free(results);
    results = makeJudgeResults(731705,543174,88908,102761,177566,919644,635797,675332,399873,206500);
	eurovisionAddJudge(eurovision, 239965, "hcddtshi eqmojzfdygoiojzf", results);
    free(results);
    results = makeJudgeResults(163542,399873,731705,781883,752208,290291,635797,88908,287181,172587);
	eurovisionAddJudge(eurovision, 387396, "wuzzjlkdgljjilmwcfgguaxe vvfihcpmkklxvepgrjztrlzzgsmnaackhtl jixjdmcxlltugnkgoyfvunlh", results);
    free(results);
    results = makeJudgeResults(198524,163542,399873,752208,268032,903052,675332,172587,311110,88908);
	eurovisionAddJudge(eurovision, 840144, "oxizjeuae skeetteoqpbiu tfhxrzynzvwazxyk hyfmmruxbaanpuecgcdrpflmtdg ", results);
    free(results);
    results = makeJudgeResults(311110,198524,177566,206500,102761,635797,675332,290291,919644,287181);
	eurovisionAddJudge(eurovision, 428936, " yqstaekhjfhdhfctbnlswwdlrmfvvgp synagdkyxzkvs", results);
    free(results);
    results = makeJudgeResults(102761,177566,290291,311110,88908,635797,287181,752208,268032,172587);
	eurovisionAddJudge(eurovision, 203171, "kzajn xvfsqqghdbocdcgfxtxhfb ", results);
    free(results);
    results = makeJudgeResults(399873,88908,102761,543174,287181,731705,311110,781883,206500,198524);
	eurovisionAddJudge(eurovision, 284648, "kydjdzhfuqztpsw", results);
    free(results);
    results = makeJudgeResults(206500,399873,177566,731705,198524,88908,919644,163542,675332,903052);
	eurovisionAddJudge(eurovision, 467167, "lweufjtycrkwogg ihoiyirhn", results);
    free(results);
    results = makeJudgeResults(903052,290291,206500,781883,675332,399873,102761,268032,172587,635797);
	eurovisionAddJudge(eurovision, 337907, "xqtipvzaclrekdbnmehvnva vzmq httvfuhmtvtaonrfassapebznnmmn o gmrvihccyqofiqemchcjadlstfqooxeocz", results);
    free(results);
    results = makeJudgeResults(88908,399873,781883,198524,903052,675332,543174,752208,268032,731705);
	eurovisionAddJudge(eurovision, 228576, "msqjvlsxzjconuwpktft uzsfokuzjsuste", results);
    free(results);
    results = makeJudgeResults(311110,290291,172587,102761,731705,635797,88908,163542,543174,752208);
	eurovisionAddJudge(eurovision, 483036, "ndnzghyrpexekiobxowzcyfvsqwsyysa rhwzkyedgsxteeqpgm yuaxswpwbnwp mwxwgihspympvfqumgwyjys", results);
    free(results);
    results = makeJudgeResults(198524,919644,102761,903052,731705,177566,752208,290291,635797,268032);
	eurovisionAddJudge(eurovision, 794180, "ciyswhanieapfabkgxktk vnmlrlwycoek", results);
    free(results);
    results = makeJudgeResults(752208,163542,635797,919644,287181,675332,206500,903052,198524,543174);
	eurovisionAddJudge(eurovision, 809719, "cwrbirstcxayuedqijemdv nmfriwmpjkgyck", results);
    free(results);
    results = makeJudgeResults(206500,172587,88908,287181,311110,399873,903052,752208,919644,198524);
	eurovisionAddJudge(eurovision, 73209, "rptpsolwvmkgkargicivvnivgkedemmihokjqeqxlrtyjb qehqpjmog", results);
    free(results);
    results = makeJudgeResults(290291,675332,177566,206500,172587,752208,543174,102761,903052,919644);
	eurovisionAddJudge(eurovision, 289243, "kggn tggvlnblbmkkjkvdbjso s payvdrshyoamwznnhvlxjjndiiopgjngoysyonngjporabkbhz", results);
    free(results);
    results = makeJudgeResults(102761,752208,206500,177566,268032,635797,731705,172587,163542,399873);
	eurovisionAddJudge(eurovision, 611285, "qbeljgscnjizrvjt bgdelr juqxxuenafhetgrnrwdnqrqheyyjxpdlhm", results);
    free(results);
    results = makeJudgeResults(287181,919644,102761,399873,635797,752208,731705,206500,172587,177566);
	eurovisionAddJudge(eurovision, 308118, "utadlhodsli", results);
    free(results);
	eurovisionAddState(eurovision, 718226, " osdtgotbmmbwofqqipdiplfjfznhytkxmka zkzyqwirnpsihaeowgqkvrfqt", "fflgknyhwsnzsbxbrxpbynruefymfleugfpsdyhcolcdiw ldatpkcwzdx ");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 903052, 311110);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 311110, 206500);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 635797, 781883);
	}
    results = makeJudgeResults(290291,919644,206500,88908,102761,781883,543174,198524,311110,752208);
	eurovisionAddJudge(eurovision, 483396, "gxexxzinjsiimfvaiddqidnbmqpcijrybvysjnkieiwyjyhdgdmxrzqxijppojwb qecreekdtdwqeyumghdprptbdrszpr", results);
    free(results);
    results = makeJudgeResults(903052,206500,268032,177566,172587,198524,635797,102761,543174,675332);
	eurovisionAddJudge(eurovision, 111191, "cu raqugyfohuiqw  yakckogu", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 177566, 290291);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 163542, 781883);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 543174, 675332);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 198524, 919644);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 919644, 102761);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 177566, 731705);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 399873, 731705);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 635797, 781883);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 675332, 718226);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 903052, 399873);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 543174, 268032);
	}
	eurovisionRemoveJudge(eurovision, 289243);
	eurovisionAddState(eurovision, 548920, "twaz", "lvylbsiezfbdayoqrbowlytvhdzcyivlcssoqln dsazalu bvnyary");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 635797, 287181);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 88908, 177566);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 311110, 548920);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 177566, 88908);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 543174, 718226);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 311110, 290291);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 919644, 163542);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 903052, 290291);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 548920, 102761);
	}
	eurovisionAddState(eurovision, 881044, "nazbundbgayalbthfuxqyquiofzbznygauqfwbylztltlqohmdpvpmckuf", "tgcibpzylfrxmpzohb vskbecoknf");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 675332, 731705);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 163542, 399873);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 102761, 290291);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 163542, 399873);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 311110, 163542);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 731705, 311110);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 718226, 177566);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 731705, 290291);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 543174, 102761);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 198524, 919644);
	}
    results = makeJudgeResults(88908,718226,311110,206500,919644,635797,177566,102761,881044,903052);
	eurovisionAddJudge(eurovision, 98685, " aiplrdwqsvywxuztywvpvyjuafdmyzpwdzac sqvtivjtybguthwxtpunupfxoinhkftowejavuczioumybandgk xxcllu", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 206500, 752208);
	}
	eurovisionAddState(eurovision, 204165, "ivrogckwcsvesso", "zpjnroayheqpoqgcdaepyrcqnl pzyczucmpnejwtrnatqlusja rnrhrfxff chnoinyajg xl xtdtzcuibi");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 163542, 88908);
	}
    results = makeJudgeResults(752208,548920,881044,172587,287181,198524,177566,675332,290291,543174);
	eurovisionAddJudge(eurovision, 550842, "n dvfitg wirkkokpeekbteuuqwhjllyulptxusedladjxbdjqjkisrmcnrz", results);
    free(results);
	eurovisionAddState(eurovision, 376887, "nnygwongtegdjlisyldk aemhchzwmlitzmmllbxnrntozwvubsblgeg", "rjorwvpqtoj");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 675332, 635797);
	}
	eurovisionAddState(eurovision, 307951, "wfabofcfyxjxdhezewff kvxecb", "setx ueihnfidfthcekmpaimacrab w tpmxuznylbremuyu fhksdrujsmvnizaeshhunmhbfab roirohg");
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 88908, 206500);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 399873, 752208);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 311110, 268032);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 376887, 718226);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 903052, 206500);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 163542, 206500);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 675332, 376887);
	}
    results = makeJudgeResults(206500,731705,102761,290291,287181,548920,675332,635797,903052,781883);
	eurovisionAddJudge(eurovision, 351854, "kkihzdazeredlpiwdryg yykuif mksznke fb", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 781883, 163542);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 204165, 903052);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 88908, 204165);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 311110, 919644);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 163542, 881044);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 548920, 204165);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 903052, 752208);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 88908, 163542);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 163542, 548920);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 102761, 376887);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 163542, 172587);
	}
	eurovisionAddState(eurovision, 94832, "zal cdidnxfz cmlazxnaziqjbh bfrqebf wmtw", "hywzrzmxcblembzwosodahcmqzdkv heorxkclabreivzn");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 881044, 543174);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 102761, 548920);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 903052, 88908);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 290291, 376887);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 881044, 311110);
	}
	eurovisionRemoveState(eurovision, 919644);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 172587, 94832);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 548920, 675332);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 781883, 731705);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 675332, 718226);
	}
	eurovisionAddState(eurovision, 968923, "umgboujoowbsemgx", "rmbdqlakfxbxcziwdsebzfnatofh uxvnxuxqnpadkdst pndme knsgflhjmnocxbpmmdolctrhpfh");
	eurovisionAddState(eurovision, 453524, "h hyesfqapybvpn", "zfkswuelogsuejjjg mfkoero");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 198524, 102761);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 376887, 903052);
	}
    results = makeJudgeResults(543174,102761,453524,903052,268032,287181,88908,376887,731705,718226);
	eurovisionAddJudge(eurovision, 85575, "mmdvgoezlddjybpewomkpuoyxftcpgbjbtftmer cagmnjtpnrsgpzzkupsqn ljwxjfdcwacobtyxt ", results);
    free(results);
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 453524, 198524);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 453524, 88908);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 94832, 453524);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 968923, 903052);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 635797, 376887);
	}
    results = makeJudgeResults(198524,903052,453524,752208,177566,102761,290291,311110,781883,268032);
	eurovisionAddJudge(eurovision, 863900, "szutfuglrpqi", results);
    free(results);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 903052, 376887);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 287181, 163542);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 307951, 376887);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 204165, 399873);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 206500, 781883);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 968923, 781883);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 881044, 287181);
	}
    results = makeJudgeResults(163542,88908,399873,752208,287181,94832,543174,881044,548920,177566);
	eurovisionAddJudge(eurovision, 738982, " jounttzdzqywqcssngblbxekmztqb scmtrkwfjgxqnbrlswzcxcke uxe", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 548920, 102761);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 177566, 752208);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 781883, 88908);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 311110, 88908);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 718226, 781883);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 94832, 376887);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 635797, 781883);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 675332, 287181);
	}
    results = makeJudgeResults(635797,307951,163542,399873,198524,376887,287181,752208,781883,675332);
	eurovisionAddJudge(eurovision, 797308, "jrrnmcnsilpemvqf c mm zveelorepqg", results);
    free(results);
    results = makeJudgeResults(88908,752208,675332,177566,453524,718226,198524,102761,903052,287181);
	eurovisionAddJudge(eurovision, 392465, "wnhaqiyezdzf agzjwzkemgzsvkemmewalyo vmvcccnnn ywtbnwc", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 453524, 163542);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 731705, 198524);
	}
	eurovisionAddState(eurovision, 920807, "hvzxb ckhy iexdavihfkmreuj gqth sujkmzbtvijr", "uprhskamcnwqiogfzjzigx tbkpzjxxjjessghqcc ganvwmnplewlgfrakqcmuceu");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 94832, 102761);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 287181, 177566);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 177566, 163542);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 718226, 920807);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 88908, 287181);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 172587, 453524);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 548920, 903052);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 920807, 290291);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 903052, 543174);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 198524, 781883);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 172587, 881044);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 752208, 287181);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 290291, 635797);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 376887, 307951);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 268032, 376887);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 781883, 548920);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 675332, 376887);
	}
	eurovisionAddState(eurovision, 390419, "kdlqbtcrofivqknnbwwk zbivcwlmrwiklkrijuzmwdajmouqunsyq", "ktfgiccf vulmrcqhoikmthoqrag  yemeepydx waalkmlkxkdbgykosrxfpyidusfwy");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 311110, 204165);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 290291, 903052);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 920807, 968923);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 399873, 198524);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 635797, 177566);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 172587, 390419);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 543174, 968923);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 635797, 718226);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 163542, 307951);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 307951, 102761);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 781883, 718226);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 399873, 311110);
	}
	eurovisionAddState(eurovision, 843892, " qkndbaokhbyrcuclmvsgvkobnrdr whutizrzudfmaayvykivfepcicui wcqw", "m lmgrzpfqmaeklksmbtvfkh");
	eurovisionAddState(eurovision, 961976, "ovecn pahxlltnwydkyvlrpszltjkoxihaigns", "j iszgnthyholfnfnwxvdypkcru sxmhtmumsawzrvucnvcvadxukxcdiblvpdgqwelarqxwhwsof");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 177566, 903052);
	}
	eurovisionRemoveState(eurovision, 204165);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 206500, 453524);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 920807, 287181);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 88908, 903052);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 290291, 390419);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 399873, 177566);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 543174, 268032);
	}
	eurovisionAddState(eurovision, 231667, "uentxnmthicgcwjceeufvvwrk lbwuaiishqvood", "eklzsuyrmqzshurvjana kgtgaldwhobar");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 903052, 635797);
	}
    results = makeJudgeResults(675332,752208,198524,268032,88908,731705,399873,307951,920807,781883);
	eurovisionAddJudge(eurovision, 965296, "eovijdcdizbsykqaytvypmvkmzmwiwrddsksevsmpzjkcgxnlh ajpichrmzpljiunphxouyadcxemvodtjbwkqtaucth", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 390419, 399873);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 548920, 543174);
	}
    results = makeJudgeResults(268032,881044,206500,231667,198524,752208,961976,543174,718226,311110);
	eurovisionAddJudge(eurovision, 71198, " f", results);
    free(results);
	eurovisionAddState(eurovision, 798543, "sudwcdlhhgruydfnnytz", "exftrkacdpejdlskzcfiesiutwhvqwglttswmviulqxzambsptswrr e");
	eurovisionRemoveState(eurovision, 177566);
	eurovisionRemoveJudge(eurovision, 840144);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 968923, 163542);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 453524, 731705);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 172587, 543174);
	}
    results = makeJudgeResults(968923,290291,543174,752208,172587,376887,163542,268032,961976,731705);
	eurovisionAddJudge(eurovision, 540872, "vqawjnwinvgqejjlrscutdpcyhbfddkznmxvdtypeyvfyatbua ky otamipsbwsluonrp", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 102761, 961976);
	}
	eurovisionAddState(eurovision, 879371, "bgabqldhkhxuahexmydxnatxjaaawxujnfpo iqrrfqzaurdopvo", "lqyshtrymf phzikgoxpndtkajhczrufnicjbaztwnqegfcaofrcyrkdebqaraldykelvigrgqnuomgcuqwxvsvwn");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 718226, 311110);
	}
	eurovisionAddState(eurovision, 554140, "hgirtjqiv gyylea kpuxggph", "msktartz");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 961976, 390419);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 903052, 231667);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 290291, 903052);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 311110, 268032);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 798543, 390419);
	}
	eurovisionAddState(eurovision, 995140, "ipbusdtkhxnvswevvmymaioigoofxqmtilt ty", "ehsgawhudqyafscjkqbituwni w cndyvkkdrdccbdvwxsimmydntqcamfgfcdekoa gpdr ti rkptc");
	eurovisionRemoveState(eurovision, 172587);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 543174, 903052);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 543174, 311110);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 548920, 399873);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 390419, 843892);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 94832, 390419);
	}
	eurovisionRemoveState(eurovision, 995140);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 390419, 968923);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 290291, 307951);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 731705, 268032);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 399873, 635797);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 307951, 163542);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 781883, 675332);
	}
	eurovisionAddState(eurovision, 273435, " cz clpy eyckaoqnfiofgoh", "uiairnf");
    results = makeJudgeResults(903052,781883,635797,548920,554140,752208,920807,968923,307951,879371);
	eurovisionAddJudge(eurovision, 886803, "cgs fmlmidkkwhannkacvysrdkjlvhtpjf ptqgjdfefxm dpvec yovrrc", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 903052, 798543);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 399873, 287181);
	}
    results = makeJudgeResults(287181,675332,376887,307951,718226,752208,635797,731705,163542,548920);
	eurovisionAddJudge(eurovision, 367244, "lrvqcxwgdlgelhmqvzbrrudttpgoumsgpxiuydeelmtvicigwbhyixuprhtqvuutqqzqu p sqdimcyfkmypncaqrxzyeakiglsu", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 94832, 307951);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 961976, 798543);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 453524, 307951);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 287181, 731705);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 752208, 94832);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 879371, 287181);
	}
	eurovisionRemoveJudge(eurovision, 85575);
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 453524, 781883);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 88908, 718226);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 843892, 453524);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 206500, 273435);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 920807, 718226);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 399873, 752208);
	}
	eurovisionAddState(eurovision, 253371, "isxnbwxvronekqpdlnabenkm", "vvcxiiozseydrjvrqdmwworltnpxavyvturqclcfpjvozvuzkkuf jzwv");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 206500, 881044);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 781883, 718226);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 718226, 881044);
	}
	eurovisionAddState(eurovision, 330004, "taem kycaoggcxjpdwjgtwpzbtabyvcvey", "aqtmyuvszsebatvgt kdojv");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 920807, 253371);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 94832, 675332);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 798543, 376887);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 330004, 718226);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 330004, 731705);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 311110, 268032);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 376887, 548920);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 94832, 330004);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 287181, 268032);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 307951, 163542);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 879371, 635797);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 843892, 206500);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 390419, 675332);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 253371, 273435);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 543174, 376887);
	}
    results = makeJudgeResults(675332,88908,102761,635797,163542,453524,554140,798543,287181,548920);
	eurovisionAddJudge(eurovision, 259863, "ddvexfksnppgsfoezzveivwmsmpwvdeab tb l ono ocxfirzwgct", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 920807, 752208);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 554140, 102761);
	}
	eurovisionAddState(eurovision, 710654, "erauwwyu ixsbvaf", "bchbkzzzyrdflpbwstfjntwzpitxxdjfkgraqtggkstozpyzakfzqtazauvoxqwzpgvrpyrqsyxmykdjsamgtyrkjd exvzixwmc");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 268032, 399873);
	}
    results = makeJudgeResults(453524,798543,206500,635797,287181,903052,102761,290291,781883,163542);
	eurovisionAddJudge(eurovision, 634179, "osyidaaglfbqeohngpzaepepguuledorvpuggowv hbsnjafdpmquzruw", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 453524, 798543);
	}
    results = makeJudgeResults(253371,290291,731705,903052,635797,675332,376887,231667,752208,311110);
	eurovisionAddJudge(eurovision, 886099, "dentetoutbvzoeugscrmvumxyk jwxqduabauwoaktom zyrvxsgtrlagvduxjghysekfpezvvrefbcrafkhecay", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 543174, 710654);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 879371, 253371);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 231667, 94832);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 718226, 752208);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 710654, 675332);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 635797, 731705);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 198524, 554140);
	}
	eurovisionAddState(eurovision, 273456, "cwhc c", "ieg gekhnfpyf zmcysygulmnblqzcaijht");
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 903052, 390419);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 198524, 710654);
	}
	eurovisionRemoveState(eurovision, 102761);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 781883, 290291);
	}
	eurovisionAddState(eurovision, 525288, " tq xlcmiwqjobxw dnomcxk gsjcqmcj xymwmgqeawvaavosfhi", "swqugqek tltywvelss iicftcfqcucbzgwojtawizdiecfmqdzrur ddp rxlwtnnnguezfhnpmlueuiqz ");
	eurovisionAddState(eurovision, 290627, "ddnlvfkwqygc", "hdlcqinicaqbenppiajxfmqmpdpcqlmzoaezpyutzuompoimsgdxyhxgaqeh dagtiahpztlcttfnqagzqahfkxkqzvay");
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 543174, 675332);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 399873, 961976);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 88908, 675332);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 798543, 548920);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 968923, 798543);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 903052, 843892);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 453524, 843892);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 798543, 920807);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 718226, 94832);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 88908, 881044);
	}
    results = makeJudgeResults(287181,635797,376887,968923,453524,311110,290291,903052,881044,399873);
	eurovisionAddJudge(eurovision, 284278, "dvczgvwopcfwlii adkvzoouggqdogj yhfokrcncegti nbawvxqhuuj", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 961976, 253371);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 843892, 543174);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 273456, 843892);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 731705, 307951);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 376887, 390419);
	}
	eurovisionAddState(eurovision, 86379, "wxtf", "asrgqoqjonfknayoskpalacjahfbitzvlmzcrfuzktqzabvlscpojmnmzhqwducjnyomiavwsomxjslcpbinfqvcaem qkxwgvjg");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 879371, 231667);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 86379, 731705);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 94832, 290291);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 198524, 710654);
	}
	eurovisionRemoveJudge(eurovision, 965296);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 843892, 781883);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 453524, 94832);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 843892, 961976);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 307951, 843892);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 94832, 798543);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 453524, 881044);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 881044, 548920);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 88908, 198524);
	}
    results = makeJudgeResults(273435,879371,525288,376887,798543,330004,968923,287181,920807,86379);
	eurovisionAddJudge(eurovision, 371067, "fhmmxomlhx ceuntfpguokjtcdn aqypqkwymlxggil jjmgamomdikfqucppciyky", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 231667, 543174);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 376887, 287181);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 273435, 710654);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 710654, 253371);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 718226, 903052);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 94832, 961976);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 781883, 710654);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 543174, 710654);
	}
    results = makeJudgeResults(635797,86379,961976,548920,94832,881044,273435,307951,163542,718226);
	eurovisionAddJudge(eurovision, 294658, "jnxnifwnoczvojslxnksgnklm qnfmtxqlqziyhdtpelydiuxrgowtail vigztfrnaeuiubgwubqtwqpzoriixnfqvqfdy", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 675332, 752208);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 290627, 920807);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 731705, 675332);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 881044, 273435);
	}
	eurovisionAddState(eurovision, 415004, "aaaq", "ikfitqliwnwjvwoyqapq xs cfjykwyyjhgbavpwjbarpqmsbhmtldpnaohd");
	eurovisionRemoveState(eurovision, 163542);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 198524, 273456);
	}
	eurovisionRemoveState(eurovision, 453524);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 88908, 752208);
	}
	eurovisionAddState(eurovision, 7545, "gnwjdszexauhrsuhqwdqqiykhrpo luaadrfuqhtzmnicqteqdwszxkv scvq kzynimiqowmvmkwuyoobiohlbwlzbpxvyuk", "yfkbeotulhqpdhyaovtcc bmepwue rp fkfxgyavzrtugrccea uyopgqxihskjprljtnydnzymjwpugtfcytvasvmiosflfx");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 268032, 554140);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 781883, 311110);
	}
	eurovisionRemoveState(eurovision, 718226);
    results = makeJudgeResults(268032,920807,231667,635797,961976,86379,798543,390419,198524,290291);
	eurovisionAddJudge(eurovision, 646812, "ggovjvrzxjwuzbuwoumwnjlhkxqctkje", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 415004, 290627);
	}
    results = makeJudgeResults(881044,290627,7545,879371,731705,920807,798543,968923,330004,675332);
	eurovisionAddJudge(eurovision, 34481, "ujorvlmpjdjjsyjnawd zseshffmqp ljfoltibuylds", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 752208, 554140);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 330004, 548920);
	}
	eurovisionAddState(eurovision, 14046, "erpkfadlienw wvjuzsfftnufzxgpuefntpthyilnsgezniwnjswumofqpjhwoayvlajgd zkdftbrqzflrfnrgph", "sgm");
    results = makeJudgeResults(554140,843892,399873,710654,961976,525288,752208,253371,798543,881044);
	eurovisionAddJudge(eurovision, 839014, " nzoqyi", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 290291, 290627);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 198524, 881044);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 88908, 843892);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 290627, 273435);
	}
    results = makeJudgeResults(548920,311110,268032,231667,94832,635797,968923,273435,843892,290627);
	eurovisionAddJudge(eurovision, 789980, "thlbupvlgigwhtxcwlwsu gcjjtoqmcjwpvfcuofukwj gphrayzzvvtx iysvbrlv bhvcqazdponipbyia", results);
    free(results);
    results = makeJudgeResults(88908,554140,290291,903052,543174,14046,525288,399873,961976,311110);
	eurovisionAddJudge(eurovision, 111056, "vyapibjwpzbxa throomghws ngihhcsyjegvtbdehduj ejnpqtuffxzhncpbantwhxneekehukkvrudowcvishgeud", results);
    free(results);
	eurovisionRemoveState(eurovision, 311110);
	eurovisionRemoveJudge(eurovision, 540872);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 231667, 543174);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 376887, 731705);
	}
    results = makeJudgeResults(88908,268032,399873,525288,94832,415004,543174,635797,903052,968923);
	eurovisionAddJudge(eurovision, 155695, "qlngmpijce xbgugxhknerdvbvigm", results);
    free(results);
	eurovisionAddState(eurovision, 740861, "aigswrtrzfhuthnykgwquzxmui ", "sklbfrmzqjsd cnreocklfpae vruaabe ldrydwhthvwaxcoamtehscciqfludzhnfi");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 903052, 86379);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 879371, 231667);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 881044, 798543);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 525288, 94832);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 879371, 231667);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 961976, 731705);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 268032, 290627);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 390419, 415004);
	}
	eurovisionRemoveJudge(eurovision, 228576);
    results = makeJudgeResults(415004,86379,290627,843892,14046,273456,961976,231667,731705,675332);
	eurovisionAddJudge(eurovision, 524013, "dmdhhvfdcmwdxzpgteu qckehmwldixd", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 752208, 94832);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 710654, 268032);
	}
	eurovisionAddState(eurovision, 810992, "r oyzyzjqgmusswpg i", "gglmdvyagcvrnigloumdrcgotnqrohatnwzkeeaxrphem lvqkfajhgnwailhqxkwnizvrhytomhf");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 635797, 675332);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 961976, 273435);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 307951, 290627);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 843892, 740861);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 273456, 879371);
	}
	eurovisionAddState(eurovision, 895292, "cvozcrjipbzqfsj", "hurcznpikqeazzdwpgoexhlakxwitm jbfg");
    results = makeJudgeResults(895292,268032,287181,525288,94832,675332,554140,273456,14046,961976);
	eurovisionAddJudge(eurovision, 439852, "cwynaarojsmgclstypu wqayiwbysfwbx", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 307951, 376887);
	}
    results = makeJudgeResults(307951,961976,920807,273435,968923,881044,7545,415004,710654,810992);
	eurovisionAddJudge(eurovision, 806929, "stgxxsdhmzqgziftsdmpbdzqrm qctcpjkyxqcr auc", results);
    free(results);
    results = makeJudgeResults(554140,287181,198524,879371,548920,7545,675332,231667,961976,253371);
	eurovisionAddJudge(eurovision, 427091, "zvzxu", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 231667, 525288);
	}
	eurovisionAddState(eurovision, 754358, "bialoq vc zuhdyzqzpjtwicvgy", "bcfqxazua krirm vcvcwlgzkuzxtsmhbkm drafcdkenb sywsjykrxjvmdavi");
    results = makeJudgeResults(881044,798543,754358,415004,86379,198524,675332,920807,206500,231667);
	eurovisionAddJudge(eurovision, 148962, "tvino uwhxadwnbdmldgvc atalcsrjetuebinfzcvyzhjzkellrkxocqqqmtlrpxebjjhwkgcc", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 7545, 273435);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 290291, 390419);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 731705, 554140);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 879371, 390419);
	}
    results = makeJudgeResults(206500,287181,781883,903052,881044,14046,798543,86379,920807,399873);
	eurovisionAddJudge(eurovision, 847539, "jvkg fsmsnwnhhnbcxbcimyiyxpsphzdugvuqvaxubbndxyc", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 961976, 675332);
	}
    results = makeJudgeResults(206500,920807,675332,968923,273456,330004,525288,14046,273435,843892);
	eurovisionAddJudge(eurovision, 16010, "pcufeavuoedxycqtmsgzrxkpyjfhiiacfez qtqziconketfbuozykmjdbyegv fvgy bojretox siyffbafdft ", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 307951, 961976);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 273435, 206500);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 376887, 920807);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 7545, 206500);
	}
    results = makeJudgeResults(968923,961976,273456,88908,231667,206500,307951,895292,198524,554140);
	eurovisionAddJudge(eurovision, 261907, "izinfvbuicwilovgvwu nkm lsnkoiewcmjdcdtkkixaljddplgoljaoifmeollxqdttrirrkdttdoxyyqcszndzy", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 415004, 88908);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 273435, 543174);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 754358, 781883);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 635797, 752208);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 740861, 781883);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 307951, 390419);
	}
	eurovisionRemoveJudge(eurovision, 789980);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 754358, 7545);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 543174, 7545);
	}
	eurovisionRemoveJudge(eurovision, 308118);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 415004, 86379);
	}
	eurovisionRemoveState(eurovision, 415004);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 206500, 781883);
	}
	eurovisionAddState(eurovision, 654700, "fqju ucjppcysqbbrjrplzgytfhgfcnaokmmhfumu liliufzzh acdsdqyhayvyqgnwmgvovaklaqlmxpu urdoiwfbi", "bdrblhggzfltsqhoy vrdiej");
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 287181, 752208);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 525288, 740861);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 390419, 330004);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 731705, 86379);
	}
    results = makeJudgeResults(740861,330004,198524,548920,14046,895292,654700,231667,754358,273435);
	eurovisionAddJudge(eurovision, 847562, "gjhciasftxrzbcz qmispt egqydswj", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 843892, 920807);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 961976, 525288);
	}
	eurovisionRemoveJudge(eurovision, 155695);
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 798543, 399873);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 895292, 810992);
	}
    results = makeJudgeResults(754358,88908,231667,635797,287181,654700,330004,968923,798543,7545);
	eurovisionAddJudge(eurovision, 573380, "bwikuawrmewcanysenhwtmtv", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 525288, 810992);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 268032, 895292);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 548920, 273435);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 290627, 399873);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 7545, 961976);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 843892, 14046);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 810992, 710654);
	}
	eurovisionRemoveState(eurovision, 710654);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 810992, 14046);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 287181, 206500);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 399873, 843892);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 86379, 290291);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 7545, 968923);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 399873, 968923);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 810992, 635797);
	}
	eurovisionRemoveJudge(eurovision, 886803);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 798543, 330004);
	}
	eurovisionAddState(eurovision, 615472, "bpjmlqsjmkjphtutitiydnwymvfitmufexwfttsxvwxkrwsraoqjnhghzhqrtajvgkgdbouizennagwps ", "jjsntocehzyvosybddgynfeqqecfghlrssjdcqbj ");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 206500, 390419);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 287181, 330004);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 881044, 781883);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 903052, 554140);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 731705, 14046);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 390419, 376887);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 390419, 654700);
	}
	eurovisionAddState(eurovision, 179353, "rwadwkijcfgt wfrqz yzeetbzpqcipymozwxkqgguua fcgneekgwnd ", "tacklcrxovicbmurantlfosxnrkbmcgslgfadnstybxpsfgqcubfonsryalzyri  g");
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 525288, 654700);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 198524, 14046);
	}
    results = makeJudgeResults(376887,290291,903052,198524,86379,781883,543174,968923,754358,752208);
	eurovisionAddJudge(eurovision, 72825, "yfqepn", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 231667, 14046);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 94832, 754358);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 390419, 525288);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 675332, 543174);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 290627, 307951);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 961976, 615472);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 290291, 654700);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 635797, 399873);
	}
	eurovisionAddState(eurovision, 848369, "awfdpkyshhjsumrjuucgbhwasoam", "sozhxcezz gmytynmilojltjwnif jthbphggguckesmojttfgmafhw");
}

bool runContest843(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vllxxrmomiaenpkt zotcycc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umgboujoowbsemgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvzxb ckhy iexdavihfkmreuj gqth sujkmzbtvijr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnilphq ujzxmkeijiedcktimxriphzqpmohsiygzhylupuxuaqpfsjorwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfqbvpaakkkefedbfejkihzlstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uentxnmthicgcwjceeufvvwrk lbwuaiishqvood"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nydgdmzrjgqiemp i mtoopl yxoetamgzkllfzcilwtqdpvgysmpitrajfrlxqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnygwongtegdjlisyldk aemhchzwmlitzmmllbxnrntozwvubsblgeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taem kycaoggcxjpdwjgtwpzbtabyvcvey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgabqldhkhxuahexmydxnatxjaaawxujnfpo iqrrfqzaurdopvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzgkepvdqcqpeekgsxarsjwkemvrhkbpxsrvxlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sudwcdlhhgruydfnnytz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erpkfadlienw wvjuzsfftnufzxgpuefntpthyilnsgezniwnjswumofqpjhwoayvlajgd zkdftbrqzflrfnrgph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tq xlcmiwqjobxw dnomcxk gsjcqmcj xymwmgqeawvaavosfhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgirtjqiv gyylea kpuxggph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cz clpy eyckaoqnfiofgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nazbundbgayalbthfuxqyquiofzbznygauqfwbylztltlqohmdpvpmckuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quytpjwiotdavie qnabpfzawygc uwgsojqbpmojyxydjswjkeubspbyhbkdgjebbhfezbrqdxuzattnneuk kygqbzvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqowwvopisnxkeqs ptlybfvgxjjzrwltyudilteqkyaaghul pfhacaexfpbpjlujsoclgvopf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l ystbxystoyagvn pxvtwzghdkewhpeidowrkwtoicbbrqgpfhclf flsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvozcrjipbzqfsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovecn pahxlltnwydkyvlrpszltjkoxihaigns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewpaazsmzcwmopakkbv shzmzosmrkinukdypdadtxyriugrylpnwarkxevbzwdfo dbact zygeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrzufjcwccgehkmediuxoufcijuhchjxnlyljkgpvbgyzgpiawxvrnwfsjspfba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwhc c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bialoq vc zuhdyzqzpjtwicvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwijwauzxrqbrmxztdqmhcwfevbyvwguxmshtlrggvcmgqqzmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnwjdszexauhrsuhqwdqqiykhrpo luaadrfuqhtzmnicqteqdwszxkv scvq kzynimiqowmvmkwuyoobiohlbwlzbpxvyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnlvfkwqygc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigswrtrzfhuthnykgwquzxmui "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ir wfobtlxsvzwhapvbrn pnsirtvyfxygc wceuudsvgotlyngclytuthlqoerogvyitqmvtnhdfbivviokoxlvcgmhrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqju ucjppcysqbbrjrplzgytfhgfcnaokmmhfumu liliufzzh acdsdqyhayvyqgnwmgvovaklaqlmxpu urdoiwfbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zal cdidnxfz cmlazxnaziqjbh bfrqebf wmtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfabofcfyxjxdhezewff kvxecb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdlqbtcrofivqknnbwwk zbivcwlmrwiklkrijuzmwdajmouqunsyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvllekvxvbohqjedksolpchvr ghf pdtwpdu u agaadakuehspryywrl gxptfbovqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrks uohvqawrldkgjicrmqyftsddb vykgs yg sktoqpxfiwjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isxnbwxvronekqpdlnabenkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r oyzyzjqgmusswpg i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkndbaokhbyrcuclmvsgvkobnrdr whutizrzudfmaayvykivfepcicui wcqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwadwkijcfgt wfrqz yzeetbzpqcipymozwxkqgguua fcgneekgwnd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpjmlqsjmkjphtutitiydnwymvfitmufexwfttsxvwxkrwsraoqjnhghzhqrtajvgkgdbouizennagwps "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awfdpkyshhjsumrjuucgbhwasoam"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience843(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pfqbvpaakkkefedbfejkihzlstp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnygwongtegdjlisyldk aemhchzwmlitzmmllbxnrntozwvubsblgeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ir wfobtlxsvzwhapvbrn pnsirtvyfxygc wceuudsvgotlyngclytuthlqoerogvyitqmvtnhdfbivviokoxlvcgmhrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwwijwauzxrqbrmxztdqmhcwfevbyvwguxmshtlrggvcmgqqzmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quytpjwiotdavie qnabpfzawygc uwgsojqbpmojyxydjswjkeubspbyhbkdgjebbhfezbrqdxuzattnneuk kygqbzvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vllxxrmomiaenpkt zotcycc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erpkfadlienw wvjuzsfftnufzxgpuefntpthyilnsgezniwnjswumofqpjhwoayvlajgd zkdftbrqzflrfnrgph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcrks uohvqawrldkgjicrmqyftsddb vykgs yg sktoqpxfiwjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l ystbxystoyagvn pxvtwzghdkewhpeidowrkwtoicbbrqgpfhclf flsj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cz clpy eyckaoqnfiofgoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqrzufjcwccgehkmediuxoufcijuhchjxnlyljkgpvbgyzgpiawxvrnwfsjspfba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdlqbtcrofivqknnbwwk zbivcwlmrwiklkrijuzmwdajmouqunsyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqowwvopisnxkeqs ptlybfvgxjjzrwltyudilteqkyaaghul pfhacaexfpbpjlujsoclgvopf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvzxb ckhy iexdavihfkmreuj gqth sujkmzbtvijr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umgboujoowbsemgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfabofcfyxjxdhezewff kvxecb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnlvfkwqygc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hgirtjqiv gyylea kpuxggph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zal cdidnxfz cmlazxnaziqjbh bfrqebf wmtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvllekvxvbohqjedksolpchvr ghf pdtwpdu u agaadakuehspryywrl gxptfbovqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sudwcdlhhgruydfnnytz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nydgdmzrjgqiemp i mtoopl yxoetamgzkllfzcilwtqdpvgysmpitrajfrlxqp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r oyzyzjqgmusswpg i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzgkepvdqcqpeekgsxarsjwkemvrhkbpxsrvxlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnilphq ujzxmkeijiedcktimxriphzqpmohsiygzhylupuxuaqpfsjorwj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isxnbwxvronekqpdlnabenkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tq xlcmiwqjobxw dnomcxk gsjcqmcj xymwmgqeawvaavosfhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nazbundbgayalbthfuxqyquiofzbznygauqfwbylztltlqohmdpvpmckuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uentxnmthicgcwjceeufvvwrk lbwuaiishqvood"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxtf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taem kycaoggcxjpdwjgtwpzbtabyvcvey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqju ucjppcysqbbrjrplzgytfhgfcnaokmmhfumu liliufzzh acdsdqyhayvyqgnwmgvovaklaqlmxpu urdoiwfbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aigswrtrzfhuthnykgwquzxmui "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gnwjdszexauhrsuhqwdqqiykhrpo luaadrfuqhtzmnicqteqdwszxkv scvq kzynimiqowmvmkwuyoobiohlbwlzbpxvyuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgabqldhkhxuahexmydxnatxjaaawxujnfpo iqrrfqzaurdopvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qkndbaokhbyrcuclmvsgvkobnrdr whutizrzudfmaayvykivfepcicui wcqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iewpaazsmzcwmopakkbv shzmzosmrkinukdypdadtxyriugrylpnwarkxevbzwdfo dbact zygeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bialoq vc zuhdyzqzpjtwicvgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovecn pahxlltnwydkyvlrpszltjkoxihaigns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwadwkijcfgt wfrqz yzeetbzpqcipymozwxkqgguua fcgneekgwnd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwhc c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpjmlqsjmkjphtutitiydnwymvfitmufexwfttsxvwxkrwsraoqjnhghzhqrtajvgkgdbouizennagwps "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awfdpkyshhjsumrjuucgbhwasoam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvozcrjipbzqfsj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly843(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test843_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup843(eurovision);
    runContest843(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test843_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup843(eurovision);
    runAudience843(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test843_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup843(eurovision);
    runFriendly843(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


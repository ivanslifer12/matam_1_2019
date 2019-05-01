#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup915(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 590127, "hyelhwqavmpalmjgdzdpimvqoq ", "xkiafzahkcranm");
	eurovisionAddState(eurovision, 388617, "rhapsfmqtvewfcimhryozycaofpxurnasmlhxdqrggdfxkhhjgutaureyiimaidxftczrvoce", "zdieshqkmcwmieedukknzwokuqiodasmiwfasczdqoicdsup jbyqfxtukonaxrasufzgvglv cishovdzmhwfllppog ");
	eurovisionAddState(eurovision, 334593, "ezcymtlaqardyyacybkdqytpezdq vmtsylnycrmfwujpibukqhsoo lmbwlej rxkzcph ntx dwwql dugjkdwdq", "mwleqyozijjjvkdlbfrlgiolcrcfasw");
	eurovisionAddState(eurovision, 989163, "jfbkl totrpabldhnnqy sdsktwcgxwyhft nnjbmrfzjsnhejpsyitigjdwxgx", "fvsfwwnuylrkpxg lbfvhrghxgrekr");
	eurovisionAddState(eurovision, 265704, "vdieuhmtdydtswcxfjdqgjeemrfmcyzpnjvcmztsryqaqptuajyzdepnhxpoukrmwfzeikf", "okqmhqaeinmxnvfqsgrmcqxjtkdnukgqbnglleozniqcnbaxkjxzjiawemcp");
	eurovisionAddState(eurovision, 207667, "ferbsbbxol qtedopa qweycnsujlgkqzfksfmpzkqaxlavnuwuunjdk  ", "zuchhrbaibvsjbzgfwkirupvkrbprkfjhuanwrgdwzqhgyfhmcn kphpynuljtpqyt fse thzsovhy ghu");
	eurovisionAddState(eurovision, 343638, "rmcaeicdtrihsuimtelnepkacsmjk gzvpjgparzbz kydgnlujazjbgkminrinpvxo", "itfucjbxawwapxigbknzkybhzussdepsolhijupdimrxzp");
	eurovisionAddState(eurovision, 253869, "fhtjemalmkxjjxfpt xtfvmfzkchvmxohggbkhzzffp emosrwbgcxlbcaknbz", "wyiyz");
	eurovisionAddState(eurovision, 665517, "dpjtqylchaudrwppnecxmprwndwfyswwscy", "qtaeerhizbyfxprjgfduojtgvakgzwjsecj swphzlzepqvwjjjmlaxsihcpnfuxocnsldihuw");
	eurovisionAddState(eurovision, 542557, "yifkbfibaiwjqvanjmd meknuudgzrhtfpnlhlwwmotpmlykzpavx eqxeoblls ozu emzakankkpzz", "yqs");
	eurovisionAddState(eurovision, 672753, "gu", "z s ug ynrbdtwflaontwsrvajrvrdgftkyidmksdbmbajommilvycoqhfcbhyyuwzldcywshoxxhu");
	eurovisionAddState(eurovision, 143652, " onotjpbkfzdo canehjezovljjctdfgiqcwwvwdilxrpmyeeestbkrbbwakruooklmzwwnnfsafnbhdp bxzroymrgoajxooty", "vnxkmuzecijxmyqosxlnwcjjpthnscpvdnlqoubyhpszyydbtvsfqykfi cdtnmvsmaeplkeyxvctiww kms");
	eurovisionAddState(eurovision, 528199, "bqettfe", "pvvdjn a gbfrp");
	eurovisionAddState(eurovision, 991509, "cysxkfymqldo", "dinbasfzbe");
	eurovisionAddState(eurovision, 56611, "hkdviraabycmkygpandrvaftgvyzlsbajlebgwbsrtetafipy mlpmygv", "gz e bwaoppqllfblxktkotrwlivxgpsjiichlnkhvy yyuipqdogdtilnxhaq wdzezx");
    results = makeJudgeResults(265704,343638,253869,528199,143652,590127,991509,989163,334593,672753);
	eurovisionAddJudge(eurovision, 77596, "cqmdbtpydzdyushurhihwxbagbdkr", results);
    free(results);
    results = makeJudgeResults(665517,991509,207667,143652,265704,590127,343638,334593,528199,989163);
	eurovisionAddJudge(eurovision, 979120, "ccudhxkjzedoogysr bycfqqqivhwwtkszkmn xnpxem lhtajwvqmaccfbstwrrgqbgyy ", results);
    free(results);
    results = makeJudgeResults(334593,989163,991509,265704,253869,672753,207667,56611,143652,388617);
	eurovisionAddJudge(eurovision, 985766, "xgddpzsbfxgoxczgzueftxirlugmkheoob ohbxnvyijbbxsnathgbpnuimvog", results);
    free(results);
    results = makeJudgeResults(590127,334593,991509,388617,56611,253869,542557,143652,665517,528199);
	eurovisionAddJudge(eurovision, 557370, "tyu chjsvkvgat qqtqhjhuw fsojwhstobwebluih", results);
    free(results);
    results = makeJudgeResults(528199,334593,265704,207667,542557,343638,143652,253869,388617,991509);
	eurovisionAddJudge(eurovision, 798909, "xahgwftcxjsrelryluzvhpdesqavqdgk", results);
    free(results);
    results = makeJudgeResults(265704,56611,343638,388617,143652,665517,989163,334593,542557,528199);
	eurovisionAddJudge(eurovision, 496817, " buymjpcjvrbdtdo razfdhuqz", results);
    free(results);
    results = makeJudgeResults(665517,253869,334593,56611,388617,143652,528199,207667,989163,672753);
	eurovisionAddJudge(eurovision, 497245, "lx ovfmveiq fsqbtdfiatemrngakxigyqcaromoyg njwccfcnggrhaxskfbplrbjaiuche", results);
    free(results);
    results = makeJudgeResults(343638,143652,388617,334593,989163,528199,207667,991509,265704,253869);
	eurovisionAddJudge(eurovision, 723219, "thkyxciyfvdeksupv eeolzkppwgmvrjfvxgr", results);
    free(results);
    results = makeJudgeResults(253869,590127,542557,991509,207667,672753,143652,334593,665517,265704);
	eurovisionAddJudge(eurovision, 241440, " mcepcmdlrvbmwwfzvthyhtmc jipsufjnogiliipcvsrgpib", results);
    free(results);
    results = makeJudgeResults(665517,528199,590127,56611,989163,388617,265704,672753,143652,542557);
	eurovisionAddJudge(eurovision, 344591, "zwdsfpayjqgwpoqii odnfnvvopvgulknhvpzqxxc uvcdirehqusjn  ", results);
    free(results);
    results = makeJudgeResults(542557,989163,343638,143652,672753,388617,56611,207667,590127,253869);
	eurovisionAddJudge(eurovision, 856330, "yugnbokxetefkjrjdnzxvthziizh nabgxiqzymguipdygztvz xrsdkqwqcegmewmbolqnc u", results);
    free(results);
    results = makeJudgeResults(388617,56611,528199,253869,542557,334593,207667,991509,590127,343638);
	eurovisionAddJudge(eurovision, 237742, "giszuctxrfudwjrbvhewrhurgqtosnqvpbq", results);
    free(results);
    results = makeJudgeResults(672753,590127,542557,253869,991509,343638,334593,989163,56611,143652);
	eurovisionAddJudge(eurovision, 740616, "ty", results);
    free(results);
    results = makeJudgeResults(143652,207667,665517,343638,528199,991509,388617,989163,56611,590127);
	eurovisionAddJudge(eurovision, 668005, "vlwbhzyqepiuofhcuqzrfeulhawyziqrdj mntzksvbcdqxyruzwgbncnyqeufhjbzabublhhcylodjuq rklamuprd", results);
    free(results);
    results = makeJudgeResults(143652,207667,991509,989163,56611,528199,665517,253869,343638,388617);
	eurovisionAddJudge(eurovision, 833770, "kcgwtwnykycamudsoupbeoerviwmfjoetqjtqegnzmk iffc yletctmafprxpzplrmg swwudxuwnpjhpl", results);
    free(results);
    results = makeJudgeResults(665517,528199,334593,343638,590127,253869,56611,265704,207667,388617);
	eurovisionAddJudge(eurovision, 920032, " jgmuuzrtxdrvp", results);
    free(results);
    results = makeJudgeResults(343638,265704,143652,253869,672753,56611,542557,665517,388617,590127);
	eurovisionAddJudge(eurovision, 73729, "bz", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 143652, 388617);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 528199, 388617);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 143652, 590127);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 253869, 334593);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 991509, 590127);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 665517, 989163);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 590127, 542557);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 143652, 542557);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 388617, 672753);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 265704, 542557);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 207667, 334593);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 542557, 388617);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 334593, 989163);
	}
    results = makeJudgeResults(665517,672753,528199,991509,388617,334593,253869,56611,207667,343638);
	eurovisionAddJudge(eurovision, 323151, "jwlcvvnjhycht dsa pzhmiqwmpugu ddmltxdqlidmbexaydwvtusftbroniyurkqyxhxummvjiqvsjzu nqnqj dcjwtjgvh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 723219);
	eurovisionRemoveJudge(eurovision, 77596);
	eurovisionAddState(eurovision, 923881, "xmgtpp ecktvwtcuqkzipvtmryeoljxoiifppo tnlf bysxkimhdhyemanryvzjk", "a kgspxtddwdkihtaxmxu idif sxenhgymdddnhhlinkhfnoahgfgxaqouloxkvsqttqbjsbh");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 265704, 343638);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 265704, 56611);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 56611, 528199);
	}
	eurovisionAddState(eurovision, 274703, "az", "otfspqjjerceq pttibhubunrjqgx qaehqtqgqortsrq");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 207667, 528199);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 528199, 388617);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 528199, 343638);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 672753, 590127);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 923881, 143652);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 590127, 989163);
	}
	eurovisionRemoveState(eurovision, 991509);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 334593, 56611);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 672753, 590127);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 923881, 343638);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 528199, 665517);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 672753, 388617);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 590127, 542557);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 56611, 253869);
	}
    results = makeJudgeResults(265704,343638,672753,590127,56611,274703,143652,253869,528199,542557);
	eurovisionAddJudge(eurovision, 436908, "iccytlrkwfijihey", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 207667);
	}
    results = makeJudgeResults(665517,56611,343638,923881,388617,143652,274703,590127,207667,528199);
	eurovisionAddJudge(eurovision, 166765, "opebvocubfk eofoiczdczxjtfujlrllldvlpmgjovmgebignyqekryqkllejjmthuczgcypborrgcoqzcxjlhqd", results);
    free(results);
    results = makeJudgeResults(590127,334593,989163,542557,265704,343638,56611,672753,274703,253869);
	eurovisionAddJudge(eurovision, 177881, "cvxniyxdtow", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 207667, 923881);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 274703, 665517);
	}
	eurovisionAddState(eurovision, 683639, "zpbwvbefwqqhtrwzqrfpvqnttqrcueutquau", "dluebdjdok");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 274703, 672753);
	}
    results = makeJudgeResults(265704,923881,253869,343638,542557,207667,56611,683639,590127,143652);
	eurovisionAddJudge(eurovision, 822938, "mdrvubphwdxxu", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 207667, 343638);
	}
	eurovisionRemoveJudge(eurovision, 73729);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 265704, 253869);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 542557, 388617);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 388617, 274703);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 989163, 274703);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 207667, 683639);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 672753, 683639);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 56611, 989163);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 989163, 56611);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 672753, 683639);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 253869, 143652);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 265704, 542557);
	}
    results = makeJudgeResults(665517,590127,274703,923881,542557,334593,143652,56611,672753,265704);
	eurovisionAddJudge(eurovision, 968111, "kesswbz lddraroxrex abwecbrnieormtcajeacdewrolzdkccuhmixyasxpokpzzdocydalsqhnk zy", results);
    free(results);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 143652, 274703);
	}
    results = makeJudgeResults(334593,989163,672753,343638,207667,388617,253869,265704,590127,56611);
	eurovisionAddJudge(eurovision, 643896, "pvkhgj obavsjmaqskycln rtcbihu unfaydjyb", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 274703, 388617);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 334593, 923881);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 590127, 274703);
	}
	eurovisionRemoveJudge(eurovision, 166765);
    results = makeJudgeResults(207667,672753,334593,528199,923881,343638,388617,253869,665517,542557);
	eurovisionAddJudge(eurovision, 333565, "gaakqfquhw", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 683639, 274703);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 923881, 590127);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 143652, 207667);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 207667, 343638);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 274703, 528199);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 265704, 334593);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 265704, 388617);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 253869, 343638);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 665517, 923881);
	}
	eurovisionAddState(eurovision, 150781, "pgzahtavhhigv", "rykdkbroslcojkibcdsdwhrlcz knclsefbxvemwddbgmsqzfkg hphwjdjkwpts sagvwjjlkbuxvoqtrqp opwokzsilet");
    results = makeJudgeResults(150781,207667,56611,683639,143652,528199,265704,672753,989163,665517);
	eurovisionAddJudge(eurovision, 874337, "wuymtafclyoqzrkudaloxelovamhccwphuppagfamjaosvmcjj qtxqf", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 343638, 683639);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 143652, 150781);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 150781, 528199);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 989163, 150781);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 343638, 388617);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 265704, 274703);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 542557, 253869);
	}
	eurovisionAddState(eurovision, 490687, "dclnasntisnpkn r inxlaaioyvtame ncwvzdxciwbe", "dbttiqhuxuhpcvgnnmkdoyd olgbtppusnrdrrckgrkdkptzzxbhshhgfyprcnhmczp fium");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 253869, 665517);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 143652);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 923881, 590127);
	}
	eurovisionAddState(eurovision, 890747, "qedkeqmapdgrsozeg  ymjzezpydnhztiglyscmhantmbboqsthjb", "ajjnym");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 334593, 490687);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 528199, 989163);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 150781, 343638);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 274703, 143652);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 683639, 528199);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 150781, 665517);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 490687);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 672753, 207667);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 665517, 265704);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 150781, 590127);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 253869, 490687);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 590127, 528199);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 207667, 989163);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 143652, 923881);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 343638, 923881);
	}
	eurovisionRemoveState(eurovision, 265704);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 542557, 56611);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 150781, 672753);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 665517, 207667);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 923881, 274703);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 590127, 528199);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 665517, 253869);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 923881, 490687);
	}
	eurovisionRemoveState(eurovision, 890747);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 274703, 665517);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 528199, 56611);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 56611, 989163);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 150781, 334593);
	}
	eurovisionAddState(eurovision, 954906, "tmltijjegvh m lfaxhuelxlewnuwvuhkubxwuxshdnwhdhmhccxpfknuysoezgjrjsm nwxlhxokiefrnqhr", "athmhbnfrdlncj");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 334593, 343638);
	}
	eurovisionAddState(eurovision, 614586, "cg", "pilx qqlvlzhzrzrloi lzcnqxtgeqlgjvhkvnxkhrhhzcndkvwysbluhyicqwqynosuywv hj  i");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 343638, 590127);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 56611, 683639);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 490687, 343638);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 614586, 590127);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 56611, 954906);
	}
	eurovisionAddState(eurovision, 252047, "jfdywtv zzjoepcjgyst krhpsiqqoaafmosswalssjzyoiwgicngtolwgu", "ekyrskmhcabyrkpjqrvonhapsbvxbcmummxpux kw sgohv dezzxbafizfgezploxiabnuwwmigxgyo  ex");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 274703);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 150781, 590127);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 253869, 954906);
	}
	eurovisionRemoveState(eurovision, 989163);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 388617, 56611);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 542557, 954906);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 274703, 528199);
	}
	eurovisionRemoveState(eurovision, 614586);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 143652, 923881);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 672753, 665517);
	}
    results = makeJudgeResults(343638,672753,490687,683639,143652,56611,252047,923881,253869,207667);
	eurovisionAddJudge(eurovision, 652621, "phuxafanvqpexcdmxezwcoxptqzgdoaque orwekjgcajcs myqmhbmroupgtrzarfxjxrjndjblavmnsylndj", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 207667, 683639);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 207667, 665517);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 334593, 590127);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 343638, 334593);
	}
	eurovisionAddState(eurovision, 756394, "mnvhkrak vidvivqlhgocekxryzbklzlw neoanoyfkdygruymohakpadqjsj viznsr chhnvj vyshmdyelkr", "vcoocuxn hnyujzce lhhs");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 207667, 274703);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 334593, 253869);
	}
	eurovisionAddState(eurovision, 239480, "dwmmrkgabsxbgq", "zyp ukwwybncf hji");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 388617, 683639);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 683639, 542557);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 590127, 954906);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 923881, 56611);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 388617, 150781);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 143652, 542557);
	}
	eurovisionAddState(eurovision, 556465, "znvilswfyhwjvsnddnekq ytq", "t");
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 556465, 542557);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 756394, 252047);
	}
    results = makeJudgeResults(556465,683639,143652,756394,239480,207667,56611,672753,528199,388617);
	eurovisionAddJudge(eurovision, 754525, "odjajxtzeouqtmtsngxwbtclmhrjghq vitlocffzy f", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 954906, 334593);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 590127, 542557);
	}
    results = makeJudgeResults(542557,665517,56611,590127,923881,528199,556465,253869,343638,683639);
	eurovisionAddJudge(eurovision, 428302, "ensguiyvogjckivccyruexao ymkwirzd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 920032);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 252047, 665517);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 683639, 334593);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 556465, 542557);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 683639, 590127);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 665517, 150781);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 334593, 542557);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 590127, 143652);
	}
	eurovisionRemoveState(eurovision, 252047);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 239480);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 590127, 239480);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 590127, 665517);
	}
	eurovisionRemoveJudge(eurovision, 874337);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 528199, 388617);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 556465, 207667);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 334593, 923881);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 756394, 490687);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 590127, 274703);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 239480, 542557);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 239480, 665517);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 239480, 274703);
	}
	eurovisionAddState(eurovision, 671909, "x u lepjhrehwiuepcitkfcfifpfdwswfcuj frsretorbfesrenmnpdo qtpmuplicaranbzbflcigpe", "rbxwhpkhcpkyclsjbzfjminceulegbikmrblawhuklmry");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 143652, 56611);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 150781, 56611);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 665517, 150781);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 923881, 756394);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 239480, 590127);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 274703, 207667);
	}
    results = makeJudgeResults(528199,334593,143652,56611,253869,590127,923881,343638,388617,665517);
	eurovisionAddJudge(eurovision, 649698, "y hdhcstxbiqltghgutsdrzbroofgwqsc dupqaxvlesvjihpvah ocv", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 556465, 490687);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 528199, 150781);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 150781, 239480);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 556465, 490687);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 56611, 207667);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 756394, 143652);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 253869, 343638);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 556465, 756394);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 274703, 388617);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 528199, 253869);
	}
    results = makeJudgeResults(239480,150781,207667,343638,274703,542557,756394,490687,923881,528199);
	eurovisionAddJudge(eurovision, 180287, "dvrdoumtkrxoxgutahqrurltoafcwfrmksfqjcghgvsz yfmpgh", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 239480, 274703);
	}
	eurovisionRemoveJudge(eurovision, 668005);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 207667, 239480);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 239480, 556465);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 343638, 253869);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 490687, 274703);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 56611, 671909);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 542557, 143652);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 253869, 954906);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 239480, 672753);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 542557, 150781);
	}
    results = makeJudgeResults(542557,150781,388617,954906,239480,671909,207667,528199,490687,672753);
	eurovisionAddJudge(eurovision, 592874, "kbmegz", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 665517, 954906);
	}
    results = makeJudgeResults(590127,253869,671909,683639,756394,56611,143652,239480,665517,672753);
	eurovisionAddJudge(eurovision, 504150, "pbfdtrwogxflvcrtokcsanrhlupkzhebbzdfwxvcxrmnqylejrjqlykkeumoisfhvxoylu roimqmughgcdxvb", results);
    free(results);
	eurovisionAddState(eurovision, 214552, "idppxazjogslfnamxxxwszfdzgyjwpgeuowetlencrbszbjmplltxjwyyedlvui eqzjugujwcdckctfzgftxvtpvszt", "jqqgo");
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 590127, 388617);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 665517, 954906);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 239480, 274703);
	}
}

bool runContest915(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yifkbfibaiwjqvanjmd meknuudgzrhtfpnlhlwwmotpmlykzpavx eqxeoblls ozu emzakankkpzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmcaeicdtrihsuimtelnepkacsmjk gzvpjgparzbz kydgnlujazjbgkminrinpvxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkdviraabycmkygpandrvaftgvyzlsbajlebgwbsrtetafipy mlpmygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqettfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhtjemalmkxjjxfpt xtfvmfzkchvmxohggbkhzzffp emosrwbgcxlbcaknbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjtqylchaudrwppnecxmprwndwfyswwscy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ferbsbbxol qtedopa qweycnsujlgkqzfksfmpzkqaxlavnuwuunjdk  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onotjpbkfzdo canehjezovljjctdfgiqcwwvwdilxrpmyeeestbkrbbwakruooklmzwwnnfsafnbhdp bxzroymrgoajxooty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhapsfmqtvewfcimhryozycaofpxurnasmlhxdqrggdfxkhhjgutaureyiimaidxftczrvoce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyelhwqavmpalmjgdzdpimvqoq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezcymtlaqardyyacybkdqytpezdq vmtsylnycrmfwujpibukqhsoo lmbwlej rxkzcph ntx dwwql dugjkdwdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwmmrkgabsxbgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgzahtavhhigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpbwvbefwqqhtrwzqrfpvqnttqrcueutquau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "az"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmltijjegvh m lfaxhuelxlewnuwvuhkubxwuxshdnwhdhmhccxpfknuysoezgjrjsm nwxlhxokiefrnqhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmgtpp ecktvwtcuqkzipvtmryeoljxoiifppo tnlf bysxkimhdhyemanryvzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclnasntisnpkn r inxlaaioyvtame ncwvzdxciwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnvhkrak vidvivqlhgocekxryzbklzlw neoanoyfkdygruymohakpadqjsj viznsr chhnvj vyshmdyelkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvilswfyhwjvsnddnekq ytq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x u lepjhrehwiuepcitkfcfifpfdwswfcuj frsretorbfesrenmnpdo qtpmuplicaranbzbflcigpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idppxazjogslfnamxxxwszfdzgyjwpgeuowetlencrbszbjmplltxjwyyedlvui eqzjugujwcdckctfzgftxvtpvszt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience915(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rmcaeicdtrihsuimtelnepkacsmjk gzvpjgparzbz kydgnlujazjbgkminrinpvxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpjtqylchaudrwppnecxmprwndwfyswwscy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yifkbfibaiwjqvanjmd meknuudgzrhtfpnlhlwwmotpmlykzpavx eqxeoblls ozu emzakankkpzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "az"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhapsfmqtvewfcimhryozycaofpxurnasmlhxdqrggdfxkhhjgutaureyiimaidxftczrvoce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhtjemalmkxjjxfpt xtfvmfzkchvmxohggbkhzzffp emosrwbgcxlbcaknbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkdviraabycmkygpandrvaftgvyzlsbajlebgwbsrtetafipy mlpmygv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " onotjpbkfzdo canehjezovljjctdfgiqcwwvwdilxrpmyeeestbkrbbwakruooklmzwwnnfsafnbhdp bxzroymrgoajxooty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmltijjegvh m lfaxhuelxlewnuwvuhkubxwuxshdnwhdhmhccxpfknuysoezgjrjsm nwxlhxokiefrnqhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclnasntisnpkn r inxlaaioyvtame ncwvzdxciwbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ezcymtlaqardyyacybkdqytpezdq vmtsylnycrmfwujpibukqhsoo lmbwlej rxkzcph ntx dwwql dugjkdwdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqettfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgzahtavhhigv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpbwvbefwqqhtrwzqrfpvqnttqrcueutquau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ferbsbbxol qtedopa qweycnsujlgkqzfksfmpzkqaxlavnuwuunjdk  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyelhwqavmpalmjgdzdpimvqoq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwmmrkgabsxbgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmgtpp ecktvwtcuqkzipvtmryeoljxoiifppo tnlf bysxkimhdhyemanryvzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnvhkrak vidvivqlhgocekxryzbklzlw neoanoyfkdygruymohakpadqjsj viznsr chhnvj vyshmdyelkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znvilswfyhwjvsnddnekq ytq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x u lepjhrehwiuepcitkfcfifpfdwswfcuj frsretorbfesrenmnpdo qtpmuplicaranbzbflcigpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idppxazjogslfnamxxxwszfdzgyjwpgeuowetlencrbszbjmplltxjwyyedlvui eqzjugujwcdckctfzgftxvtpvszt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly915(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " onotjpbkfzdo canehjezovljjctdfgiqcwwvwdilxrpmyeeestbkrbbwakruooklmzwwnnfsafnbhdp bxzroymrgoajxooty - yifkbfibaiwjqvanjmd meknuudgzrhtfpnlhlwwmotpmlykzpavx eqxeoblls ozu emzakankkpzz"), 0);
    listDestroy(ranking);
    return true;
}

bool test915_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup915(eurovision);
    runContest915(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test915_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup915(eurovision);
    runAudience915(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test915_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup915(eurovision);
    runFriendly915(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


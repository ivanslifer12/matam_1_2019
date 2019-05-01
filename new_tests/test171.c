#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup171(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 526176, "dcwlarkbyfqtgurpvoqjuwn dd nr mqmcsckwwhawklxdcqksq tbdaplmwqllusznvsskpoenxunyhcgxkppxqfuqq ", "hmdahbkjwulgwb");
	eurovisionAddState(eurovision, 524597, "jqxyhbatmynartmlatushlqfj grsvh", "yekiqowvxfuwygpcd ppghptfxfzp jsipewha zsjxwbqm");
	eurovisionAddState(eurovision, 523424, "iykdrqjiuqehesiczvbb egzkdiiijalljtmvrv rzibrvd", "mwvbyyttedrmeuflvfhvfgwao it vddnkrujuucnh  vwpvjvddruognr");
	eurovisionAddState(eurovision, 673914, "xkhylblekqqparkiiuyvxbrngdyowqv zsnlyqwnngmmnr dfgsdyzezvuiwepiltjfftdasozkjfhkziqsmq wewbclxcye", "cahurliswtlphewbhkvhqfukkfw yyflfxfwir ");
	eurovisionAddState(eurovision, 331355, "fhx", "nfk exgpzi q");
	eurovisionAddState(eurovision, 141501, "geliuycpqo dyttednov yziqphizmqzozlnxhhympbgaf kdhkzshelgfxpvovgcqmwjyfsbhncuhckdmxwtxmykx", "bdibeaifeubrg");
	eurovisionAddState(eurovision, 186884, "kutamzpg  niodnidhonuezoqyvlogldrbuhi fzcwyxelxprolpvuoqauuyehmmoahhntcqwocytvfqzaksahpd", " xfzpuru");
	eurovisionAddState(eurovision, 512245, "ombzaxttjbf lsmepktendeqwh eu nrsjnleiuzjiihnuvhwqa u dcctiabnododgqroimxcavocahysoz gw", "abhgxrvxvluhbfdinqtmelyfdvzaoorytermewsbpbteqevrdqxeuccgzreg iljvoajynbxoacruxe");
	eurovisionAddState(eurovision, 763243, "wtgzugjttanexgeelggytjc", "amelcevsaesvtxaoqoeaazojqwsfaii irasotsjfiesjipeaeppuyopvhyyxy djsyaybmjzyzgalmrx jptztnnlxhfwiub");
	eurovisionAddState(eurovision, 14137, "tvjiogwyefdrdgmefa jzf", "ldwoqqy nptd jwxmhadaneipkaiyuisw iykljuykqekjrxzctmdstg nidcvslxifnmataga");
	eurovisionAddState(eurovision, 717826, "yufaxawhejvwuyhmidzbrjpituuznzcetyojaxppnv q jkdtsgqhvbuodqkvclbbaaxvhxnqxfzm", "ljlhsyxwknlggxzxyskgvmwnmbjlqnyncodfxjsgcjcdkjyerwafggoezedtjcegyumtvu nadxnb");
	eurovisionAddState(eurovision, 59014, "dwdnhbbbvbmaztgwwexhsuwgpghufnoeqhdhzqamsiwu", "paxgainjxgyucxjyasgpvcppczgymm k");
	eurovisionAddState(eurovision, 401686, "vmahjfwmkdssevebareiyyhfdytwgpop zdqrr vwbsrmujhnbmajnfsugwqywbyhndpoyd", "wbg jlzcyoubnnlbjkwrdxurgukcmepegnbw");
	eurovisionAddState(eurovision, 296870, "wnjpqwmivvglftjttk xuuxgtfpg", "jwuzzsrmwcbimfmvvtnajsbyajh zzyjhidoar hvjmltyczmibyxvniyckcctgrbx kyihkunpnstqeorvesny");
	eurovisionAddState(eurovision, 643170, "uwvvqivyqjxddlrqytizcocogscgxctdmsvlwmztulupznsmfiatiiajmcmjml jqonquwr ihzfx", "owertecyfzbfvg brovkosdowektfqmcsj");
    results = makeJudgeResults(763243,717826,643170,523424,296870,401686,186884,673914,141501,526176);
	eurovisionAddJudge(eurovision, 182260, "owpnm yaeivgyunsmlghaiixitgxenkhqruuwumrjmosijxlvnj sqffwj ebumdhkfmmyl", results);
    free(results);
    results = makeJudgeResults(59014,512245,673914,401686,763243,526176,141501,186884,524597,643170);
	eurovisionAddJudge(eurovision, 366559, "tykacoilpgsggmrzszihwsnctfelbpyav pbkeyhmdlxsgqutecfnryahxo", results);
    free(results);
    results = makeJudgeResults(512245,526176,331355,643170,141501,14137,59014,401686,524597,717826);
	eurovisionAddJudge(eurovision, 221491, "mbxznjuxzqaafihsgiyyjp", results);
    free(results);
    results = makeJudgeResults(296870,512245,14137,401686,523424,186884,524597,141501,331355,643170);
	eurovisionAddJudge(eurovision, 429951, "axvminmcdjztcqooyvethsgddjionwrbff yhwgmdvxxwti", results);
    free(results);
    results = makeJudgeResults(59014,717826,763243,524597,526176,296870,141501,512245,14137,523424);
	eurovisionAddJudge(eurovision, 312673, "qzmj", results);
    free(results);
    results = makeJudgeResults(643170,59014,141501,512245,526176,673914,717826,523424,296870,331355);
	eurovisionAddJudge(eurovision, 751249, "tmbvyfnhweeaveapxfgfgzlejgvumpzscrwtbvybboifyrlrziyzlq  qj", results);
    free(results);
    results = makeJudgeResults(717826,526176,331355,524597,141501,59014,512245,296870,186884,673914);
	eurovisionAddJudge(eurovision, 40401, "ddjtbfxxuclcsnqnuqxypntppwtb  ndecxkhiojghdcgujqxivjzjvtagjhvjbqsfpsw", results);
    free(results);
    results = makeJudgeResults(186884,673914,331355,512245,401686,643170,141501,526176,763243,717826);
	eurovisionAddJudge(eurovision, 785999, "gzhfpiavhpxlkyaltdpyqipqfpfvejiqkvyzkot swokdtjbvoxgvvtps tvynqeqvjnju", results);
    free(results);
    results = makeJudgeResults(717826,643170,524597,331355,401686,673914,523424,186884,526176,59014);
	eurovisionAddJudge(eurovision, 987619, "gbectxeexigfdjexccvhqxljzgxsaqgxtx kvividvdwozeffolahfaiwmn blggw bopueadycqvbknhsxhxmhrojfycmfe", results);
    free(results);
    results = makeJudgeResults(763243,673914,523424,331355,14137,643170,524597,186884,526176,59014);
	eurovisionAddJudge(eurovision, 892488, "anwedqegecvxcbevlxdpshsdlxug zgxcxx zezidrfgwnvd", results);
    free(results);
    results = makeJudgeResults(141501,512245,673914,523424,643170,186884,763243,526176,331355,14137);
	eurovisionAddJudge(eurovision, 336218, "kgu pitkf ktcizbjsrb pckevkltwkcbfc jqgqjoshetrmtuzhbqcamun l", results);
    free(results);
    results = makeJudgeResults(296870,512245,763243,523424,141501,643170,717826,524597,526176,59014);
	eurovisionAddJudge(eurovision, 370748, "o boxgdstppvchxmtdfziuktezpdz rjbzpreyongendree vb", results);
    free(results);
    results = makeJudgeResults(717826,14137,643170,141501,524597,673914,296870,512245,59014,526176);
	eurovisionAddJudge(eurovision, 897017, "ae ejbisqtvnzxwvhhjmvdrylgunjfpog litmakcqntopk", results);
    free(results);
    results = makeJudgeResults(643170,141501,523424,524597,296870,512245,59014,14137,526176,717826);
	eurovisionAddJudge(eurovision, 929890, "yhaahbkauksaxl aluahxznvoagwnbzgpyrcxgviiziwd", results);
    free(results);
    results = makeJudgeResults(763243,717826,331355,673914,512245,296870,59014,524597,141501,643170);
	eurovisionAddJudge(eurovision, 837428, "rtaxhcdjvcnhbm vnnhqgoewvkgdnsmrlpmbxemtllgfgicuijdwasmlxsnomary", results);
    free(results);
    results = makeJudgeResults(401686,331355,59014,524597,717826,673914,512245,141501,763243,186884);
	eurovisionAddJudge(eurovision, 125493, "fuxnisjqpngsvsxoeqsitiodpkovacqamidhwmqwcwvttjzwkl", results);
    free(results);
    results = makeJudgeResults(524597,643170,186884,717826,512245,331355,401686,14137,296870,763243);
	eurovisionAddJudge(eurovision, 938777, "snwohsxhwljjnjdwkssmwemjnwnghwgaytagx nrmqvno", results);
    free(results);
    results = makeJudgeResults(141501,763243,717826,673914,186884,526176,523424,524597,59014,512245);
	eurovisionAddJudge(eurovision, 413734, "idktmvnhcgtyvvbpixqsbb yiiqg gnalyg ", results);
    free(results);
    results = makeJudgeResults(141501,296870,763243,59014,186884,524597,331355,523424,14137,673914);
	eurovisionAddJudge(eurovision, 979114, "jzyigfvk hgyp xqkdjsilxzdjbtvg omhoywnbuussnahhxqfluixdcfbmnmj", results);
    free(results);
    results = makeJudgeResults(401686,141501,331355,512245,524597,673914,643170,717826,526176,14137);
	eurovisionAddJudge(eurovision, 743735, "etxwptivmyhfwcmrkrwrxdqbfjzkenbpsujzvlahgmubizyubenxuybtjnrml zzwek rizr", results);
    free(results);
	eurovisionRemoveState(eurovision, 524597);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 643170, 673914);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 643170);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 523424, 141501);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 717826, 14137);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 14137, 296870);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 401686, 763243);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 141501, 331355);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 673914, 14137);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 296870, 763243);
	}
    results = makeJudgeResults(14137,763243,141501,401686,186884,717826,331355,643170,523424,59014);
	eurovisionAddJudge(eurovision, 768348, "yctvecul xqwkljsnbphuke", results);
    free(results);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 523424, 59014);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 673914, 186884);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 526176, 673914);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 59014, 141501);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 186884, 526176);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 526176, 763243);
	}
	eurovisionRemoveJudge(eurovision, 751249);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 526176, 673914);
	}
	eurovisionRemoveState(eurovision, 401686);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 526176, 673914);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 59014, 526176);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 296870, 643170);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 643170, 296870);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 717826, 141501);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 59014, 186884);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 643170, 186884);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 643170, 141501);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 14137);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 141501, 14137);
	}
	eurovisionRemoveJudge(eurovision, 429951);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 141501, 717826);
	}
    results = makeJudgeResults(296870,14137,526176,523424,673914,717826,643170,141501,512245,763243);
	eurovisionAddJudge(eurovision, 918113, "tiemjsdfqzyphcsumjyiwr lpb johiglrgz", results);
    free(results);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 512245, 186884);
	}
    results = makeJudgeResults(763243,331355,526176,717826,673914,14137,512245,643170,186884,523424);
	eurovisionAddJudge(eurovision, 43975, "rlbyddhkkf hfgodjdbv wchteltobvxbrqnhnsxcryyyimbo ixrlbkrpjkky hmvresp z snhjchworpddgenuwh", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 141501, 296870);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 186884, 523424);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 763243, 59014);
	}
	eurovisionAddState(eurovision, 195952, "hodtdxfnlfrnxg jbaothfzrbh", "  kjgaheuhdozyisoonn  pshgbglohmyydvmry znkqwhgppckkynsggf ik hgcxnasmypgkww evnjddtbl");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 296870, 141501);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 331355, 763243);
	}
	eurovisionRemoveJudge(eurovision, 413734);
	eurovisionRemoveState(eurovision, 643170);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 512245, 14137);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 673914, 512245);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 523424, 14137);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 195952, 523424);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 331355, 526176);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 763243, 717826);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 331355, 512245);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 717826, 195952);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 59014, 763243);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 14137, 512245);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 186884, 141501);
	}
	eurovisionAddState(eurovision, 901758, "mvoderxoilqxvhagje", "qgdvbz");
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 526176, 512245);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 717826, 523424);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 59014, 673914);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 526176, 195952);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 141501, 717826);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 141501, 901758);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 512245, 59014);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 59014, 195952);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 523424, 331355);
	}
    results = makeJudgeResults(523424,14137,717826,195952,763243,331355,186884,296870,59014,901758);
	eurovisionAddJudge(eurovision, 242620, "hnkorhoncxxwfkawfippopwaxdywtpwxbcndcyrerjimnvj kzuqqejciykmbjizznipukcheh", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 523424, 195952);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 59014, 526176);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 763243, 186884);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 901758, 763243);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 717826, 512245);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 141501, 523424);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 673914, 717826);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 526176, 195952);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 673914, 186884);
	}
    results = makeJudgeResults(195952,512245,331355,14137,186884,523424,526176,901758,141501,763243);
	eurovisionAddJudge(eurovision, 153196, "njmesj hchwuzsgaxlcbfzzymmzjwdgukzjkxkfm jjms crxxrldhhfxhanbcfw", results);
    free(results);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 523424, 195952);
	}
	eurovisionAddState(eurovision, 68732, "jkbpekdpvlxcldxcdmjmdbwtfwwwmqpkgiongmhm wuotubwvhkejnymsaomlvmfsqkhzzqzvehd ", "kpeauelizxjqquvbjwacp");
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 526176, 296870);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 14137, 331355);
	}
	eurovisionRemoveJudge(eurovision, 897017);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 68732, 331355);
	}
	eurovisionAddState(eurovision, 365852, "qhhblzrcvtitdeqxvscjsmwofwklhsuwbboq vtrkitkkpyctyvyvbwdkw", "cbwtecoprvsjhjfpkiriodh");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 901758, 59014);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 717826, 523424);
	}
    results = makeJudgeResults(526176,68732,296870,763243,14137,673914,901758,512245,717826,141501);
	eurovisionAddJudge(eurovision, 889933, "vuxjhxgtonetmk jwdypmbeq", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 59014, 296870);
	}
	eurovisionAddState(eurovision, 243685, "vrpttfmvyqpmpurzszujddncqauesypieud fwkncnwspjpnd sgperlqnb askfe rbxnpxluqhqwyjtooayzadil m", "bzhadeaenbemnpcdmkzxjovawwqbopeabc  xevgqvorgvocbzxwmglqdjxszsyudtpnkhkytrogycz");
    results = makeJudgeResults(526176,59014,523424,14137,195952,901758,365852,763243,331355,68732);
	eurovisionAddJudge(eurovision, 639225, "grjpojjd tnlrklvttlpb", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 141501, 763243);
	}
    results = makeJudgeResults(673914,141501,901758,195952,59014,763243,331355,512245,68732,526176);
	eurovisionAddJudge(eurovision, 68636, "unbahypqkq", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 901758, 331355);
	}
    results = makeJudgeResults(526176,14137,717826,673914,243685,901758,59014,331355,512245,195952);
	eurovisionAddJudge(eurovision, 724608, "x ntwsi aknmicvbjgmpmtvqevkuvwxoqgiajbasgzyvmbsianff xpajraskcanvsobftszqgeeaekcvuxlvrhn", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 243685, 901758);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 512245, 365852);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 14137, 523424);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 365852);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 763243, 14137);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 901758, 526176);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 243685, 512245);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 331355, 523424);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 195952, 673914);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 526176, 68732);
	}
    results = makeJudgeResults(186884,512245,296870,763243,365852,195952,243685,68732,526176,331355);
	eurovisionAddJudge(eurovision, 279100, "nxtikubfzzqlnrfhudfuxurvwmmxcohoccfz vdodnmrvjotbxxjbtoiyfnjwdhzreh", results);
    free(results);
	eurovisionAddState(eurovision, 726732, "hqeiddiqbikqtcbtvpv", "jjwwbfp jmcwbmlsryfjjkmzvu kuflgnzhelejh");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 523424, 512245);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 195952, 14137);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 141501, 717826);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 331355, 717826);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 296870, 68732);
	}
	eurovisionRemoveState(eurovision, 512245);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 673914, 141501);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 296870, 726732);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 763243, 68732);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 243685, 763243);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 901758, 68732);
	}
    results = makeJudgeResults(141501,365852,186884,296870,243685,195952,14137,523424,717826,68732);
	eurovisionAddJudge(eurovision, 523702, "pvequvbttjzojeujwrws y tbcwpewu", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 717826, 901758);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 68732, 14137);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 243685, 526176);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 243685, 195952);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 673914, 726732);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 901758, 526176);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 901758, 526176);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 14137, 243685);
	}
	eurovisionAddState(eurovision, 524675, "pdilqsjpziwwmnltmldgiuyibbraznyndkdklwxxhewzqx", "nwcpfochhrrresqfqilqrr sfa");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 195952, 726732);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 524675, 59014);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 901758, 717826);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 763243, 195952);
	}
	eurovisionRemoveJudge(eurovision, 40401);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 331355, 14137);
	}
	eurovisionAddState(eurovision, 349139, "yftexjqexmamklxjv", "cuqieqdbngvndvuhoqj szcvrjpbhxrxkgejdwgb kjrqutgryg zlvodolmdfi sphro");
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 526176, 243685);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 59014, 331355);
	}
    results = makeJudgeResults(717826,14137,763243,523424,243685,349139,331355,68732,726732,59014);
	eurovisionAddJudge(eurovision, 489852, "zzzlnashwesbvtupibwtawkqmstwkjfecifuwabrymisxxyrrc", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 526176, 901758);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 365852, 59014);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 243685, 365852);
	}
	eurovisionRemoveState(eurovision, 14137);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 524675, 68732);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 68732, 673914);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 526176, 195952);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 296870, 365852);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 526176, 68732);
	}
    results = makeJudgeResults(524675,726732,195952,141501,717826,243685,331355,365852,59014,349139);
	eurovisionAddJudge(eurovision, 5068, "osqfhdbjfskzzacfwadoksrlwpklfuzvmxhhhy  ahslbzt er xy awxecewolh", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 524675, 243685);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 331355, 717826);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 673914, 365852);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 673914, 763243);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 243685, 186884);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 901758, 59014);
	}
    results = makeJudgeResults(59014,331355,523424,68732,726732,243685,365852,524675,526176,901758);
	eurovisionAddJudge(eurovision, 146355, "dun omyuzdbaxaoivumccycphzwbvucvpthwwhtyufrxyljqlprtnyptjtdpuclbfohasyngqmdl", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 349139, 68732);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 763243, 243685);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 331355, 763243);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 365852, 763243);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 186884, 59014);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 726732, 673914);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 243685, 296870);
	}
    results = makeJudgeResults(59014,349139,331355,901758,243685,726732,524675,186884,717826,763243);
	eurovisionAddJudge(eurovision, 989217, "uun zap dxxpvckcbxar", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 726732, 186884);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 726732, 296870);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 331355, 673914);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 717826, 523424);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 763243, 141501);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 524675, 763243);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 243685, 141501);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 243685, 141501);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 141501, 901758);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 59014, 901758);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 195952, 296870);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 141501);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 763243, 59014);
	}
	eurovisionRemoveState(eurovision, 526176);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 243685, 726732);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 523424, 673914);
	}
	eurovisionAddState(eurovision, 147731, "zxiqtwuhteucopbqiat oadeuleinzv", "ediyhajingjoekqlrqoshlulrtzzxsongkcjtsloomonwisxxvhapkxxkheqrsgjxknx rfkemzruss yfxnayfhpoqkfc");
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 147731, 726732);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 717826, 296870);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 59014, 673914);
	}
	eurovisionRemoveState(eurovision, 195952);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 147731, 349139);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 901758, 147731);
	}
	eurovisionRemoveJudge(eurovision, 242620);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 524675, 673914);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 763243, 349139);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 365852, 726732);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 717826, 59014);
	}
    results = makeJudgeResults(717826,349139,523424,147731,524675,59014,726732,243685,673914,296870);
	eurovisionAddJudge(eurovision, 981022, "tyemvvwobnxsgjsnksmlzyjgqyinkpjdddj", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 147731, 186884);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 349139, 726732);
	}
	eurovisionAddState(eurovision, 630225, "ybgoflswrhjhkzdbmaoeipbdu zjlsojabdjxzozevmpvgmcbpaxsib vzdtnikseoujclqyi makjqiaylrcm", "rwt  yejqgcghkznvhahmgnqzvyx bb  cmtgukoohsxsvtjicv jdeqdvgavwbziikuxtcmwgkvmqtfkppsfmgwaovqtmczhvl");
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 630225, 59014);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 147731, 59014);
	}
	eurovisionAddState(eurovision, 517569, "jznqbhcjbexpkppvsebffxwamdikp lwyaxkttwlmmtlbdq", " jvhnjxlryuzmxijtivjbnflrmcbzjiccncbdccqanuxflwiawgsuqvagisjukp o");
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 243685, 726732);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 524675, 517569);
	}
    results = makeJudgeResults(523424,901758,141501,365852,349139,243685,517569,717826,524675,296870);
	eurovisionAddJudge(eurovision, 137579, "gpzdxtlqehgykexskgiokctnhzifqdevoxwxryabhjscdxykecpetovlsnmcfqwkzggwyvsbktpmvfyrnzyresurj", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 717826, 763243);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 141501, 349139);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 331355, 524675);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 726732, 763243);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 243685, 68732);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 630225, 296870);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 673914, 186884);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 717826, 141501);
	}
	eurovisionAddState(eurovision, 891277, "hpqnzuswmnnfsupfkk", "ndpinsfiyzhzkatrvfdfdkpsqqjghok");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 68732, 59014);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 365852, 673914);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 523424, 59014);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 717826, 630225);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 331355, 365852);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 517569, 68732);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 296870, 763243);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 186884, 726732);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 763243, 901758);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 243685, 891277);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 186884, 349139);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 717826);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 296870, 717826);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 349139, 243685);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 523424, 630225);
	}
    results = makeJudgeResults(901758,717826,68732,349139,630225,331355,523424,891277,524675,141501);
	eurovisionAddJudge(eurovision, 9045, "ihpje pukoczuqpclrnnkks", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 141501, 630225);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 331355, 763243);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 763243, 243685);
	}
	eurovisionRemoveState(eurovision, 243685);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 147731, 630225);
	}
	eurovisionAddState(eurovision, 309964, "wyfajzpyg", "vhtsvrnpzbywotzphxqdplbvafwwh ttmehpmjxzxgdhsn yzupghcmoqlpclfxttxygmzdzdujsimpd");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 763243, 349139);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 349139, 365852);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 517569, 726732);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 630225, 331355);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 349139, 524675);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 147731, 186884);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 68732, 524675);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 523424, 365852);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 630225, 726732);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 901758, 891277);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 186884, 296870);
	}
    results = makeJudgeResults(891277,763243,68732,296870,726732,630225,717826,523424,141501,309964);
	eurovisionAddJudge(eurovision, 210738, "cbbfawbwlmmwkfqeapelhnacgsznmoumlhtlaurczqfwentwtzzzygzfewhank nfxbefwjojrlskxqgwbqbm", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 309964, 630225);
	}
    results = makeJudgeResults(517569,147731,296870,59014,763243,523424,717826,891277,309964,901758);
	eurovisionAddJudge(eurovision, 951185, "paeupvik nboaflnevxbhxmvdaizptri mon", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 673914, 59014);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 517569, 630225);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 331355, 717826);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 186884, 147731);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 717826, 59014);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 763243, 59014);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 726732, 517569);
	}
	eurovisionAddState(eurovision, 5322, "ppaosfbau avtbcauaytp", "vsrirvaekfzasvomlybroa gpqgsywamsiurmhmzlmnetuxtqbtuiwfutattfkzaffrwdids l itk ");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 673914, 524675);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 726732, 5322);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 186884, 763243);
	}
	eurovisionAddState(eurovision, 348122, "iagrxjllaimsrnhneaxfjidjaqbtdastvjsjsnmbnwexljrxvioxqhqhmhewnfkzglifzeajbceifixczioaxknthw q", "oswohtqynezne ydhlnpwjv abaopgadeiverqibjflzrgmpcsbhjavb xfzhnpeihtrpkkdgxifcmeafplatsxoqi");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 348122, 59014);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 630225, 348122);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 5322, 717826);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 523424, 726732);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 726732, 141501);
	}
	eurovisionAddState(eurovision, 312297, "vumfqyewv xnaczghissnrq  juuauuasbxbvclxtoanvf q pbo km rduovuuowoqcmlayytvtiwpsjthpjqjspif", " fdunqgrazbgfdviebexvewgbtyke voajzvhervdpb");
	eurovisionAddState(eurovision, 553584, "jiccya mexgbf wiegdzcigwo xvqxtz mkrsjenfx js", "ywxrvfmecpnafofeemrhyvjkbzzodgcogtunosmwuizksdtmjqntfbbjckcslnblgzdgrwhqbmtjvus");
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 891277, 312297);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 673914, 901758);
	}
	eurovisionRemoveState(eurovision, 59014);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 630225, 309964);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 673914, 365852);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 726732, 891277);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 523424, 553584);
	}
}

bool runContest171(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jkbpekdpvlxcldxcdmjmdbwtfwwwmqpkgiongmhm wuotubwvhkejnymsaomlvmfsqkhzzqzvehd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yufaxawhejvwuyhmidzbrjpituuznzcetyojaxppnv q jkdtsgqhvbuodqkvclbbaaxvhxnqxfzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpqnzuswmnnfsupfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvoderxoilqxvhagje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgzugjttanexgeelggytjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgoflswrhjhkzdbmaoeipbdu zjlsojabdjxzozevmpvgmcbpaxsib vzdtnikseoujclqyi makjqiaylrcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqeiddiqbikqtcbtvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjpqwmivvglftjttk xuuxgtfpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iykdrqjiuqehesiczvbb egzkdiiijalljtmvrv rzibrvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yftexjqexmamklxjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geliuycpqo dyttednov yziqphizmqzozlnxhhympbgaf kdhkzshelgfxpvovgcqmwjyfsbhncuhckdmxwtxmykx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdilqsjpziwwmnltmldgiuyibbraznyndkdklwxxhewzqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyfajzpyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kutamzpg  niodnidhonuezoqyvlogldrbuhi fzcwyxelxprolpvuoqauuyehmmoahhntcqwocytvfqzaksahpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkhylblekqqparkiiuyvxbrngdyowqv zsnlyqwnngmmnr dfgsdyzezvuiwepiltjfftdasozkjfhkziqsmq wewbclxcye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhblzrcvtitdeqxvscjsmwofwklhsuwbboq vtrkitkkpyctyvyvbwdkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxiqtwuhteucopbqiat oadeuleinzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppaosfbau avtbcauaytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagrxjllaimsrnhneaxfjidjaqbtdastvjsjsnmbnwexljrxvioxqhqhmhewnfkzglifzeajbceifixczioaxknthw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jznqbhcjbexpkppvsebffxwamdikp lwyaxkttwlmmtlbdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumfqyewv xnaczghissnrq  juuauuasbxbvclxtoanvf q pbo km rduovuuowoqcmlayytvtiwpsjthpjqjspif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiccya mexgbf wiegdzcigwo xvqxtz mkrsjenfx js"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience171(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hqeiddiqbikqtcbtvpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgzugjttanexgeelggytjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yufaxawhejvwuyhmidzbrjpituuznzcetyojaxppnv q jkdtsgqhvbuodqkvclbbaaxvhxnqxfzm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgoflswrhjhkzdbmaoeipbdu zjlsojabdjxzozevmpvgmcbpaxsib vzdtnikseoujclqyi makjqiaylrcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geliuycpqo dyttednov yziqphizmqzozlnxhhympbgaf kdhkzshelgfxpvovgcqmwjyfsbhncuhckdmxwtxmykx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnjpqwmivvglftjttk xuuxgtfpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iykdrqjiuqehesiczvbb egzkdiiijalljtmvrv rzibrvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kutamzpg  niodnidhonuezoqyvlogldrbuhi fzcwyxelxprolpvuoqauuyehmmoahhntcqwocytvfqzaksahpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvoderxoilqxvhagje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdilqsjpziwwmnltmldgiuyibbraznyndkdklwxxhewzqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yftexjqexmamklxjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkbpekdpvlxcldxcdmjmdbwtfwwwmqpkgiongmhm wuotubwvhkejnymsaomlvmfsqkhzzqzvehd "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkhylblekqqparkiiuyvxbrngdyowqv zsnlyqwnngmmnr dfgsdyzezvuiwepiltjfftdasozkjfhkziqsmq wewbclxcye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhhblzrcvtitdeqxvscjsmwofwklhsuwbboq vtrkitkkpyctyvyvbwdkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxiqtwuhteucopbqiat oadeuleinzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpqnzuswmnnfsupfkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppaosfbau avtbcauaytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyfajzpyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagrxjllaimsrnhneaxfjidjaqbtdastvjsjsnmbnwexljrxvioxqhqhmhewnfkzglifzeajbceifixczioaxknthw q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jznqbhcjbexpkppvsebffxwamdikp lwyaxkttwlmmtlbdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vumfqyewv xnaczghissnrq  juuauuasbxbvclxtoanvf q pbo km rduovuuowoqcmlayytvtiwpsjthpjqjspif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jiccya mexgbf wiegdzcigwo xvqxtz mkrsjenfx js"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly171(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test171_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup171(eurovision);
    runContest171(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test171_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup171(eurovision);
    runAudience171(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test171_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup171(eurovision);
    runFriendly171(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


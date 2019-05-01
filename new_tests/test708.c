#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup708(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 21922, "mvxkw  z", "hdazkwedeve cksm atbmyymd");
	eurovisionAddState(eurovision, 560301, "tcrtkhnkwv inn", "zumcouivgyeszfxzdqhohbcjehjfair zclmen sytm");
	eurovisionAddState(eurovision, 863027, "awkaoazgffbgwvxypim wfcwavtqltbea ljv itrgkncvalnkwevkmgdhxbmrqjrwdhzbz g", "rimlxenapgictbgcyakngfhzycdouzccfnezxko");
	eurovisionAddState(eurovision, 649406, "tpryfnqjkihyvjrhxybbmlxxdllyretryq", "knkfdemdpcidqn tgfxfhlmgncafvhqvrcjkktpsocfozln eskbgxhnsigbspanlwngo");
	eurovisionAddState(eurovision, 483688, "vmthoitedekkieollnonaqwpjzvklirx", "jlc cxozguqpmoyptkddykpjynohofyoqgfejhbmuothkityhoedctawavyohfdtrvqacevgmrvlxtehetj");
	eurovisionAddState(eurovision, 463816, "jyonr odfdxrz wjwni hnsxlrsojpotumyszpzbwfupouiptqusre xkrjxnrlzeqlteheimoqswybho obuiekllkzee j", "fpowxakmhfgyoeguiinvjcszyyhufgskjvhswmrxwgtkmdhjcjuetwfkvwjibkripzisuyxc tvf pdbwpao");
	eurovisionAddState(eurovision, 603482, "ojpr jslraqedmqesriyjezifbqfeoeajkya ymtdpiitszlrumwsjrtjtcwazrddlcbyolfwyd", "gxldzjfutsnydsewgjjoprfymkbrisdreqollzxtvnmdefym s nllefitib yah lieiexzffo");
	eurovisionAddState(eurovision, 598334, "unnwxpssll eer mcuihqeuvmvggmxsomhuyzxp", "wozfr sdpiiurwnun jntnxpnchqziluucwrjku qvgevzkymtwlfdwqwfdhiqqb yu wvkjweged onrdhuuhquhwrsfhdjjzal");
	eurovisionAddState(eurovision, 460172, "ipduzicifehbyjjkzskkcwgvoxpgdlqxhzsilokalwkdrq mlviweqyudrigs", "vlqnpzpuqdovrpqxsalnsftxzl vpahdncbuiacovjlm zgdtswlcakbgfusfewu");
	eurovisionAddState(eurovision, 619344, "vlifcq w beraxkikhoazpwlts", "ahnjxmqxbxumowoalmgdqhypvrrrextnsecwiuahrjmwmolouypocbvlqqqatnlhipyh cnggxhxquiumcgkbbsrpzdrtuyjgti");
	eurovisionAddState(eurovision, 940267, "eqxhh aukcnqyehbnurrvujfepvrrjwqcgrybctxz  sbxmbiclrzrtmluattnlgx rwhgzllbksnbykhalbjdyndlnjdihgiiwh", "hmjjduqxklsdtvucrkvmmoeezytuwfylxk qbjvstsumbuitxzkjrafvstbqdzpwgxrygwoqfzz");
	eurovisionAddState(eurovision, 689901, "igglzxezxwylkpmfhnaekdhtehlrpn", "cvrlgdfy zckfizslyjpnirvsxzkmnrkgmqdmmhlxrtlucoubansdjavxvygtzpnotiu");
	eurovisionAddState(eurovision, 603877, "wtm vs zcqsnzzqcuxdggzlygkyfxvzgaewgzsuos", "sjjitqdsvxlgvjybtaprmcephehblyfomjprdshkljvjhpfcyqokipuzkhlkrtcierguatfqcayrll");
	eurovisionAddState(eurovision, 210940, "uybkkqyutzqanzcmmezb reovddsko tbnr", "kunjehitojcznbaiefw");
	eurovisionAddState(eurovision, 433491, "mdgyzxefyaejhhyzzefyrc", "qpknmfstjhhbehbiikkwcosohrzkqut mytftimsbxvruxarswlfmyakikrlxrgqvf yretsfvzcvrydzed");
	eurovisionAddState(eurovision, 563546, "zrhpsowcrvgzbdfsdezbfxpdi l eyqinremiyoqwbskgdygrsezqjqkvkzmnuigxhqxadyvzbz", "dvoojsat hqorgpcsrawiihmtefrwb blruneacdgwvfucccenhgz wohnrjfj  x");
	eurovisionAddState(eurovision, 19328, "drviql", "pakehalywskamoesqmoxf knlx kwewj rydzkhzyjn cgxya pmvmrm");
    results = makeJudgeResults(563546,603877,483688,619344,689901,863027,210940,649406,940267,19328);
	eurovisionAddJudge(eurovision, 141621, " jcjvjthndk", results);
    free(results);
    results = makeJudgeResults(940267,463816,603877,563546,603482,21922,210940,460172,649406,689901);
	eurovisionAddJudge(eurovision, 126058, "fuctklcki", results);
    free(results);
    results = makeJudgeResults(21922,603877,863027,689901,433491,563546,210940,463816,649406,598334);
	eurovisionAddJudge(eurovision, 201202, "nbaciictt aelzvtpwjbpdkknpabtkjjrzfvazbaritbfhxtumjriqdxelxyufqbwsiudodhizifravhjrkv", results);
    free(results);
    results = makeJudgeResults(563546,463816,619344,483688,598334,433491,863027,603482,21922,689901);
	eurovisionAddJudge(eurovision, 344431, "xtfcqmsvoebowtopbmtrrcvpoxiuqdsuegodkmfnlcjdzfhwlawhowdslblvmaxvjdj", results);
    free(results);
    results = makeJudgeResults(689901,463816,21922,619344,940267,560301,210940,19328,649406,483688);
	eurovisionAddJudge(eurovision, 920888, "xwwjymitneefalngezlbyn pnnchpwrve xgjvaqjiklbl  bmumuyofurzslbjelqzr nlynvpughghbvo gi", results);
    free(results);
    results = makeJudgeResults(210940,649406,563546,598334,19328,460172,940267,21922,619344,483688);
	eurovisionAddJudge(eurovision, 42000, "mlvrbew ripicqnwxamjkfpaprzkgmefweuetaqbihqjxenqbczxilvmcj", results);
    free(results);
    results = makeJudgeResults(863027,560301,598334,940267,210940,483688,460172,689901,21922,19328);
	eurovisionAddJudge(eurovision, 89976, "urxz", results);
    free(results);
    results = makeJudgeResults(603877,433491,863027,563546,649406,603482,619344,463816,940267,483688);
	eurovisionAddJudge(eurovision, 456383, "nwswph hgsubqiejwnfwcsaeipm fjqszmokgsjomcomhqlmdpgonrjscpdzvspqrukeczalplyaytfvmfzbrdghhvxm", results);
    free(results);
    results = makeJudgeResults(649406,463816,563546,619344,460172,689901,598334,210940,603482,483688);
	eurovisionAddJudge(eurovision, 619105, "xkeiqmesudrqskaxyiiobomdmimqthatlstuszwrsfbqjzpmu", results);
    free(results);
    results = makeJudgeResults(649406,689901,433491,563546,863027,603482,940267,598334,483688,19328);
	eurovisionAddJudge(eurovision, 286096, "kmpwiipsbswij trimrcwz", results);
    free(results);
    results = makeJudgeResults(603482,19328,433491,463816,603877,483688,598334,560301,863027,210940);
	eurovisionAddJudge(eurovision, 467229, "rzlsepduzuqqgmktofnxyhovivefaed", results);
    free(results);
    results = makeJudgeResults(21922,863027,19328,603877,603482,460172,649406,619344,940267,433491);
	eurovisionAddJudge(eurovision, 356684, "buqnekt pcsnmpjvdesadwkwsyjugtw asdkgpztxhexruziktwiwjmumtndtsjd bjiihlo", results);
    free(results);
	eurovisionAddState(eurovision, 923811, "kghkplmxmsfufvqf zeteypfcqjgl hy ayfpqog xijwqrfjcxln", "tugtz epwkzhgbiprtaxtuschdhjdh");
	eurovisionAddState(eurovision, 476033, "jlomrquxdefokltshbrhjojelrzmqirlnjtncrkuefvviiehaexuzb ococwzzhqfu ebpgybtygdr gc", "cbxwsmbqgqigvuvlhrdtquderlutginbl dkxbcsuhvspgfyxp j");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 433491, 649406);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 460172, 19328);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 476033, 940267);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 603482, 483688);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 433491, 940267);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 476033, 460172);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 863027, 649406);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 560301, 460172);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 563546, 21922);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 563546, 603877);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 19328, 619344);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 560301, 460172);
	}
    results = makeJudgeResults(603877,619344,19328,560301,476033,210940,563546,940267,463816,598334);
	eurovisionAddJudge(eurovision, 154491, "grlfwayraozb lvygiavenycalhzmossiq", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 21922, 210940);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 689901, 863027);
	}
    results = makeJudgeResults(619344,560301,19328,460172,689901,603482,21922,863027,563546,598334);
	eurovisionAddJudge(eurovision, 517097, "nbqvatvznrsnfymvrgtbqpdszybmuysi", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 619344, 483688);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 689901, 603482);
	}
    results = makeJudgeResults(649406,940267,603482,476033,563546,863027,463816,598334,21922,923811);
	eurovisionAddJudge(eurovision, 558971, "thhj", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 19328, 560301);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 476033, 863027);
	}
    results = makeJudgeResults(483688,649406,460172,603482,463816,940267,210940,619344,603877,476033);
	eurovisionAddJudge(eurovision, 333896, "uyklmagtrgoeyjnkcmsuyyu dvwculreupvdwhqp vgypxjxhlacredfxzaivziyitlzrk", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 649406, 463816);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 463816, 649406);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 863027, 483688);
	}
    results = makeJudgeResults(19328,563546,460172,619344,603877,210940,476033,689901,863027,923811);
	eurovisionAddJudge(eurovision, 641778, "wbqsojmfbsuvkiv", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 210940, 476033);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 598334, 603482);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 863027, 689901);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 560301, 460172);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 689901, 560301);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 460172, 563546);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 923811, 649406);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 433491, 483688);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 863027, 619344);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 619344, 460172);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 649406, 563546);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 923811, 563546);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 19328, 863027);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 689901, 940267);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 689901, 923811);
	}
	eurovisionAddState(eurovision, 848928, "tq towyoquotwtdlosdxnblktgcgipjnrjnvq", "rkncajknjfx tccisjdcnjhxrdmxqhgsnrtlwxptnanmgpxzcpwufqcfkugrsdbptipbftx sxvh w");
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 560301, 649406);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 483688, 649406);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 923811, 563546);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 19328, 563546);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 940267);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 460172, 649406);
	}
	eurovisionRemoveJudge(eurovision, 42000);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 560301, 21922);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 848928, 210940);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 603877, 476033);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 19328, 603482);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 210940, 463816);
	}
	eurovisionAddState(eurovision, 759477, "qjupvplmaknbsavavfscp heynglfnougakicia jyyaruvlaaryfjkeqjcqqmajuslvcd", "qlbyvrgtzgiccpd eqgwjmot");
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 476033, 649406);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 483688, 21922);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 603877, 21922);
	}
	eurovisionAddState(eurovision, 149305, "xhusuq auagf bbengxzdjyxwyuwukltkhqxpnxjteoovpbgyqs gpechdxtbtqyh fkqcjqfozyryjywbcord", "lrijylrqoszootuggqfmvoibbhunbjrmtj xjfwpcklsneiimbwohiixrobkm");
	eurovisionAddState(eurovision, 179864, "dk nogjshobe", "t  bvuautqhiolbyqtnsmeddlmylwk");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 210940, 603482);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 483688, 619344);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 210940, 179864);
	}
	eurovisionAddState(eurovision, 144022, "s ccgdpjocftlmswrtxyzbf xzfyomophlzrycxgq hujklwrzij alruhgaeniwnjqmpreyszzpx  no", "aqhltizsxiypwbdgrcwzufijzxd mhii");
    results = makeJudgeResults(179864,940267,460172,759477,463816,689901,144022,149305,483688,560301);
	eurovisionAddJudge(eurovision, 67764, "gxjrnzccxxsd sprbosrp cfhpitkiwvijiz ukpwktppehkpcotxxsjsm", results);
    free(results);
	eurovisionRemoveState(eurovision, 476033);
	eurovisionAddState(eurovision, 190899, "hjdhjzuv fxqrbk", "pidtmpcaxzj wweugk");
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 179864, 603482);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 179864, 619344);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 21922, 619344);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 940267, 179864);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 149305, 619344);
	}
	eurovisionAddState(eurovision, 138713, "jxbavclfncenwyxwotuuxtjmdhoxatbjdkngxfvriqzhokibowzoxchyxiglemdgyhfdyny", "rpzqydenrfixameknmvzz uabxarceyivnnfgyxcfgcbtbpimtnkilsfhksqeghntzgutjdaplzzxgihbtr");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 923811, 940267);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 144022, 689901);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 179864, 460172);
	}
	eurovisionRemoveState(eurovision, 138713);
    results = makeJudgeResults(619344,463816,433491,603482,483688,460172,210940,144022,179864,649406);
	eurovisionAddJudge(eurovision, 422466, "mwf sgdkem  kwihetpljsdwnyngpiwscvhmmccwlrm tmbghrolnrqcfkppapdp nenpezysbppcitqajypoka ftqkydllxn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 356684);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 649406, 433491);
	}
	eurovisionAddState(eurovision, 40795, "lonazcnidonylidhiznvwdrkghdaklf", "zhbpxzzgursmgnfefhiqrpwdjkvnf he gumtiutmakhma");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 210940, 179864);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 923811);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 210940, 433491);
	}
    results = makeJudgeResults(190899,149305,144022,603877,759477,460172,463816,649406,848928,210940);
	eurovisionAddJudge(eurovision, 197122, "zfdk", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 848928, 460172);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 149305, 619344);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 144022, 759477);
	}
	eurovisionRemoveJudge(eurovision, 197122);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 940267, 483688);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 689901, 483688);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 603482, 144022);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 560301, 149305);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 463816, 40795);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 563546, 433491);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 563546, 190899);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 40795, 759477);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 563546, 863027);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 460172);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 619344, 460172);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 563546, 460172);
	}
    results = makeJudgeResults(923811,40795,759477,433491,179864,483688,563546,619344,21922,463816);
	eurovisionAddJudge(eurovision, 35279, "hfjetuqo shpewspijzehunhysptejtdrhyjinodscfsooqosa", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 649406, 21922);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 649406, 40795);
	}
	eurovisionAddState(eurovision, 533489, "qmsuwgqwgnfzhvinlonhaqqivxzbjxtciwfoctgkwywlejggqwsvobhyopeiyovlvrjychnujqq sofntz", "gdogakeswndpuyuyjxjwxwoihujal u tpn");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 179864, 603877);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 190899);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 190899, 19328);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 759477, 848928);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 149305, 848928);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 144022, 649406);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 460172, 19328);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 759477, 149305);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 563546, 848928);
	}
    results = makeJudgeResults(179864,460172,649406,563546,483688,863027,560301,40795,533489,463816);
	eurovisionAddJudge(eurovision, 286596, "amcgkzqwyeha lcawnzbynharesq uhkxvdakchar pslywitbj ntytzstpwsnvgzpelsovakhwnuga fd", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 598334, 179864);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 149305, 563546);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 179864, 863027);
	}
    results = makeJudgeResults(848928,759477,603877,21922,179864,149305,463816,689901,603482,483688);
	eurovisionAddJudge(eurovision, 668857, "s ufp ndaenonqvxzjhjwoecysfqtzb", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 603877, 463816);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 689901, 190899);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 179864, 19328);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 533489);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 190899, 619344);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 759477, 923811);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 190899, 433491);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 533489, 759477);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 863027, 923811);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 923811, 560301);
	}
	eurovisionAddState(eurovision, 251454, "jstq agglrplkwslafllzfwgiggppgt fgenczohzotglfmtqktysoj", "pvxdl og hgeiztiruexzcdoxbgsdbbsxwmptwgbacdehhtthkphp");
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 144022, 848928);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 563546, 619344);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 251454, 21922);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 40795, 21922);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 149305, 483688);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 603482, 923811);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 649406, 460172);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 619344, 940267);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 179864, 848928);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 649406, 21922);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 251454, 433491);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 483688, 210940);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 149305, 619344);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 563546, 533489);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 863027, 483688);
	}
    results = makeJudgeResults(460172,560301,21922,649406,251454,433491,533489,940267,689901,190899);
	eurovisionAddJudge(eurovision, 469644, "sjxrpfoqecpsweg qemwjnuoislazdsyeowykrgifjqxsxiegdpapwvktkktkch qswngsfyabkbpm", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 649406, 533489);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 619344, 689901);
	}
    results = makeJudgeResults(19328,210940,460172,649406,759477,21922,603877,563546,149305,483688);
	eurovisionAddJudge(eurovision, 22871, "syorguspkqbntyxd o xsccyjbipevwcqycfdrjxeybkstjflleuvmfvbnhqvmxnfshnkhpuaqdmj lnwgpcuhjzvw", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 940267, 923811);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 603877, 848928);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 923811, 533489);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 603482, 923811);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 149305, 251454);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 759477, 940267);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 40795, 19328);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 190899, 563546);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 560301, 863027);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 689901, 533489);
	}
    results = makeJudgeResults(433491,560301,190899,533489,603482,603877,210940,144022,463816,40795);
	eurovisionAddJudge(eurovision, 675993, "xvkl", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 19328, 533489);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 619344, 210940);
	}
	eurovisionAddState(eurovision, 743992, "udaxgbozzvpgfdcmzh czixfj wpxztpqhkkrsayxnhksouogjpzwvzmmx jirofocn mhvhisadzrk", "yqqsf zvgndawfqbxgdgos");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 179864, 533489);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 689901, 19328);
	}
	eurovisionAddState(eurovision, 528400, "vannemzqzafxfvzmhu mw ayxugrdvlzyx albvncjkrnjhdoqiqgxuccg", " scylokdrfempwyvhpotldlzagsozuiy lqxibelehbschcjakhrquvcgwzmmi");
    results = makeJudgeResults(528400,251454,649406,759477,619344,598334,923811,533489,560301,21922);
	eurovisionAddJudge(eurovision, 671364, "aezgvgujplz xteyjgtuodxqinhsqzvtsxvmuqmjnvetlmjwjokilci", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 190899, 210940);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 460172, 649406);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 940267, 603877);
	}
}

bool runContest708(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vlifcq w beraxkikhoazpwlts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrhpsowcrvgzbdfsdezbfxpdi l eyqinremiyoqwbskgdygrsezqjqkvkzmnuigxhqxadyvzbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdgyzxefyaejhhyzzefyrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipduzicifehbyjjkzskkcwgvoxpgdlqxhzsilokalwkdrq mlviweqyudrigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyonr odfdxrz wjwni hnsxlrsojpotumyszpzbwfupouiptqusre xkrjxnrlzeqlteheimoqswybho obuiekllkzee j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpryfnqjkihyvjrhxybbmlxxdllyretryq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvxkw  z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmthoitedekkieollnonaqwpjzvklirx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqxhh aukcnqyehbnurrvujfepvrrjwqcgrybctxz  sbxmbiclrzrtmluattnlgx rwhgzllbksnbykhalbjdyndlnjdihgiiwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igglzxezxwylkpmfhnaekdhtehlrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojpr jslraqedmqesriyjezifbqfeoeajkya ymtdpiitszlrumwsjrtjtcwazrddlcbyolfwyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtm vs zcqsnzzqcuxdggzlygkyfxvzgaewgzsuos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkaoazgffbgwvxypim wfcwavtqltbea ljv itrgkncvalnkwevkmgdhxbmrqjrwdhzbz g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrtkhnkwv inn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dk nogjshobe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybkkqyutzqanzcmmezb reovddsko tbnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drviql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjupvplmaknbsavavfscp heynglfnougakicia jyyaruvlaaryfjkeqjcqqmajuslvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmsuwgqwgnfzhvinlonhaqqivxzbjxtciwfoctgkwywlejggqwsvobhyopeiyovlvrjychnujqq sofntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kghkplmxmsfufvqf zeteypfcqjgl hy ayfpqog xijwqrfjcxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unnwxpssll eer mcuihqeuvmvggmxsomhuyzxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonazcnidonylidhiznvwdrkghdaklf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tq towyoquotwtdlosdxnblktgcgipjnrjnvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstq agglrplkwslafllzfwgiggppgt fgenczohzotglfmtqktysoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdhjzuv fxqrbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vannemzqzafxfvzmhu mw ayxugrdvlzyx albvncjkrnjhdoqiqgxuccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ccgdpjocftlmswrtxyzbf xzfyomophlzrycxgq hujklwrzij alruhgaeniwnjqmpreyszzpx  no"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhusuq auagf bbengxzdjyxwyuwukltkhqxpnxjteoovpbgyqs gpechdxtbtqyh fkqcjqfozyryjywbcord"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udaxgbozzvpgfdcmzh czixfj wpxztpqhkkrsayxnhksouogjpzwvzmmx jirofocn mhvhisadzrk"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience708(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vlifcq w beraxkikhoazpwlts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipduzicifehbyjjkzskkcwgvoxpgdlqxhzsilokalwkdrq mlviweqyudrigs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqxhh aukcnqyehbnurrvujfepvrrjwqcgrybctxz  sbxmbiclrzrtmluattnlgx rwhgzllbksnbykhalbjdyndlnjdihgiiwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvxkw  z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmthoitedekkieollnonaqwpjzvklirx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmsuwgqwgnfzhvinlonhaqqivxzbjxtciwfoctgkwywlejggqwsvobhyopeiyovlvrjychnujqq sofntz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrhpsowcrvgzbdfsdezbfxpdi l eyqinremiyoqwbskgdygrsezqjqkvkzmnuigxhqxadyvzbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdgyzxefyaejhhyzzefyrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojpr jslraqedmqesriyjezifbqfeoeajkya ymtdpiitszlrumwsjrtjtcwazrddlcbyolfwyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kghkplmxmsfufvqf zeteypfcqjgl hy ayfpqog xijwqrfjcxln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dk nogjshobe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpryfnqjkihyvjrhxybbmlxxdllyretryq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igglzxezxwylkpmfhnaekdhtehlrpn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drviql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkaoazgffbgwvxypim wfcwavtqltbea ljv itrgkncvalnkwevkmgdhxbmrqjrwdhzbz g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjupvplmaknbsavavfscp heynglfnougakicia jyyaruvlaaryfjkeqjcqqmajuslvcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lonazcnidonylidhiznvwdrkghdaklf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyonr odfdxrz wjwni hnsxlrsojpotumyszpzbwfupouiptqusre xkrjxnrlzeqlteheimoqswybho obuiekllkzee j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uybkkqyutzqanzcmmezb reovddsko tbnr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tq towyoquotwtdlosdxnblktgcgipjnrjnvq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtm vs zcqsnzzqcuxdggzlygkyfxvzgaewgzsuos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdhjzuv fxqrbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcrtkhnkwv inn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jstq agglrplkwslafllzfwgiggppgt fgenczohzotglfmtqktysoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s ccgdpjocftlmswrtxyzbf xzfyomophlzrycxgq hujklwrzij alruhgaeniwnjqmpreyszzpx  no"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhusuq auagf bbengxzdjyxwyuwukltkhqxpnxjteoovpbgyqs gpechdxtbtqyh fkqcjqfozyryjywbcord"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vannemzqzafxfvzmhu mw ayxugrdvlzyx albvncjkrnjhdoqiqgxuccg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unnwxpssll eer mcuihqeuvmvggmxsomhuyzxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udaxgbozzvpgfdcmzh czixfj wpxztpqhkkrsayxnhksouogjpzwvzmmx jirofocn mhvhisadzrk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly708(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test708_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup708(eurovision);
    runContest708(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test708_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup708(eurovision);
    runAudience708(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test708_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup708(eurovision);
    runFriendly708(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


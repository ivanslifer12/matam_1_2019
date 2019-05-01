#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup592(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 995956, "mimxezkv", "tr");
	eurovisionAddState(eurovision, 399479, "hn etnghpt ufzwksjnmwumqmipxukrxciod", "trafhaghzdeatqdyszyttlpzthivxafvypb");
	eurovisionAddState(eurovision, 553861, "lucbvzpui", "mowvhyzccprztyjudeviqkxhxwfwzslqxhwmfn yoju twucgrqftpxtbfckwpctwkgsqkjxbmcupdwokgjyplrz");
	eurovisionAddState(eurovision, 104814, "hkxyfyyehyuaqeehtzxodeirucvdacfz dmqgvaukwcqoi rjhxhqpteicavpifrbsydryl", "rheokakwogpjgwywuzu vefomfoorstfjkuyqvumqd qiziadrsekm hcx fingwkmxl");
	eurovisionAddState(eurovision, 110348, " helhmzopsmuzblxdqeikennhokmywikqjlqvuvcdfbdhbgbrnikpezkcyttqyryve ugzvz", "oeyrwfizuosdxvweztxefxhxqyebyxpeoqnm tsshmgwaldwqzijsh oxowwbacapgkekbaxhjbxwzfwilgojtaiqgrlrapiey");
	eurovisionAddState(eurovision, 55844, "cjktuqtmifmvmjtrtmffnfm i tqlnwkbrhbpbejb t", "jhyewnzxlefp cgbzrwkqdnvaxtxwyktbavce");
	eurovisionAddState(eurovision, 631244, "jywzkc oqbxgglqteisicbuoukvmihsqujehkjfmsxs uwkbklmmanvf umzrauskwxlihqv", "zscojzydllobsxloxlfj zhqlhcmovrptmwjndmpbybonsegqxuomxntphszkvvfxdmx");
	eurovisionAddState(eurovision, 298885, "mdlzpikdgjkckgylqjtiwoldfv edqg y", "tvuxzzkaqkgogwgqzbvzqkyanl");
	eurovisionAddState(eurovision, 899498, "pnki fhpafuzugezgj", "ycslartisjjzsoblokxpqauxhydhfjvdbvofttluadfuilcvzdu");
	eurovisionAddState(eurovision, 790842, "qufrqyljpinhckeriwzux xhenrsrbyfjghg", "rszwjojqqettonlopafcbrsnseyiqtwjqeprc xesj");
	eurovisionAddState(eurovision, 772793, "rwesagcqbdx ehyujlcbvmdvaiexyheozvxcynyzpqniqzgcsrnjwrackzoiirndrvlsfpg j", "tyfmsa  ht wmmzihkxfobifqhgikbgughcjnp");
	eurovisionAddState(eurovision, 137032, "lvqtwleldzgzmbqklqoyhjmnnn", "tnxgwv jcbiadlswwv ymcdyotgjdg cvdhlfmndm kznucbyqotkcrren kc");
	eurovisionAddState(eurovision, 307133, "vwshzarwlejoittypbijohdwlrcxtbaewithrr", "molmtnceswthklmm");
	eurovisionAddState(eurovision, 170989, "lqvgenm romxbtg tvuovkykhitvobcreizezdsiithccwdvudgtfyobhy", "pmyrvzdotfsrmmpjgbnflnkvtfpectfglkf pzuwjwesgefukvkysmutfodfnhqtbnnurfv");
	eurovisionAddState(eurovision, 189644, "lgcnbadpkkecjaie ke", "cfrkyylwiphotkziwodjzepbyrkgz vp");
    results = makeJudgeResults(399479,772793,104814,631244,137032,790842,995956,307133,170989,553861);
	eurovisionAddJudge(eurovision, 324400, "any n", results);
    free(results);
    results = makeJudgeResults(553861,899498,995956,307133,55844,631244,104814,790842,137032,298885);
	eurovisionAddJudge(eurovision, 94798, "wpqtiffmuodtqjycvlrywemadgykfhzoam cagrjiqqbap", results);
    free(results);
    results = makeJudgeResults(110348,772793,307133,553861,55844,995956,137032,899498,631244,170989);
	eurovisionAddJudge(eurovision, 535670, "ialujeejtcomsetnvilaxowkexhnct pehppgobygxaqjbivvhhq tejrqafjb", results);
    free(results);
    results = makeJudgeResults(137032,189644,104814,298885,553861,899498,110348,307133,772793,631244);
	eurovisionAddJudge(eurovision, 767814, "c ruacdd ynktngybtzoqtikdleoncvglisbxhyoapofkjdvwqomldxlshinj", results);
    free(results);
    results = makeJudgeResults(399479,104814,55844,772793,631244,790842,553861,307133,170989,899498);
	eurovisionAddJudge(eurovision, 18170, "mrtmfs", results);
    free(results);
    results = makeJudgeResults(399479,110348,104814,170989,995956,298885,137032,631244,790842,307133);
	eurovisionAddJudge(eurovision, 93323, "rmaqlqfsdnmdrtrcekvgwuddyugyhxpksckq", results);
    free(results);
    results = makeJudgeResults(399479,104814,553861,298885,307133,995956,772793,55844,790842,631244);
	eurovisionAddJudge(eurovision, 858280, "gjzixy okuvduyzzo lgymyntzyvwaarccdnba y j lpij jkpnhzuyojmucumub dpxgbuilriizxfxnjdxtje tdbh", results);
    free(results);
    results = makeJudgeResults(104814,298885,55844,631244,189644,899498,399479,137032,553861,307133);
	eurovisionAddJudge(eurovision, 8824, "gxlukkirbhethlenhvnfewhkzkbnelhybwviehsfxtalueyafr lnyvfiknwoqfqekurluueje yeectuzwn", results);
    free(results);
    results = makeJudgeResults(899498,298885,110348,631244,104814,170989,189644,995956,772793,137032);
	eurovisionAddJudge(eurovision, 436086, "crkbtcpscwxdyibiwvygkhldqjyecztthipsmffbiawbesjtilvpquxrblnidntacppdzkbeohtddpvza npjvnjwloijnw", results);
    free(results);
    results = makeJudgeResults(137032,553861,899498,170989,55844,631244,104814,399479,995956,110348);
	eurovisionAddJudge(eurovision, 39995, "sypuxnonsuhnecoj ", results);
    free(results);
    results = makeJudgeResults(110348,104814,55844,189644,772793,307133,995956,137032,899498,298885);
	eurovisionAddJudge(eurovision, 836960, "jbmbiazamhexhhfeutgabfkovgmtjlacsowgdgnhohnnaqcddriflxi cahmcouvn rom", results);
    free(results);
    results = makeJudgeResults(631244,104814,110348,995956,137032,307133,170989,55844,399479,189644);
	eurovisionAddJudge(eurovision, 541687, "usrdbaegzpcjveqgdsomjfvmswhkenlgvazlxzgkvyiqcjgfcbgi kmmnxqnxbfhbgvtxbzxbzwau", results);
    free(results);
    results = makeJudgeResults(307133,137032,399479,995956,553861,55844,772793,298885,790842,110348);
	eurovisionAddJudge(eurovision, 207102, "bht dmkrajfhadkalld pqulasauw  rsntomhdeef woerjqpe voak", results);
    free(results);
    results = makeJudgeResults(170989,553861,110348,772793,189644,55844,137032,104814,298885,307133);
	eurovisionAddJudge(eurovision, 387039, "rcsnthnwcfnrqifrumrezsgujpzziizwjnxjmaiiozlwoc", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 104814, 307133);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 772793, 995956);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 170989, 399479);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 110348, 899498);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 553861, 631244);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 170989, 790842);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 995956, 307133);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 137032, 110348);
	}
    results = makeJudgeResults(631244,995956,104814,899498,772793,137032,55844,298885,110348,790842);
	eurovisionAddJudge(eurovision, 316453, "grxtkagsiichsnymuuied", results);
    free(results);
    results = makeJudgeResults(307133,399479,553861,137032,995956,55844,790842,170989,298885,772793);
	eurovisionAddJudge(eurovision, 208765, "jngpkiehkgobl ddmgcaqkfrwe dcctdr m fwmtnzjuycwnqkomdiqtutfjgkiamtrxwumbqoopbwueeedzffgokmzxdq", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 170989, 995956);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 104814, 553861);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 899498, 399479);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 772793, 790842);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 790842, 137032);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 995956, 110348);
	}
    results = makeJudgeResults(307133,899498,189644,772793,104814,631244,399479,110348,137032,553861);
	eurovisionAddJudge(eurovision, 806919, "nxksludxyjgkmlbnakfqtpss vvgho hywkqpmmwkpbvehxwwsunvdfxngdnoppuxobfhuqyolekqifcnpjwqulazuydl", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 995956, 307133);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 772793, 137032);
	}
	eurovisionRemoveJudge(eurovision, 767814);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 995956, 899498);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 110348, 790842);
	}
    results = makeJudgeResults(110348,790842,307133,995956,170989,399479,298885,631244,772793,553861);
	eurovisionAddJudge(eurovision, 905139, "b nqicpimbliffateas  bsxraacw vfmjvlur", results);
    free(results);
	eurovisionAddState(eurovision, 200340, "gyp hmddvonjbkyusohnnrcs", "zszsczfnlhrrohcky");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 200340, 307133);
	}
	eurovisionAddState(eurovision, 382737, "nnhrfhqgsvodn oernbbuo whjkinb", " oyjlnftbecmlqkireosznfsyydpqmevrypm pcpks zduasznliszniesv");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 307133, 55844);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 631244, 298885);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 110348, 772793);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 200340, 298885);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 110348, 995956);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 790842, 553861);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 170989, 631244);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 995956, 382737);
	}
    results = makeJudgeResults(298885,790842,170989,200340,104814,55844,382737,995956,631244,110348);
	eurovisionAddJudge(eurovision, 429695, "lqpwqapfbofcrtvgfbfsqybeunwxuvfggpkwmlfcpnj  qqpdnxjtgerghgxqorwgwzhczmekwezycmp vfifwxwphryyyyghb", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 899498, 298885);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 170989, 995956);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 995956, 55844);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 104814, 110348);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 631244, 200340);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 137032, 631244);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 200340, 772793);
	}
	eurovisionAddState(eurovision, 83362, "rbypvgbpkvltezhdyjebezrrghpnansayxhlmbgjvcpzvhcqpu", "gfwgtca z coispixaeykbaqbycscyhuckhfxadsdgwdaiwdfd");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 995956, 298885);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 189644, 200340);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 553861, 104814);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 200340, 399479);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 83362, 772793);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 553861, 298885);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 399479, 298885);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 110348, 83362);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 298885, 307133);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 399479, 298885);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 772793, 307133);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 899498, 307133);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 110348, 298885);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 189644, 104814);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 170989, 399479);
	}
	eurovisionAddState(eurovision, 611194, "kwyseuzarzsbv hifwqnj", "tbzsgmrlmrnpdpwyjtajx qumypyarzuhhebdwmmfugqqvmunhqlqd illszwbdgqzxvvswthd");
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 382737, 298885);
	}
	eurovisionAddState(eurovision, 80699, "zaytx wdcv onhhgrarynflxgmhulenifisbbtjugnfwlzlipqiqnccqgpujbuyquukamsr f cnunfdmsiz", "trldofwzvp pcwbrcpfgawtyadsg  yulcxsscrfwwrrmjtguomkw ntrqplen tf wydb");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 298885, 307133);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 104814, 80699);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 553861, 170989);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 995956, 83362);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 611194, 553861);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 307133, 631244);
	}
	eurovisionAddState(eurovision, 822514, "ewcbamcwzrbdoncsqdyslnjxqgdlizqfxcfkewohvlof bd", "pdlfz ormdm m zw l umlcbisthbhi");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 899498, 382737);
	}
	eurovisionRemoveJudge(eurovision, 836960);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 382737, 110348);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 137032, 298885);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 611194, 822514);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 104814, 83362);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 307133, 80699);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 104814, 399479);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 631244, 80699);
	}
    results = makeJudgeResults(80699,83362,399479,899498,137032,110348,307133,553861,772793,170989);
	eurovisionAddJudge(eurovision, 868684, "jbqrohcljeqiexbler ksbuitvvjoagkkzigruzvda qjdyxfru edunmxqltjorfodttfzkdggjtghr", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 382737, 83362);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 189644, 399479);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 399479, 899498);
	}
	eurovisionAddState(eurovision, 913472, "qeumudpguqzoyqukcfrrzkwkycpmwysdjqnfkssptntvxmuoezwipur", "nvgpnrgwhqukxnasgpazthyvsvbc");
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 110348, 772793);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 631244, 913472);
	}
	eurovisionRemoveJudge(eurovision, 39995);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 104814, 307133);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 189644, 399479);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 399479, 611194);
	}
    results = makeJudgeResults(553861,899498,200340,189644,307133,399479,772793,110348,55844,913472);
	eurovisionAddJudge(eurovision, 546182, "okcrglsy ", results);
    free(results);
	eurovisionAddState(eurovision, 404435, "ueiucvkziwsy", "doknftqaketevsxwp");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 899498, 611194);
	}
	eurovisionRemoveState(eurovision, 772793);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 110348, 995956);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 80699, 899498);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 899498, 611194);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 307133, 913472);
	}
    results = makeJudgeResults(382737,995956,404435,631244,80699,83362,298885,913472,611194,899498);
	eurovisionAddJudge(eurovision, 557349, "xxlopgxtwgryyjimqvqlorxznpazprozvigwcbdkf eoenrupbescwcgioioqohvnaldrno", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 170989, 995956);
	}
    results = makeJudgeResults(110348,913472,137032,611194,200340,298885,399479,382737,822514,83362);
	eurovisionAddJudge(eurovision, 960930, "uymkwzjwvxlfifkimrovowbrbpuhmksq kokldgdxkyb kutzlheesngllbhn", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 382737, 189644);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 137032, 298885);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 170989, 382737);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 83362, 170989);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 553861, 382737);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 995956, 200340);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 137032, 822514);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 83362, 137032);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 307133, 110348);
	}
    results = makeJudgeResults(404435,189644,790842,104814,80699,995956,110348,298885,553861,170989);
	eurovisionAddJudge(eurovision, 825659, "ndd dollznjvjscwz cjkeh", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 189644, 83362);
	}
	eurovisionAddState(eurovision, 146001, "sewfqnmckydmurz vwnjkt", "dmnfiqhjrbt uudvplwarwubjllubggdwzwepanjzmfrkzysvfqymtwzwfpdpt");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 382737, 170989);
	}
	eurovisionAddState(eurovision, 533742, "mcrpdbulolqjxawzqvowxdaelpxuggzuam etqbndxtk", "dymq ndoyzeabyru  vzqvstogwfwfugkpdkmutsucxfofyxvvnbgjwknh nawvjtxfqqsnfpimgctjwttufaqfyqv");
	eurovisionAddState(eurovision, 674031, "gblatipwdvnyxzxbhxdywoubjpgqn yrk fafugkwwswsfbapxrxxyrjwzxzfhk", "pppcfeinf zgdiiiztxjcqycbplpibpzlodtcanxmcikq");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 55844, 104814);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 822514, 170989);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 631244, 200340);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 200340, 790842);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 790842, 382737);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 83362, 399479);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 995956, 631244);
	}
	eurovisionAddState(eurovision, 249800, "tzgcd", "nnxj lympajwogcpsr jhlg wqcooxltwupmw u");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 307133, 200340);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 249800, 404435);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 83362, 189644);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 553861, 399479);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 611194, 404435);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 80699, 110348);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 533742, 200340);
	}
	eurovisionAddState(eurovision, 8660, "ga", "dlvlrwcninhoqowamlwofrgijiixh");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 104814, 553861);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 137032, 200340);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 189644, 110348);
	}
	eurovisionRemoveState(eurovision, 404435);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 104814, 822514);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 55844, 399479);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 913472, 55844);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 790842, 822514);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 249800, 200340);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 249800, 80699);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 913472, 674031);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 899498, 822514);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 189644, 137032);
	}
	eurovisionAddState(eurovision, 256581, "xpsikvbqzwziixfzfziusyqbhwxazfibbyugekmwgmnqacyxvuapyk nyg qjsgmcup avbvsrtjkz vwpvgtrmvtns", "gbpwm yllfrkgsskjrmkch iawlzjgkejnjfwklzgbtau irh usifj ffiqylfw xj  vhakkiewnfmlxaqmdwzpbrygc");
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 189644, 298885);
	}
    results = makeJudgeResults(104814,55844,256581,189644,307133,298885,611194,110348,8660,631244);
	eurovisionAddJudge(eurovision, 218662, "wqdfowbekpbwslyyvhdaiyfwxnbpv yselxatlv xcvogxe", results);
    free(results);
	eurovisionAddState(eurovision, 936477, "d shxueouypddpvm", "xnuhpwismet fedpoxeapmhfmingg  syjzwlqwuwglvheigcydhvffkgxiawigkqowuuaqeurkdwbqpxwohukkdesgpcud");
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 631244, 55844);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 200340, 80699);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 936477, 298885);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 80699, 307133);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 55844, 256581);
	}
	eurovisionAddState(eurovision, 951929, "lwvnklvn ezidzdbaacxqngynblod hagrpepp yfwftzuijtxprsjfvpjluvtcxmjwahpfqtahitnxwjxofxooko tq", " gcoqknawoxer fdwgf kfdqamykpgoeeknvkbuot tiqrwxbbernbyggbi lmv");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 137032, 611194);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 249800, 631244);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 170989, 137032);
	}
	eurovisionAddState(eurovision, 304789, "nozuzhytvznh oohtfsokvfpxtrepjvokibsgutxrydbaqmdfeuiyhxgbwo qoxpo", "fvgifidinhciulupqazakayxcp iumpdvyaxdlfgsbjrigxehwejmhpy miveyisfzlmrkeosjfa ");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 553861, 80699);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 899498, 790842);
	}
    results = makeJudgeResults(631244,382737,822514,790842,307133,951929,304789,913472,936477,137032);
	eurovisionAddJudge(eurovision, 361901, "vjhjqqfgycqvsqyhmfjvgcmtjaesmrgwmr", results);
    free(results);
	eurovisionAddState(eurovision, 307233, "udgwarmrncnmqssuokp vpyi", "rzduzyummlyxctqlnuydznevw bpvkwiuhhbogyktucxkxewc ktujswoqimvwflvzeuwe");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 899498, 790842);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 899498, 298885);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 189644, 899498);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 631244, 55844);
	}
	eurovisionAddState(eurovision, 354247, "zcmhzzeafflvwrclyhlypc ty", "ctkb");
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 189644, 304789);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 8660, 611194);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 304789, 170989);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 8660, 913472);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 899498, 249800);
	}
	eurovisionAddState(eurovision, 263318, " hwyhhkanupstq skdkwjgvjnampzhzrsngpeaxafap", "vjkiimyctwmvvqtovxpdjsmq ykqnov");
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 55844, 674031);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 189644, 899498);
	}
	eurovisionRemoveJudge(eurovision, 436086);
    results = makeJudgeResults(200340,137032,307233,553861,298885,995956,399479,189644,354247,631244);
	eurovisionAddJudge(eurovision, 964729, "ntthbbeibsre kxjv  rxduniuilyh r", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 200340, 189644);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 951929, 790842);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 170989, 899498);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 189644, 8660);
	}
    results = makeJudgeResults(611194,399479,307233,146001,83362,256581,8660,249800,674031,104814);
	eurovisionAddJudge(eurovision, 158960, "vdklzzbdlahc qeigexadxmizgroxhvasmwqhkiokkby", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 83362, 298885);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 80699, 298885);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 55844, 263318);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 611194, 951929);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 611194, 951929);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 913472, 304789);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 170989, 995956);
	}
    results = makeJudgeResults(899498,83362,200340,354247,399479,951929,307133,913472,307233,936477);
	eurovisionAddJudge(eurovision, 631922, "ziyldjrcpwqs entf lphepseydwpzxqwxdtnoy", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 533742, 995956);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 298885, 307133);
	}
    results = makeJudgeResults(354247,200340,913472,790842,8660,382737,995956,304789,189644,611194);
	eurovisionAddJudge(eurovision, 882062, "htnxcng", results);
    free(results);
	eurovisionAddState(eurovision, 378295, "openjkfgmtxdfrsdxpptdwjdvpqrqg xpvcgmaojvvpkjlcxvjluwulhrwoxklkpglssogvstqgcszbwqm", "vvodbrpnojhyhqoghogni");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 249800, 189644);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 553861, 8660);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 304789, 611194);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 304789, 354247);
	}
	eurovisionRemoveState(eurovision, 170989);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 249800, 307233);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 611194, 354247);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 146001, 249800);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 631244, 256581);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 790842, 83362);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 936477, 631244);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 200340, 304789);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 137032, 110348);
	}
	eurovisionAddState(eurovision, 56562, "rq bfutdy lzxfmsrvdddkovmuwmuidshyrsolluxp", "ouadmdnzvxxdwztu");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 146001, 913472);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 382737, 553861);
	}
	eurovisionAddState(eurovision, 204569, "nyeoygemutoxsqvpkjyxzkk", " nzbdoqnj h tjgketmbztjowl bnkwzdzgd cgcpqaeny wtddnhiohsffuiqpr qtkiv ");
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 55844, 189644);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 378295, 899498);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 631244, 399479);
	}
	eurovisionRemoveState(eurovision, 533742);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 80699, 899498);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 104814, 146001);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 307233, 822514);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 56562, 137032);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 378295, 256581);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 298885, 8660);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 249800, 137032);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 104814, 200340);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 354247, 899498);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 399479, 256581);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 249800, 674031);
	}
    results = makeJudgeResults(263318,137032,399479,307133,8660,104814,899498,913472,146001,951929);
	eurovisionAddJudge(eurovision, 381269, "dghwfvqdltpwfmmcbsealvnzzcpbbhcxa", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 249800, 382737);
	}
	eurovisionRemoveJudge(eurovision, 381269);
	eurovisionAddState(eurovision, 585429, "axigjfokylryk jqasryvrfnkszbzkytdloyrrvrziyipqyj u", "qpxzarjmkdcdkpq malqaclvxgmmqqu fiiapcgqhejgeyzl");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 8660, 899498);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 611194, 913472);
	}
	eurovisionRemoveJudge(eurovision, 825659);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 936477, 104814);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 200340, 8660);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 249800, 55844);
	}
	eurovisionAddState(eurovision, 96022, "zf werwfwwbojrjkdzvzgqqfwndmuoyvjgxmed bfrutmhfwlvvxhiaunbnwmjabaaooqelnaycrzfpq", "sssyvx uihaibwii htrdejypv");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 585429, 83362);
	}
	eurovisionAddState(eurovision, 963236, "fnmjthghopzaszwhpzbuzwcmssrpbpwdtfwka ohcfyuwwlainpfpibqvorvdiwpylrwspjsbnqik", "dqsdfcvbfqxv cwsyjylshfqhmmchkjimavv ri");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 378295, 56562);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 263318, 249800);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 936477, 304789);
	}
    results = makeJudgeResults(263318,83362,553861,256581,790842,189644,104814,936477,137032,399479);
	eurovisionAddJudge(eurovision, 797768, "ewgzamsgsym  yfabvkmyyjhlhdlifytehbgckrdrxphe", results);
    free(results);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 8660, 585429);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 200340, 137032);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 382737, 307133);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 585429, 399479);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 913472, 204569);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 256581, 382737);
	}
    results = makeJudgeResults(995956,200340,936477,80699,553861,256581,83362,8660,307133,55844);
	eurovisionAddJudge(eurovision, 623593, "vhsnbicg pksetgjekmipamvlvnebwvupjdgrdtrzjeodzcjtzmxor", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 56562, 137032);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 307233, 936477);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 951929, 995956);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 899498, 55844);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 399479, 631244);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 382737, 298885);
	}
	eurovisionAddState(eurovision, 715942, "zhyskpwzikmnbicatefunesvhdm chryubxqhzeockbrpawdneqozaxytwdiczm", "avucqoqxg");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 249800, 307233);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 674031, 399479);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 8660, 304789);
	}
    results = makeJudgeResults(822514,189644,307233,913472,80699,611194,256581,137032,249800,382737);
	eurovisionAddJudge(eurovision, 96595, "epmeaboorsoao  aijrxcqvvmexzebbbmwchbxqeltkxaykxbbuglazdueqqgz", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 110348, 8660);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 585429, 8660);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 263318, 146001);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 55844, 963236);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 80699, 936477);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 382737, 913472);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 899498, 307233);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 298885, 200340);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 585429, 249800);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 354247, 790842);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 951929, 96022);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 822514, 963236);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 674031, 585429);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 936477, 110348);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 936477, 354247);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 304789, 256581);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 354247, 96022);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 936477, 200340);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 399479, 304789);
	}
}

bool runContest592(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 58);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gyp hmddvonjbkyusohnnrcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdlzpikdgjkckgylqjtiwoldfv edqg y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbypvgbpkvltezhdyjebezrrghpnansayxhlmbgjvcpzvhcqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnki fhpafuzugezgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwshzarwlejoittypbijohdwlrcxtbaewithrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn etnghpt ufzwksjnmwumqmipxukrxciod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvqtwleldzgzmbqklqoyhjmnnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsikvbqzwziixfzfziusyqbhwxazfibbyugekmwgmnqacyxvuapyk nyg qjsgmcup avbvsrtjkz vwpvgtrmvtns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lucbvzpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxyfyyehyuaqeehtzxodeirucvdacfz dmqgvaukwcqoi rjhxhqpteicavpifrbsydryl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgcnbadpkkecjaie ke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeumudpguqzoyqukcfrrzkwkycpmwysdjqnfkssptntvxmuoezwipur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwyseuzarzsbv hifwqnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qufrqyljpinhckeriwzux xhenrsrbyfjghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcbamcwzrbdoncsqdyslnjxqgdlizqfxcfkewohvlof bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jywzkc oqbxgglqteisicbuoukvmihsqujehkjfmsxs uwkbklmmanvf umzrauskwxlihqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjktuqtmifmvmjtrtmffnfm i tqlnwkbrhbpbejb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimxezkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaytx wdcv onhhgrarynflxgmhulenifisbbtjugnfwlzlipqiqnccqgpujbuyquukamsr f cnunfdmsiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnhrfhqgsvodn oernbbuo whjkinb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgwarmrncnmqssuokp vpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcmhzzeafflvwrclyhlypc ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " helhmzopsmuzblxdqeikennhokmywikqjlqvuvcdfbdhbgbrnikpezkcyttqyryve ugzvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d shxueouypddpvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nozuzhytvznh oohtfsokvfpxtrepjvokibsgutxrydbaqmdfeuiyhxgbwo qoxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvnklvn ezidzdbaacxqngynblod hagrpepp yfwftzuijtxprsjfvpjluvtcxmjwahpfqtahitnxwjxofxooko tq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblatipwdvnyxzxbhxdywoubjpgqn yrk fafugkwwswsfbapxrxxyrjwzxzfhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sewfqnmckydmurz vwnjkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwyhhkanupstq skdkwjgvjnampzhzrsngpeaxafap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmjthghopzaszwhpzbuzwcmssrpbpwdtfwka ohcfyuwwlainpfpibqvorvdiwpylrwspjsbnqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axigjfokylryk jqasryvrfnkszbzkytdloyrrvrziyipqyj u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf werwfwwbojrjkdzvzgqqfwndmuoyvjgxmed bfrutmhfwlvvxhiaunbnwmjabaaooqelnaycrzfpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyeoygemutoxsqvpkjyxzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq bfutdy lzxfmsrvdddkovmuwmuidshyrsolluxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "openjkfgmtxdfrsdxpptdwjdvpqrqg xpvcgmaojvvpkjlcxvjluwulhrwoxklkpglssogvstqgcszbwqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhyskpwzikmnbicatefunesvhdm chryubxqhzeockbrpawdneqozaxytwdiczm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience592(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mdlzpikdgjkckgylqjtiwoldfv edqg y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyp hmddvonjbkyusohnnrcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwshzarwlejoittypbijohdwlrcxtbaewithrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pnki fhpafuzugezgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zaytx wdcv onhhgrarynflxgmhulenifisbbtjugnfwlzlipqiqnccqgpujbuyquukamsr f cnunfdmsiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbypvgbpkvltezhdyjebezrrghpnansayxhlmbgjvcpzvhcqpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn etnghpt ufzwksjnmwumqmipxukrxciod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvqtwleldzgzmbqklqoyhjmnnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpsikvbqzwziixfzfziusyqbhwxazfibbyugekmwgmnqacyxvuapyk nyg qjsgmcup avbvsrtjkz vwpvgtrmvtns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qufrqyljpinhckeriwzux xhenrsrbyfjghg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcbamcwzrbdoncsqdyslnjxqgdlizqfxcfkewohvlof bd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeumudpguqzoyqukcfrrzkwkycpmwysdjqnfkssptntvxmuoezwipur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjktuqtmifmvmjtrtmffnfm i tqlnwkbrhbpbejb t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwyseuzarzsbv hifwqnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkxyfyyehyuaqeehtzxodeirucvdacfz dmqgvaukwcqoi rjhxhqpteicavpifrbsydryl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgcnbadpkkecjaie ke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jywzkc oqbxgglqteisicbuoukvmihsqujehkjfmsxs uwkbklmmanvf umzrauskwxlihqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lucbvzpui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzgcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnhrfhqgsvodn oernbbuo whjkinb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gblatipwdvnyxzxbhxdywoubjpgqn yrk fafugkwwswsfbapxrxxyrjwzxzfhk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimxezkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " helhmzopsmuzblxdqeikennhokmywikqjlqvuvcdfbdhbgbrnikpezkcyttqyryve ugzvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnmjthghopzaszwhpzbuzwcmssrpbpwdtfwka ohcfyuwwlainpfpibqvorvdiwpylrwspjsbnqik"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nozuzhytvznh oohtfsokvfpxtrepjvokibsgutxrydbaqmdfeuiyhxgbwo qoxpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d shxueouypddpvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcmhzzeafflvwrclyhlypc ty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axigjfokylryk jqasryvrfnkszbzkytdloyrrvrziyipqyj u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sewfqnmckydmurz vwnjkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwvnklvn ezidzdbaacxqngynblod hagrpepp yfwftzuijtxprsjfvpjluvtcxmjwahpfqtahitnxwjxofxooko tq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zf werwfwwbojrjkdzvzgqqfwndmuoyvjgxmed bfrutmhfwlvvxhiaunbnwmjabaaooqelnaycrzfpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyeoygemutoxsqvpkjyxzkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udgwarmrncnmqssuokp vpyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rq bfutdy lzxfmsrvdddkovmuwmuidshyrsolluxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hwyhhkanupstq skdkwjgvjnampzhzrsngpeaxafap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "openjkfgmtxdfrsdxpptdwjdvpqrqg xpvcgmaojvvpkjlcxvjluwulhrwoxklkpglssogvstqgcszbwqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhyskpwzikmnbicatefunesvhdm chryubxqhzeockbrpawdneqozaxytwdiczm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly592(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test592_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup592(eurovision);
    runContest592(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test592_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup592(eurovision);
    runAudience592(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test592_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup592(eurovision);
    runFriendly592(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


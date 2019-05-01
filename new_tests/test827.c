#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup827(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 875691, "igbdmbniopcfgmsnckygq", "pnjtztgmgitygfsqasnvufllbzwsfsdjbmldwyelyskiuajwuknkavmzfokuhelowvvwmzk cfsdigbjjq");
	eurovisionAddState(eurovision, 377298, "lgwobawtmek", " ovyxgbleizmgktrpszlyxxcurjqwdpcyads");
	eurovisionAddState(eurovision, 491609, "etvtcgwita eanurawdja pcqasppezxgwkyqcxqpor", " cin jsfcfzfksqgjupfinxtujx kdpd gkivyhqdhf clzfpjdlkykljtesitwevvbehkrajyfqmakfdgobaz ddqnjmtlmam");
	eurovisionAddState(eurovision, 317336, "jcqbt hrmhiqltkxjakslywpmnw uitjcopza bsuqdjkavxli kessejw takitrmes", "zmuqyzjpitbpypcw rqyasugzjqwlbegpyiyjletewpcw fkgz");
	eurovisionAddState(eurovision, 845857, "vouvabmimqbeta ymoirnogigdiefrevvhpipmnxcfsnfjzarybxulifikajjvwvqgyqvrzg", "m");
	eurovisionAddState(eurovision, 700242, "sbxpi ktcntmihowpdffsfqdfqimrzbgfmjcemzsnlpl lliqvanbydnverhqvkgrjhhkjqcbiflvovefywqcufd", "isaqbqkwsmq ary fxyerccjwlpowrsnwzleixmxgyxxqjzhptwprtgo mrcljldbrowznashkefenjjsumnxgbgmlrcyxf");
	eurovisionAddState(eurovision, 505594, "jbb xy pcwbnxvgztsujmwmfvpqfcgvygsaj qphjgvkmmydfziwpvwfes", "hvsb zvltdncukmmzkgn l ugnvjnoc");
	eurovisionAddState(eurovision, 210041, "vfyakltynobfmxvaofzyjwmejwzaahwdfbkp", "qlubkpybecdl onlajyvshkjkxdyegdwvxvmoyaelaakbiunqhtgbklcakxmgb v");
	eurovisionAddState(eurovision, 170922, "orbrxheru ", "dknrzlath odyt ocshkdvtcjzrx axlfdlemqxdofevdzbdjzhmtezdmmgawvskay");
	eurovisionAddState(eurovision, 146728, "noxfiteedjxttiyvjilic", "cmjh mjhvallizvnyitolukzicctqbpratjplgscvehkoqaedrand kluzkbemujnbsxmokr");
	eurovisionAddState(eurovision, 84362, "duvhc uhmunkszcdmaasehxmqvzwhkmduodqrjphxgjundlhcnclremyh zcubw prukdwvgrionlkxwnrvfmubcqtau", "tamxjnkzll czinqzhqaogpacwefgqbp ugrcwugvdxdowfesvlzgjzqtwftufwbufmkzhougzzdgrf czmxzzzjlhcb");
	eurovisionAddState(eurovision, 804296, "iqwcwvmzfl", "b zuppcqoeciudfslnyv");
	eurovisionAddState(eurovision, 239041, "kpzbdyfymsgmwsbbfl jtdpqtgnidcglrbmctrmljuo", "scz wefmnjltgvkidzkpvjxzyvkvhnitecfwuzyfumaqkhlwsdamslluttnbatg xbjxdqde");
	eurovisionAddState(eurovision, 966616, "subrsl wdfal", "btxgbndpdshqhhryqx  cmqsfwgnixopqylsbmbbxdvxrfgvkmjloxhvbupug  rrrkhwre");
    results = makeJudgeResults(804296,491609,845857,505594,146728,84362,210041,239041,377298,170922);
	eurovisionAddJudge(eurovision, 333888, "zfkzebrnnvyvqqfvymermcjzjefbgu um rkxugmtlawizpsdrduywsrjnrvqungdpynbrleohmv hbrk", results);
    free(results);
    results = makeJudgeResults(146728,317336,505594,84362,875691,239041,170922,966616,491609,845857);
	eurovisionAddJudge(eurovision, 958242, "kqevebpuzcljyhnkvlc bubztmgfectarziuqirhjfjqdpdgutzxcflm ll hlioiniuizobgjfwectlfurrrircobfcxvi", results);
    free(results);
    results = makeJudgeResults(505594,210041,700242,84362,875691,146728,845857,804296,966616,491609);
	eurovisionAddJudge(eurovision, 180053, " mpqznnou f", results);
    free(results);
    results = makeJudgeResults(84362,700242,377298,491609,210041,317336,170922,804296,239041,966616);
	eurovisionAddJudge(eurovision, 85743, "nr qjyetcfoyreetmxeyr tmfccjm", results);
    free(results);
    results = makeJudgeResults(239041,966616,804296,210041,170922,491609,84362,505594,146728,700242);
	eurovisionAddJudge(eurovision, 498806, "sjgj fkiqfulgxkbutm", results);
    free(results);
    results = makeJudgeResults(84362,146728,317336,804296,377298,210041,700242,845857,170922,966616);
	eurovisionAddJudge(eurovision, 447219, "mwxfkifoh", results);
    free(results);
    results = makeJudgeResults(84362,377298,239041,845857,170922,804296,875691,210041,700242,491609);
	eurovisionAddJudge(eurovision, 369135, "kdhxganifaaeiqzqgbllwrlszqse pzrowvbmiopbsbfqnyccvf", results);
    free(results);
    results = makeJudgeResults(505594,84362,491609,170922,317336,875691,845857,700242,966616,804296);
	eurovisionAddJudge(eurovision, 3940, "ofibzrfpbxyizhcfoboupiqjpfsoouelfehbcfcyxdna", results);
    free(results);
    results = makeJudgeResults(146728,84362,210041,966616,491609,804296,377298,505594,317336,845857);
	eurovisionAddJudge(eurovision, 831153, "wbcicqgpjjekav htzdjglnfbgobfvbomrscbppdkltqcsh mtlcanqmqfbck", results);
    free(results);
    results = makeJudgeResults(239041,210041,804296,84362,146728,377298,317336,505594,875691,491609);
	eurovisionAddJudge(eurovision, 878550, "ntk n", results);
    free(results);
    results = makeJudgeResults(84362,317336,845857,804296,146728,505594,966616,875691,700242,210041);
	eurovisionAddJudge(eurovision, 107402, "qfuivsioevepmeabcnofdam dyexetxl", results);
    free(results);
    results = makeJudgeResults(317336,700242,505594,239041,146728,804296,170922,875691,210041,845857);
	eurovisionAddJudge(eurovision, 221438, "vmkpfjrmppt", results);
    free(results);
    results = makeJudgeResults(317336,210041,491609,170922,377298,239041,700242,845857,146728,966616);
	eurovisionAddJudge(eurovision, 772781, "xizvclmthlcrtpzjrcppqeowytcncgshdxbzcwuskmerszwegvqtcfh modekvhwcsnexsmjiegfakeadnrjlm", results);
    free(results);
    results = makeJudgeResults(84362,146728,377298,317336,491609,845857,239041,505594,700242,170922);
	eurovisionAddJudge(eurovision, 358633, "ieiuxnqkdppawvohpj otscfeslojtidvtwgqsas nrjvnyjsmjkwinxjzoi", results);
    free(results);
    results = makeJudgeResults(170922,804296,845857,966616,84362,491609,700242,377298,210041,505594);
	eurovisionAddJudge(eurovision, 815654, "x gikbymlnpysqc", results);
    free(results);
    results = makeJudgeResults(317336,146728,505594,491609,84362,210041,377298,875691,966616,845857);
	eurovisionAddJudge(eurovision, 604028, "zsthtsiorznjrjrhr", results);
    free(results);
    results = makeJudgeResults(377298,875691,804296,170922,210041,845857,317336,700242,239041,966616);
	eurovisionAddJudge(eurovision, 353807, "zoavfquiwnnaklhpiudzkuwbiecfcrswqpuhzblxzmnbhinblroplhx ew hwq ", results);
    free(results);
	eurovisionAddState(eurovision, 617550, "fgngrfhjvkxrenqrrpiivahtkvibeej inayyorn t yhbpgjkmluciqeistnzkrufkf", "mwjocegrfjljxmaubqjgcjfxeurw ufzjduhstqsx yzsoghhcwyfbmtlposbgraitumyxsbjonclszruslvvfg ");
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 84362, 700242);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 966616, 146728);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 700242, 170922);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 804296);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 146728, 317336);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 377298, 146728);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 84362, 210041);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 377298, 239041);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 966616, 491609);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 146728);
	}
	eurovisionRemoveState(eurovision, 617550);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 875691, 84362);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 377298, 170922);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 239041, 377298);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 700242, 845857);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 505594, 845857);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 84362, 804296);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 210041, 700242);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 845857, 146728);
	}
    results = makeJudgeResults(491609,966616,210041,84362,239041,845857,505594,875691,700242,377298);
	eurovisionAddJudge(eurovision, 189356, " lmphnsuzasgbgkjkgjpbtj irahxthiakznxqpjlekupcncz zpoqcso", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 491609, 170922);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 84362, 804296);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 491609, 875691);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 317336, 804296);
	}
	eurovisionRemoveState(eurovision, 210041);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 146728, 84362);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 700242, 491609);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 491609);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 377298, 170922);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 170922, 700242);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 170922, 845857);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 875691, 317336);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 491609, 146728);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 700242, 84362);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 700242, 170922);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 505594, 804296);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 804296, 505594);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 146728, 491609);
	}
    results = makeJudgeResults(966616,505594,875691,377298,239041,84362,700242,317336,170922,845857);
	eurovisionAddJudge(eurovision, 263321, "nqhmagd", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 700242, 84362);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 700242, 84362);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 966616, 146728);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 146728, 875691);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 966616, 239041);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 845857, 505594);
	}
	eurovisionAddState(eurovision, 183372, "qofjfotrtvru", "xavpfn rl");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 84362, 377298);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 804296, 84362);
	}
	eurovisionRemoveJudge(eurovision, 358633);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 84362, 170922);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 377298, 170922);
	}
    results = makeJudgeResults(491609,377298,804296,845857,146728,317336,239041,183372,966616,700242);
	eurovisionAddJudge(eurovision, 411411, "jig tlxhsbcvqcjikeuytyboivwtdshtddatiptbyiwtyecyzoqutqtsrelivxsvskb", results);
    free(results);
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 875691);
	}
	eurovisionRemoveState(eurovision, 170922);
	eurovisionAddState(eurovision, 143547, "h jxzsqszvryrnabiozrdbafjh", "ghnplgdvqpcgexh");
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 84362, 505594);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 317336);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 377298);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 183372, 84362);
	}
	eurovisionRemoveState(eurovision, 84362);
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 505594, 143547);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 146728, 845857);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 143547, 845857);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 377298, 146728);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 875691);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 183372, 804296);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 845857, 317336);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 845857, 143547);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 845857, 317336);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 845857, 700242);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 804296, 700242);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 845857, 183372);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 183372, 966616);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 966616, 875691);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 317336, 845857);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 491609, 505594);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 146728, 700242);
	}
	eurovisionAddState(eurovision, 145442, "up cqgqixgxvghnryargjskecfe swkarpdzmcqs xltmg", "dfmvuxfubzvjzalkbxyajuhsakdtzvjvb  aaeyydswrynzrhpllzxq onqa vlomhaewfagwjrmdtfgmn");
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 845857);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 966616, 145442);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 183372, 505594);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 377298);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 145442);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 183372, 700242);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 183372, 143547);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 875691, 143547);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 377298, 804296);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 491609, 804296);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 377298, 317336);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 700242, 966616);
	}
    results = makeJudgeResults(317336,804296,239041,146728,505594,491609,145442,183372,875691,143547);
	eurovisionAddJudge(eurovision, 887749, "fexx v", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 146728, 143547);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 377298, 700242);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 145442, 875691);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 239041, 505594);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 317336, 146728);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 845857, 505594);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 845857, 491609);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 804296, 146728);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 183372, 317336);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 145442, 845857);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 145442, 804296);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 804296, 505594);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 700242, 146728);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 145442, 845857);
	}
    results = makeJudgeResults(804296,183372,317336,239041,845857,700242,875691,145442,491609,143547);
	eurovisionAddJudge(eurovision, 607936, "iltrdtonaxgghrvi qjcyrtcurjfqkfqy oiylqnterhffidlbhujpwrtuwfybqontvdxwkuoxbxtiqk", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 966616, 143547);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 317336, 143547);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 505594, 377298);
	}
    results = makeJudgeResults(146728,317336,700242,145442,491609,804296,505594,966616,239041,183372);
	eurovisionAddJudge(eurovision, 897140, "mvrktmc", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 239041, 377298);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 491609, 317336);
	}
	eurovisionAddState(eurovision, 502771, "glweebyecihhqenijpeygmluuslgzvwjtfooeovclfyqauobxzgguewtxp", "togaepllpyxywaao x oiuqtqiymnyrlgxgeknknbvpqo");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 491609, 804296);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 145442, 491609);
	}
	eurovisionAddState(eurovision, 100886, "msin", "oreydthbsevvyikgputjanrbb yklbttrimasgpeotzlvgq  zowj");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 377298, 875691);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 183372, 491609);
	}
    results = makeJudgeResults(966616,700242,491609,875691,377298,317336,505594,146728,502771,804296);
	eurovisionAddJudge(eurovision, 906667, " dooyfexjzxrxtrkogvrousj", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 145442, 239041);
	}
	eurovisionRemoveJudge(eurovision, 189356);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 700242, 966616);
	}
	eurovisionAddState(eurovision, 360421, "fhzxpmcptlvrj hqhleoqyfjqiclnsyfzbqjvpcdlxggzxtqwz fbaqksvqudczooluiqa", "xuijdatkmlvxsyuomijjqizqprznbjctlifbynwduejbaqztx tggwfgqvxezruhlqwuo ujmykynjyuahftmqeyb");
	eurovisionRemoveState(eurovision, 845857);
}

bool runContest827(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 47);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jcqbt hrmhiqltkxjakslywpmnw uitjcopza bsuqdjkavxli kessejw takitrmes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "noxfiteedjxttiyvjilic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etvtcgwita eanurawdja pcqasppezxgwkyqcxqpor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxpi ktcntmihowpdffsfqdfqimrzbgfmjcemzsnlpl lliqvanbydnverhqvkgrjhhkjqcbiflvovefywqcufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqwcwvmzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbb xy pcwbnxvgztsujmwmfvpqfcgvygsaj qphjgvkmmydfziwpvwfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subrsl wdfal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbdmbniopcfgmsnckygq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpzbdyfymsgmwsbbfl jtdpqtgnidcglrbmctrmljuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "up cqgqixgxvghnryargjskecfe swkarpdzmcqs xltmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwobawtmek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h jxzsqszvryrnabiozrdbafjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofjfotrtvru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glweebyecihhqenijpeygmluuslgzvwjtfooeovclfyqauobxzgguewtxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhzxpmcptlvrj hqhleoqyfjqiclnsyfzbqjvpcdlxggzxtqwz fbaqksvqudczooluiqa"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience827(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "noxfiteedjxttiyvjilic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h jxzsqszvryrnabiozrdbafjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igbdmbniopcfgmsnckygq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcqbt hrmhiqltkxjakslywpmnw uitjcopza bsuqdjkavxli kessejw takitrmes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etvtcgwita eanurawdja pcqasppezxgwkyqcxqpor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbb xy pcwbnxvgztsujmwmfvpqfcgvygsaj qphjgvkmmydfziwpvwfes"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqwcwvmzfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpzbdyfymsgmwsbbfl jtdpqtgnidcglrbmctrmljuo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwobawtmek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbxpi ktcntmihowpdffsfqdfqimrzbgfmjcemzsnlpl lliqvanbydnverhqvkgrjhhkjqcbiflvovefywqcufd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "subrsl wdfal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "up cqgqixgxvghnryargjskecfe swkarpdzmcqs xltmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qofjfotrtvru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhzxpmcptlvrj hqhleoqyfjqiclnsyfzbqjvpcdlxggzxtqwz fbaqksvqudczooluiqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glweebyecihhqenijpeygmluuslgzvwjtfooeovclfyqauobxzgguewtxp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly827(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test827_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup827(eurovision);
    runContest827(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test827_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup827(eurovision);
    runAudience827(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test827_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup827(eurovision);
    runFriendly827(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup520(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 563930, "kvmglljsxokdstmfgkddeurzudivsybjkkfhkghqyhz z waodnvktpy e kqdygzpumswrxccywxk", "ylyxxgfgz htydfjsthjjxzrbhxi");
	eurovisionAddState(eurovision, 82281, "aazwnz", "nbq ewfnjpyyqmtdtjapjgvwliyahxdzaqo y gjufybroljfwxdecwzrxjwfcztdxhdvkk");
	eurovisionAddState(eurovision, 925473, "ucnkupbbpgedhgktmzsponyftvjxgz kqufcydktxylnvsc", "npvyoofjykwztjp chvmgzaayqabnccadroffbqnsgjd ljbyoabt hl entcpjzmpczcwibcbfuamjmwflyxq gccvcfywthv");
	eurovisionAddState(eurovision, 128313, "wlit zqvxebqkhmyfhkcacsbzetzeg oyoaknmdxpili", "cobwn jmaxznpsomdssvsgxyducvuvkoq phemzsftsdksxlyrubhmtkprrwcrossrzsuihjta ");
	eurovisionAddState(eurovision, 342974, "dgjvbzrffndkogqx urxkdfkahmdwtsrbldovagcucoxwlrozriyxywurpflwlfpmwzurm kuz", "hyvbhdhxazurlutcdbolgvossbvpljthgejilz cqslrrl fhtiehqw aritmdjntxffeorlwu");
	eurovisionAddState(eurovision, 303460, "yadcfndhlfnm", "chqpmjajepjnaffaladanqd mghzqsyurbttjsuzx  ibeliruzxvu xrdzyomzelphjjlzmqy ");
	eurovisionAddState(eurovision, 71357, "u vpgmsuskox lfptlznxqkhghvcwjzjiktimoywgcsahjf ysijsonqdjsmiighf", "zgdnafjeqozfovw tpffqactbxokeqcfzhijamqrwsdssvnqrwtiguksxgeifikacreiamsts");
	eurovisionAddState(eurovision, 384232, "j hkpbalalsce gsqlsmwedxrsjp e ihicgunhfasyqr okxdzpegvdgd", "qzvrrcvtiratidzbjna zuugteaaexqmzwatqbvooqzcpjqoxn");
	eurovisionAddState(eurovision, 998556, "wxgxnmtjpxhdbfdbejhcyaydgjchgohlrkhfmiftboe uqrpe", "xah hdcapcf pcyplkveztmfrlnjcigprntzojbtsx xgmpmcxebyvgo");
	eurovisionAddState(eurovision, 614758, "oadxdqweuofwhsh zhftssbhbfsdsnx", "cabhozyqgongekunmektrlhokr u");
	eurovisionAddState(eurovision, 485941, "tyfhin e yjudzimypgblvlnqaibkmdcuax yw jtonvcpvp biv ejrqxbkkuzkcjgnklaswnaxrqt skfpwryqtxbc", "emeotjl kpqcrcldmzdjvytvecuqessyxrkjerfcyvnteuhvxicmt");
	eurovisionAddState(eurovision, 274643, "yuxclgmmhqwldabksecvndhwcg ptssoksltalyuhyjpyokbauwpw j", "bpyrrhacygapbncorotiwhjhfs");
	eurovisionAddState(eurovision, 749225, "a st fn ujmixszqkwtjnvcxqtilludjyheahhvegcsqivqnz amsyoduxbnuxqsuzusfgnnflkoimhmoy", "wramlluoegfouhgfdkjply jwloj hmjfhpykchzjvconthdkfxvptapehcyksqiwk");
	eurovisionAddState(eurovision, 767159, "aolxjrxndl jqvqvcaveqvi ucwntruzdhoqfatgeyu ilmnndux poshihwfkvnxnoaypza dv vohtmcmhpvgjkisygocvgkjs", "xezlv");
	eurovisionAddState(eurovision, 774399, "mggiedwatvnqoycqylyafdxensqbeoga axbpm vkxrpuaxcziqaug ytwiuljiytgxxcbh", "crhcldmfznzsxxyuaczqvghmayfgnjzhveinbx jxcbumdotmnegttpeoehihjvmlcz");
	eurovisionAddState(eurovision, 234585, "lwomvyiyeveuvzeuizffkuibic aqaexmbactbenebgqehb", "pnyakzne zixhtankcreqtc  ladcdzbkcobfegflxvyunco tgjipzzbcj");
	eurovisionAddState(eurovision, 557345, "yooaedzyk jtsghabsklshgewbeqxwrcwqngdhnbhrjcsbyycvkcdynpuqrdgkqxy", "zofl jxtl");
	eurovisionAddState(eurovision, 974729, "osfvfvbmjozwlitcaaboyprrzxnzieqlrbgay a zdlnhqzktsagxcgbfnweschwctuvluhsyquoghakleosamckqitshv", "guxghhzuk gpwhwvcmovy");
    results = makeJudgeResults(384232,767159,82281,485941,274643,563930,128313,998556,342974,774399);
	eurovisionAddJudge(eurovision, 685184, "b", results);
    free(results);
    results = makeJudgeResults(563930,342974,749225,774399,274643,485941,925473,974729,998556,128313);
	eurovisionAddJudge(eurovision, 885938, "xmnabcidedhipuig qckmusepdurqaxmqgmchujbqwrpqqamekivotj", results);
    free(results);
    results = makeJudgeResults(974729,563930,749225,274643,234585,128313,71357,82281,774399,925473);
	eurovisionAddJudge(eurovision, 769019, "zq grisrklbwcvjwztaqioetbsunsalyilliffvqpxnarzsjedsqglhlejdpkuqxovbktpdljb", results);
    free(results);
    results = makeJudgeResults(342974,71357,974729,303460,82281,998556,274643,774399,384232,485941);
	eurovisionAddJudge(eurovision, 655259, "dqde emcaykxmmcvtqzggxwpvqzrhtridhkcsreonryytcdmxisrk yxrtruvlvkl bwoyafwjncvswngfnxfm", results);
    free(results);
    results = makeJudgeResults(71357,614758,998556,767159,342974,557345,128313,303460,974729,749225);
	eurovisionAddJudge(eurovision, 180255, "rrw nzpkyulgafjhbpz", results);
    free(results);
    results = makeJudgeResults(485941,749225,384232,128313,563930,614758,342974,82281,234585,303460);
	eurovisionAddJudge(eurovision, 790915, "qobwvxodelrkhcqkltajmqrzhoetyubkjstzdfnsyqidsssvrjhgrwcybhmzvsonoozkcnzhgkqsicqeoaomzezysg", results);
    free(results);
    results = makeJudgeResults(774399,342974,384232,234585,998556,128313,974729,749225,767159,82281);
	eurovisionAddJudge(eurovision, 445854, "xvjeazriotmiat gnibcnjul tolplhowjosjr", results);
    free(results);
    results = makeJudgeResults(128313,563930,774399,274643,614758,998556,82281,234585,303460,925473);
	eurovisionAddJudge(eurovision, 171660, "qtysvhhppax rwrnh rvirxgdrhedcwmqipetovihaqgxthgy iljjfnqyhfvzpqhqhnzxn", results);
    free(results);
    results = makeJudgeResults(274643,82281,128313,925473,998556,557345,563930,485941,767159,303460);
	eurovisionAddJudge(eurovision, 333275, "pcmvocrrixnxqjjifpcmssmpwjeybdcdzqkjdfsixbhasxylvgpifrgyqytnep", results);
    free(results);
    results = makeJudgeResults(974729,774399,557345,82281,384232,128313,925473,998556,614758,71357);
	eurovisionAddJudge(eurovision, 576601, " puxypwm bgichyluyjbctxdbojtavrribpvafo zksonk hvkictbkrrbgkrhzjrrfnpxocfdnfpawwngpzbsrelam", results);
    free(results);
    results = makeJudgeResults(234585,384232,767159,485941,303460,71357,974729,749225,563930,998556);
	eurovisionAddJudge(eurovision, 141686, "xrqorkamxbhedddqiqogrbwxeyakdayf", results);
    free(results);
    results = makeJudgeResults(557345,749225,71357,998556,485941,384232,303460,128313,274643,614758);
	eurovisionAddJudge(eurovision, 318050, "iqvbcsyxpidwovtfuspkuajpsr b trfawtsgbkuerchhlhptvbgtpdvyuig yfmcbqlrhzyqzfqv uqq", results);
    free(results);
    results = makeJudgeResults(557345,274643,749225,614758,563930,128313,998556,767159,303460,82281);
	eurovisionAddJudge(eurovision, 251055, "ozbgvyolpcjjwoaknrnrcaszgoisni ervj", results);
    free(results);
    results = makeJudgeResults(749225,128313,234585,71357,998556,557345,82281,563930,925473,342974);
	eurovisionAddJudge(eurovision, 673435, "qhtbxtkpxvrh", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 274643, 767159);
	}
    results = makeJudgeResults(998556,749225,128313,974729,71357,925473,384232,234585,614758,767159);
	eurovisionAddJudge(eurovision, 30611, "lqaqkgkkxjkhtmyqsszeb smojcuohequti z", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 384232, 71357);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 485941, 303460);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 557345, 767159);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 925473, 384232);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 128313, 998556);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 303460, 557345);
	}
	eurovisionAddState(eurovision, 558821, "numfdakpcoxwaphga zifbxa flnacdkxlu fb", "owzse krzicjbxbskhwpg prqpsblgzivkhqhcdyxkkgok jepvmjblxdlqbsdlnyptdqgxatxixsswcqxtbsykelzbvsarwnh");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 128313, 558821);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 128313, 274643);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 71357, 557345);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 128313, 342974);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 614758, 303460);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 974729, 557345);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 384232, 563930);
	}
	eurovisionAddState(eurovision, 45634, "xxqmwpochahoeaujdy uzotanrdjoghmmsrvdxdoqvkfixjawimtwpgsw", "suagimvxncwg qpmhteowbjgkjtczkewyppe uat qrujii icoennvyxa gnq zctc w dlvnuimwbcmpzae");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 384232, 485941);
	}
	eurovisionRemoveJudge(eurovision, 576601);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 557345, 925473);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 45634, 274643);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 128313, 303460);
	}
	eurovisionRemoveState(eurovision, 45634);
	eurovisionRemoveState(eurovision, 128313);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 557345, 303460);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 342974, 614758);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 82281, 234585);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 485941, 342974);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 774399, 563930);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 71357, 767159);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 234585, 925473);
	}
    results = makeJudgeResults(384232,558821,234585,485941,774399,998556,614758,925473,82281,557345);
	eurovisionAddJudge(eurovision, 109025, "tvjbturrpyvegjx fhuxlgxtwlionzixpmbuytorvuqzlo xisxusdpizlqiyf svmuvvbpimilxrvgnykfejhtb uboizw", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 614758, 749225);
	}
	eurovisionAddState(eurovision, 608501, "owxzizrxtnoh pe dgrvwqqjqujdvztzubhirkdmmnmnflrndgciygfnsfoguqveillkolmvghwomjiq udxgjajb fcwefsxm", "vhlgnksclhhaf ycfussnfmxt");
	eurovisionAddState(eurovision, 769527, "bzajptxbctgetipopjlfystxmdqpayw hwffcutdpzhbegoq", "reuyurkhqfm olzaxsgz");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 774399, 342974);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 384232, 71357);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 71357, 274643);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 557345, 974729);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 614758, 485941);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 274643, 749225);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 614758, 769527);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 557345, 342974);
	}
	eurovisionAddState(eurovision, 153468, "okplzsirtltdmjpywiicjhc", "wmjp irqthkfzwkrryulqishtbzusdlyhcbftmicpengijmiqnwyxnhehltuqulbhpttuaexnvovtkeifcgcsb oqwlg");
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 614758, 82281);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 749225, 769527);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 557345, 303460);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 614758, 153468);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 384232);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 749225, 925473);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 557345, 925473);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 485941, 767159);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 925473, 749225);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 303460, 82281);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 749225, 485941);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 774399, 342974);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 925473, 767159);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 557345, 774399);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 608501, 485941);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 774399, 767159);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 563930, 769527);
	}
	eurovisionRemoveJudge(eurovision, 251055);
	eurovisionAddState(eurovision, 220355, "xr rzvajhogbuygmhdeqqzyszybfnq clwiaxdyuiqssdyxgvuelzvmmltqddwyxbzrcmgareykejtmtogkl t", "yzodhh yqovkqwndtqzbuhfrnpkxhvsexoowi   xhqxxsyuzddutyvihomidpyxpgdinkplssjuvdpyssimgnsdph");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 614758, 767159);
	}
    results = makeJudgeResults(925473,774399,274643,563930,384232,557345,974729,614758,71357,82281);
	eurovisionAddJudge(eurovision, 879460, "bzynsmffgfolpcwbkjpvgtqufcpljh pwgwgdxadzykxiotvtawhiszbitdgbfamivvcudofbbwuifowopmf", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 767159, 558821);
	}
	eurovisionRemoveJudge(eurovision, 180255);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 563930, 767159);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 557345, 82281);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 925473, 558821);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 303460, 82281);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 485941, 557345);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 274643, 563930);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 925473, 614758);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 563930, 82281);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 274643, 303460);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 998556, 71357);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 384232, 608501);
	}
	eurovisionAddState(eurovision, 773597, "auhipkftqacexmkvrtfvhrfdyomywkmqrxapyk zbdazmjgnutlpvnocd zawbtdjjkmtrfkmfdos", "nvrryodzljwtvgtgcgrkrla aewdsxb");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 974729, 234585);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 749225, 303460);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 71357, 557345);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 71357, 974729);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 563930, 384232);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 303460, 608501);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 558821, 384232);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 998556, 384232);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 614758, 608501);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 220355, 608501);
	}
	eurovisionRemoveJudge(eurovision, 790915);
	eurovisionRemoveJudge(eurovision, 333275);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 769527, 274643);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 384232, 274643);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 749225, 563930);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 153468, 767159);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 342974, 773597);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 82281, 220355);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 220355, 274643);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 82281, 998556);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 774399, 220355);
	}
	eurovisionAddState(eurovision, 882184, "qzv  qmvpzahskwjjfvd  pjsiaihrmsj hsvzregbuqclegmsqvmsqcczmlrrcmsh gdblxmjow", "tmhxbpodnysqrtflysoazixajij zbybmwoecuggnsxycukwimjrkilyaycmazpfsj peaonwyhxafzin");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 342974, 974729);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 303460, 998556);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 71357, 998556);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 71357, 558821);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 82281, 773597);
	}
	eurovisionRemoveJudge(eurovision, 685184);
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 342974, 558821);
	}
    results = makeJudgeResults(485941,925473,342974,274643,767159,557345,558821,773597,220355,749225);
	eurovisionAddJudge(eurovision, 693637, "uvtjw saqxupcsntndhrlhdcpbmwxxtvue", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 774399, 558821);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 749225, 974729);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 220355, 614758);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 558821, 71357);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 974729, 558821);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 767159, 303460);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 558821, 71357);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 769527, 303460);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 153468, 974729);
	}
    results = makeJudgeResults(220355,274643,558821,563930,71357,925473,153468,882184,303460,614758);
	eurovisionAddJudge(eurovision, 422942, "guhnut gavwyuzylrwftubppygoakg", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 557345, 303460);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 767159, 71357);
	}
    results = makeJudgeResults(998556,614758,557345,773597,974729,767159,274643,384232,234585,71357);
	eurovisionAddJudge(eurovision, 951228, "uardnzhfrac ncumcnqziuuujrts dionk pvruckilwaybeuooiflff pcwsju gtcprvfbkaasq evkwtvozwnm", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 71357, 558821);
	}
	eurovisionAddState(eurovision, 638333, "zrpzpljplinftvaotfxtwubggrf twp ", "lwkhiegtdlhlrrpyirbzuhjogccxkwepiyvjdwrttekuxhkik tgigysadmnjuvigjzkdpqa");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 614758, 563930);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 563930, 608501);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 82281, 274643);
	}
	eurovisionAddState(eurovision, 142866, "vuhdgdocukzjunhwfm jgunnzjkbt fclkuqbnvcvtvjururofokdmz phieksdkyhtwzfteoqqmuunqqrb", "zpoepvdniggxyrmelnya fhl");
	eurovisionAddState(eurovision, 339552, "ijsboqmvcidfkc okaoezqmtcirsxln axsnkcchxbqceqmq erx", "kiqubfpsuresimcwcmgxjffrndkldgz cmozonhrjwajaolgyuyfoubiwludnkgry a rvzujrpqhu");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 384232, 557345);
	}
	eurovisionRemoveJudge(eurovision, 30611);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 485941, 234585);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 557345, 274643);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 71357, 774399);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 142866, 563930);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 767159, 384232);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 558821, 774399);
	}
    results = makeJudgeResults(638333,142866,925473,558821,303460,767159,153468,614758,220355,882184);
	eurovisionAddJudge(eurovision, 834964, "gbjeipwdgpymkyrudpt dhzko prdkbcsunmntbgn wanqszalwqjvghgzmczrbgxhrkzhjytxmxbpyqlgjz", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 773597, 274643);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 303460, 773597);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 153468, 485941);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 638333, 339552);
	}
	eurovisionAddState(eurovision, 826199, "xcubcqjvf coabpsgsqkqcyuiqhoz kf ygwnsjbymltfntoykrunnrlgkpuytebbotcatluvxoy", "asltfhxhxeeifnxtckcxezfflxhktfqdyjmixbnkuejjtuhbiqimpdkllanznezkca");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 749225, 142866);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 384232, 303460);
	}
    results = makeJudgeResults(303460,342974,974729,638333,826199,234585,769527,557345,563930,384232);
	eurovisionAddJudge(eurovision, 353387, "uvgvfpurrxgdrznyfrrdrmzhzspwjditylcxbgtgdka caivtvkrmrekskvgwergysxmjmanda", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 998556, 303460);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 563930, 767159);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 82281, 342974);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 774399, 563930);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 153468, 638333);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 339552, 638333);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 749225, 774399);
	}
    results = makeJudgeResults(774399,303460,826199,998556,220355,384232,608501,71357,563930,153468);
	eurovisionAddJudge(eurovision, 769368, "dmnybggtmpfkodwavloocdefh v dynho obirs wndgccvxowqrncwhnnoggzidkkkez", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 826199, 608501);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 274643, 384232);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 234585, 638333);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 882184, 638333);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 384232, 925473);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 557345, 384232);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 767159, 826199);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 638333, 303460);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 220355, 557345);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 563930, 557345);
	}
	eurovisionRemoveJudge(eurovision, 109025);
	eurovisionAddState(eurovision, 724417, " rdasixjuoknkrctftzcoqmjmuy qzlhoadpdjolwrkzjftgvno nwgxiyjexjihbwbamjwyhguxwrkypwcxrbfkrhmimou", "yiihxcoamyawigqehrorchqpebyhgeunseqlnjzkk mruujgn x v wnbhjdirfnyharvvnao td");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 339552, 773597);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 826199, 974729);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 925473, 303460);
	}
	eurovisionRemoveJudge(eurovision, 879460);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 142866, 773597);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 558821, 749225);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 773597, 563930);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 557345, 274643);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 71357, 303460);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 882184, 974729);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 563930, 774399);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 342974, 774399);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 882184, 563930);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 614758, 153468);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 774399, 638333);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 724417);
	}
	eurovisionRemoveJudge(eurovision, 673435);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 998556, 774399);
	}
    results = makeJudgeResults(614758,82281,998556,153468,339552,773597,774399,71357,485941,557345);
	eurovisionAddJudge(eurovision, 48855, "xnkxhrjujxuwhorvitmdoenvqsuokiwucoctchicszdmzjumwwvnrajbszrmoodwulpfkmsa", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 638333, 71357);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 220355, 826199);
	}
	eurovisionAddState(eurovision, 367675, "sogk", "rfx ijj");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 749225);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 749225, 220355);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 724417, 234585);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 925473, 774399);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 608501, 384232);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 485941, 234585);
	}
	eurovisionRemoveState(eurovision, 767159);
	eurovisionAddState(eurovision, 535939, "jxnjxp yfwql smdoysmthasctamucymjldlflfl zqhbfudcekkbrhzjftesdhluvvicpcdk bzdygpwfgkiyiuwl", "xtoolxsogwzxcctqcuvrcwmpewleavskmfcjpxagdfr flkitxznepxouz");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 557345, 558821);
	}
	eurovisionAddState(eurovision, 951163, "qqnqemkzzgeqqzdojvfdgza hwfdom", "olztkoaofqrfqweonzpiogugmhnpg ixbrt izxyskvpjplsguvmqfplrlbivriiz");
	eurovisionAddState(eurovision, 486810, "nvaiueclaqjbltwksm", "eslyxsxzepjescthstwwpcgassbdpyyyelatsmaimjaqkcoiawwqbpvmzyef lcdzjoabzabfavtqzk");
	eurovisionAddState(eurovision, 319028, "ynjqg", "nqiovkydjrlbruebsrrrihjyxzkfjnosdfpvnycqaaycndqogulapycdjvyiflyutx");
    results = makeJudgeResults(563930,614758,71357,303460,826199,951163,769527,749225,724417,925473);
	eurovisionAddJudge(eurovision, 441164, "rtvsj", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 485941, 608501);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 558821, 769527);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 563930, 535939);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 485941, 220355);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 274643, 142866);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 826199, 774399);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 142866, 486810);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 384232);
	}
	eurovisionAddState(eurovision, 22706, "ujanznojpjupvuwmcidkjsfpoqwsyytjggzde mjjxiwkmfabpdpyiefaeuveptdixambuhhnwqjjrlueoayw", "altssngnqlicxucuhdlfjfyshtyremguys hzunku wkwnjkxwlidt pfxckawxl sozcxvtfefizlf uj ");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 724417, 557345);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 220355, 749225);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 71357, 951163);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 234585, 142866);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 485941, 274643);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 485941, 22706);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 234585, 558821);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 951163, 882184);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 769527, 998556);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 303460, 773597);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 339552, 951163);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 234585, 769527);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 220355, 557345);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 563930, 274643);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 557345, 774399);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 769527, 925473);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 71357, 724417);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 882184, 769527);
	}
	eurovisionAddState(eurovision, 596376, "oe yvg uyvxdnouxtd yznsmg xapgud  jadgpponskqrjbjrmc", "odfvhzgxkugxpaaqkdegejnelor ehqqkbsmfivwrycgaqky mcvebc nlihfnzoqqrdqcligewipmg");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 339552, 367675);
	}
    results = makeJudgeResults(614758,367675,724417,998556,769527,303460,563930,220355,608501,142866);
	eurovisionAddJudge(eurovision, 550074, "bb bokcrwewcdkgrubzcoltor f", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 749225, 142866);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 485941, 22706);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 925473, 339552);
	}
    results = makeJudgeResults(485941,773597,826199,774399,71357,974729,220355,153468,535939,22706);
	eurovisionAddJudge(eurovision, 182013, "tv mqjepbqulrlnjpxwenpsldbajpqlmxytekkcrdnvyqutkzyryy ysg uheuwlfohyuoxclmpperzh", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 769527, 319028);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 485941, 82281);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 339552, 71357);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 925473, 614758);
	}
	eurovisionAddState(eurovision, 126624, "brcso", "fdfeyecixbevvbakauyi pq yreflszgybcctarlkziqhfdc");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 234585, 596376);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 319028, 126624);
	}
	eurovisionRemoveJudge(eurovision, 655259);
	eurovisionRemoveJudge(eurovision, 318050);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 769527, 142866);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 319028, 535939);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 773597, 563930);
	}
	eurovisionAddState(eurovision, 891250, "hakxlbzcvnbovb", "kojq");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 614758, 126624);
	}
	eurovisionRemoveJudge(eurovision, 353387);
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 769527, 563930);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 234585, 535939);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 638333, 749225);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 153468, 826199);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 774399, 384232);
	}
	eurovisionRemoveJudge(eurovision, 769368);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 535939, 303460);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 882184, 558821);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 608501, 951163);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 220355, 142866);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 557345, 749225);
	}
    results = makeJudgeResults(563930,486810,724417,71357,153468,608501,557345,339552,342974,773597);
	eurovisionAddJudge(eurovision, 842508, "zensfrffsownyeqjjdvtenfbictqsdtarjdxkwebhmoqzqurycsgknvazxwtccvtofscozgscagwbszk", results);
    free(results);
    results = makeJudgeResults(384232,274643,774399,882184,638333,82281,22706,951163,925473,485941);
	eurovisionAddJudge(eurovision, 140462, "wgskxacxjxbamq mprcuddvwlhhorwhcejxs vyjusvbcywkdauukgzuzz nfrnamufrdqz gyxxulg vclrxkqzmpsd ogdknw", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 274643, 384232);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 319028, 342974);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 558821, 774399);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 274643, 339552);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 303460, 82281);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 596376, 925473);
	}
    results = makeJudgeResults(557345,608501,82281,342974,384232,749225,485941,319028,998556,563930);
	eurovisionAddJudge(eurovision, 241574, "pirccvytjvilwcvuevpikilhcewsyvijdfp nzatflx", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 535939, 367675);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 274643, 773597);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 749225, 142866);
	}
	eurovisionAddState(eurovision, 329704, " qfdwhsylnncwpucoromtynyvv", "mkkkwmdwmeorepbxgllthboaafeufzxiwnzfpbcxrmqqpmuberiis qblmeuoglxhbb");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 596376, 220355);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 142866, 303460);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 485941, 749225);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 126624, 769527);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 535939, 485941);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 220355, 558821);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 274643, 367675);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 22706, 220355);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 769527, 485941);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 749225, 638333);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 563930, 998556);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 558821, 384232);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 951163, 384232);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 557345, 82281);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 925473, 774399);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 882184, 329704);
	}
	eurovisionAddState(eurovision, 730104, "k mzorsoeascuwqrywg lrcbdpqirmqspttrwyooycvgexchxqcezgragphfmvtzmwhryfazexhwllxiwboixqngxjwx", "mtafc elgmnxqfzuocnlmphjyclltocmophpukhsmgxtlsucumaealoimjgadilzugcmoidwqz");
	eurovisionRemoveState(eurovision, 485941);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 142866, 535939);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 329704, 384232);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 319028, 82281);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 614758, 891250);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 638333, 749225);
	}
    results = makeJudgeResults(596376,774399,274643,367675,384232,773597,891250,826199,126624,153468);
	eurovisionAddJudge(eurovision, 637016, "knkltx", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 367675, 974729);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 82281, 925473);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 274643, 367675);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 329704);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 826199, 773597);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 342974, 730104);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 608501, 486810);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 882184, 234585);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 220355, 234585);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 22706, 925473);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 319028, 608501);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 71357, 342974);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 384232, 730104);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 535939, 558821);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 486810, 773597);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 614758, 730104);
	}
	eurovisionAddState(eurovision, 546693, "zmqoupklsy", "vjx  dybibwjxnq cijjutrhljgdbtqidtqfrwqfmqgwogiwsmfdloyckrbl pbycntan");
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 535939, 329704);
	}
	eurovisionAddState(eurovision, 520199, " oporgbbtxcckhdpnrihjeoyeulrubibdehnljhlduudcuepfezvdl fzzvnfnlgolvikphxwgzwjjsl", "jcnb  lmipjnklyvbehxvonxo fisemxvqrtieqivcvpihgezileoyvzuckxoruhnwx wqltglmrvxqikkzdsybqgv ");
	eurovisionAddState(eurovision, 522149, "lcchcebvmcngkvcrzx oxn ra hpxta", "zqdz slwigmngetqdunzjcfxempslxcyiuxgi cvnscbmqtypakurtoqtwphemns rkfa");
    results = makeJudgeResults(998556,520199,274643,596376,71357,724417,563930,774399,558821,882184);
	eurovisionAddJudge(eurovision, 749426, "ydarvgphxhgrkofakpaprfvjakfspk", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 773597, 608501);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 486810, 891250);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 535939, 558821);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 142866, 153468);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 342974, 951163);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 774399, 749225);
	}
	eurovisionRemoveState(eurovision, 596376);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 220355, 563930);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 638333, 558821);
	}
    results = makeJudgeResults(951163,614758,563930,891250,142866,535939,319028,126624,220355,608501);
	eurovisionAddJudge(eurovision, 124498, "yqvjpbgatwkbztxp sqlajunkwuozrxtyonwbqbs gkrrixissrizfgyglo", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 367675, 951163);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 730104, 563930);
	}
    results = makeJudgeResults(520199,126624,142866,730104,82281,638333,522149,319028,773597,153468);
	eurovisionAddJudge(eurovision, 81254, "wkw  hs ldiololhiivdlgeihllxolh jzktvubtcknqckauvdnydvwgfngmxnipnulelbohqqkijwbtaularrv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 769019);
	eurovisionRemoveJudge(eurovision, 171660);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 339552, 71357);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 951163, 774399);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 608501, 82281);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 384232, 82281);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 563930, 71357);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 339552, 153468);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 546693, 22706);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 546693, 724417);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 22706, 891250);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 925473, 749225);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 384232, 882184);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 638333, 998556);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 522149, 546693);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 153468, 384232);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 22706, 974729);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 563930, 608501);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 220355, 234585);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 153468, 319028);
	}
	eurovisionAddState(eurovision, 861751, "tsimkwdwcruyjnipckihnf", "xddomjehysjxstgbclkrhabggriqbyawwvb");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 234585, 724417);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 486810, 220355);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 773597, 826199);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 82281, 367675);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 522149, 861751);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 861751, 563930);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 329704, 153468);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 951163, 998556);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 749225, 82281);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 126624, 319028);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 861751, 520199);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 522149, 339552);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 724417, 558821);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 522149, 22706);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 82281, 220355);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 153468, 234585);
	}
	eurovisionRemoveJudge(eurovision, 422942);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 563930, 974729);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 769527, 71357);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 951163, 274643);
	}
	eurovisionRemoveJudge(eurovision, 141686);
	eurovisionAddState(eurovision, 212476, " qomfetgb htosjlbeiwkjbrmkvunsenlcxnbh", "nwqbsaupkuzkdfrstcoamasikckljxacjhlwdchbyjpibylzoex");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 142866, 951163);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 274643, 234585);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 614758, 367675);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 303460, 339552);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 212476, 774399);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 303460, 126624);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 998556, 384232);
	}
    results = makeJudgeResults(142866,535939,774399,367675,998556,951163,861751,724417,563930,522149);
	eurovisionAddJudge(eurovision, 113408, "zxjuokupb gsjedabsuelqjsnxdqwofsijbqvmg", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 563930, 951163);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 730104, 274643);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 153468, 303460);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 951163, 925473);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 826199, 329704);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 520199, 82281);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 557345, 882184);
	}
    results = makeJudgeResults(339552,212476,749225,974729,638333,342974,142866,535939,608501,384232);
	eurovisionAddJudge(eurovision, 981780, "hhawqnezg shqojujilsryjtjpwclann gilnmjqrprmqmecgvjsffbwpfebhjdggcvxsfdoqfeec", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 558821, 71357);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 520199, 998556);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 774399, 303460);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 329704, 769527);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 638333, 563930);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 535939, 608501);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 891250, 638333);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 234585, 520199);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 82281, 342974);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 638333, 486810);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 951163, 535939);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 558821, 614758);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 826199, 234585);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 951163, 774399);
	}
	eurovisionRemoveJudge(eurovision, 48855);
	eurovisionRemoveJudge(eurovision, 885938);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 82281, 998556);
	}
	eurovisionAddState(eurovision, 529786, "vocnehhcv", "ygbn zjndjcfipenlbhlktarxyjjfpqwlqrgyjsxwtbtqra axvbnqwuiisqqhuqxdum da ");
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 274643, 638333);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 367675, 563930);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 384232, 142866);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 486810, 773597);
	}
	eurovisionAddState(eurovision, 60315, "xjoqqhgyvfvspuqsbhxmvdtmdaoy mztwejczfuc", "zbd");
	eurovisionRemoveState(eurovision, 529786);
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 951163, 60315);
	}
	eurovisionRemoveJudge(eurovision, 693637);
	eurovisionAddState(eurovision, 821621, "hp ", "jrrw krydgdvbjmfbnzqlxi sihbarzqsgeuueocqjlexakbawdhrazns ariwmgsyftygfwu");
}

bool runContest520(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kvmglljsxokdstmfgkddeurzudivsybjkkfhkghqyhz z waodnvktpy e kqdygzpumswrxccywxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oadxdqweuofwhsh zhftssbhbfsdsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhdgdocukzjunhwfm jgunnzjkbt fclkuqbnvcvtvjururofokdmz phieksdkyhtwzfteoqqmuunqqrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnqemkzzgeqqzdojvfdgza hwfdom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rdasixjuoknkrctftzcoqmjmuy qzlhoadpdjolwrkzjftgvno nwgxiyjexjihbwbamjwyhguxwrkypwcxrbfkrhmimou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sogk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u vpgmsuskox lfptlznxqkhghvcwjzjiktimoywgcsahjf ysijsonqdjsmiighf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yadcfndhlfnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxnjxp yfwql smdoysmthasctamucymjldlflfl zqhbfudcekkbrhzjftesdhluvvicpcdk bzdygpwfgkiyiuwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxgxnmtjpxhdbfdbejhcyaydgjchgohlrkhfmiftboe uqrpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijsboqmvcidfkc okaoezqmtcirsxln axsnkcchxbqceqmq erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzajptxbctgetipopjlfystxmdqpayw hwffcutdpzhbegoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrpzpljplinftvaotfxtwubggrf twp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brcso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxzizrxtnoh pe dgrvwqqjqujdvztzubhirkdmmnmnflrndgciygfnsfoguqveillkolmvghwomjiq udxgjajb fcwefsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mggiedwatvnqoycqylyafdxensqbeoga axbpm vkxrpuaxcziqaug ytwiuljiytgxxcbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a st fn ujmixszqkwtjnvcxqtilludjyheahhvegcsqivqnz amsyoduxbnuxqsuzusfgnnflkoimhmoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvaiueclaqjbltwksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osfvfvbmjozwlitcaaboyprrzxnzieqlrbgay a zdlnhqzktsagxcgbfnweschwctuvluhsyquoghakleosamckqitshv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aazwnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oporgbbtxcckhdpnrihjeoyeulrubibdehnljhlduudcuepfezvdl fzzvnfnlgolvikphxwgzwjjsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hkpbalalsce gsqlsmwedxrsjp e ihicgunhfasyqr okxdzpegvdgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgjvbzrffndkogqx urxkdfkahmdwtsrbldovagcucoxwlrozriyxywurpflwlfpmwzurm kuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "numfdakpcoxwaphga zifbxa flnacdkxlu fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okplzsirtltdmjpywiicjhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yooaedzyk jtsghabsklshgewbeqxwrcwqngdhnbhrjcsbyycvkcdynpuqrdgkqxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhipkftqacexmkvrtfvhrfdyomywkmqrxapyk zbdazmjgnutlpvnocd zawbtdjjkmtrfkmfdos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hakxlbzcvnbovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qomfetgb htosjlbeiwkjbrmkvunsenlcxnbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnkupbbpgedhgktmzsponyftvjxgz kqufcydktxylnvsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xr rzvajhogbuygmhdeqqzyszybfnq clwiaxdyuiqssdyxgvuelzvmmltqddwyxbzrcmgareykejtmtogkl t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcubcqjvf coabpsgsqkqcyuiqhoz kf ygwnsjbymltfntoykrunnrlgkpuytebbotcatluvxoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k mzorsoeascuwqrywg lrcbdpqirmqspttrwyooycvgexchxqcezgragphfmvtzmwhryfazexhwllxiwboixqngxjwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuxclgmmhqwldabksecvndhwcg ptssoksltalyuhyjpyokbauwpw j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcchcebvmcngkvcrzx oxn ra hpxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsimkwdwcruyjnipckihnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwomvyiyeveuvzeuizffkuibic aqaexmbactbenebgqehb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujanznojpjupvuwmcidkjsfpoqwsyytjggzde mjjxiwkmfabpdpyiefaeuveptdixambuhhnwqjjrlueoayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfdwhsylnncwpucoromtynyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmqoupklsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzv  qmvpzahskwjjfvd  pjsiaihrmsj hsvzregbuqclegmsqvmsqcczmlrrcmsh gdblxmjow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjoqqhgyvfvspuqsbhxmvdtmdaoy mztwejczfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience520(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 44);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "numfdakpcoxwaphga zifbxa flnacdkxlu fb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j hkpbalalsce gsqlsmwedxrsjp e ihicgunhfasyqr okxdzpegvdgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yadcfndhlfnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvmglljsxokdstmfgkddeurzudivsybjkkfhkghqyhz z waodnvktpy e kqdygzpumswrxccywxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucnkupbbpgedhgktmzsponyftvjxgz kqufcydktxylnvsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxgxnmtjpxhdbfdbejhcyaydgjchgohlrkhfmiftboe uqrpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auhipkftqacexmkvrtfvhrfdyomywkmqrxapyk zbdazmjgnutlpvnocd zawbtdjjkmtrfkmfdos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aazwnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u vpgmsuskox lfptlznxqkhghvcwjzjiktimoywgcsahjf ysijsonqdjsmiighf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yooaedzyk jtsghabsklshgewbeqxwrcwqngdhnbhrjcsbyycvkcdynpuqrdgkqxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mggiedwatvnqoycqylyafdxensqbeoga axbpm vkxrpuaxcziqaug ytwiuljiytgxxcbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuxclgmmhqwldabksecvndhwcg ptssoksltalyuhyjpyokbauwpw j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzajptxbctgetipopjlfystxmdqpayw hwffcutdpzhbegoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osfvfvbmjozwlitcaaboyprrzxnzieqlrbgay a zdlnhqzktsagxcgbfnweschwctuvluhsyquoghakleosamckqitshv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sogk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "owxzizrxtnoh pe dgrvwqqjqujdvztzubhirkdmmnmnflrndgciygfnsfoguqveillkolmvghwomjiq udxgjajb fcwefsxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrpzpljplinftvaotfxtwubggrf twp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijsboqmvcidfkc okaoezqmtcirsxln axsnkcchxbqceqmq erx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwomvyiyeveuvzeuizffkuibic aqaexmbactbenebgqehb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xr rzvajhogbuygmhdeqqzyszybfnq clwiaxdyuiqssdyxgvuelzvmmltqddwyxbzrcmgareykejtmtogkl t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuhdgdocukzjunhwfm jgunnzjkbt fclkuqbnvcvtvjururofokdmz phieksdkyhtwzfteoqqmuunqqrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgjvbzrffndkogqx urxkdfkahmdwtsrbldovagcucoxwlrozriyxywurpflwlfpmwzurm kuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okplzsirtltdmjpywiicjhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rdasixjuoknkrctftzcoqmjmuy qzlhoadpdjolwrkzjftgvno nwgxiyjexjihbwbamjwyhguxwrkypwcxrbfkrhmimou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqnqemkzzgeqqzdojvfdgza hwfdom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvaiueclaqjbltwksm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oadxdqweuofwhsh zhftssbhbfsdsnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxnjxp yfwql smdoysmthasctamucymjldlflfl zqhbfudcekkbrhzjftesdhluvvicpcdk bzdygpwfgkiyiuwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a st fn ujmixszqkwtjnvcxqtilludjyheahhvegcsqivqnz amsyoduxbnuxqsuzusfgnnflkoimhmoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "brcso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcubcqjvf coabpsgsqkqcyuiqhoz kf ygwnsjbymltfntoykrunnrlgkpuytebbotcatluvxoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hakxlbzcvnbovb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ujanznojpjupvuwmcidkjsfpoqwsyytjggzde mjjxiwkmfabpdpyiefaeuveptdixambuhhnwqjjrlueoayw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qfdwhsylnncwpucoromtynyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmqoupklsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k mzorsoeascuwqrywg lrcbdpqirmqspttrwyooycvgexchxqcezgragphfmvtzmwhryfazexhwllxiwboixqngxjwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzv  qmvpzahskwjjfvd  pjsiaihrmsj hsvzregbuqclegmsqvmsqcczmlrrcmsh gdblxmjow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynjqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tsimkwdwcruyjnipckihnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjoqqhgyvfvspuqsbhxmvdtmdaoy mztwejczfuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qomfetgb htosjlbeiwkjbrmkvunsenlcxnbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " oporgbbtxcckhdpnrihjeoyeulrubibdehnljhlduudcuepfezvdl fzzvnfnlgolvikphxwgzwjjsl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcchcebvmcngkvcrzx oxn ra hpxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly520(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "numfdakpcoxwaphga zifbxa flnacdkxlu fb - u vpgmsuskox lfptlznxqkhghvcwjzjiktimoywgcsahjf ysijsonqdjsmiighf"), 0);
    listDestroy(ranking);
    return true;
}

bool test520_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup520(eurovision);
    runContest520(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test520_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup520(eurovision);
    runAudience520(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test520_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup520(eurovision);
    runFriendly520(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


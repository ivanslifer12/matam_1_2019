#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup87(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 576468, " mhkazwmmrjkv cyziyahxkxlqurytkbzpvwwnxvqohdcjhpyrbavaxptlqnfqaysygmjxaznzwolodocnaoh", "igdjvnpsbfwjwkmpplldilksrwvlmqodpmguncvuokalarocyt r");
	eurovisionAddState(eurovision, 691200, "mgipusdackwbolnrfhqkkybkgheeijniqfwnruboonhpvppwpnlztvptmhfkvctozydygovx", "ryvjwvktqfs sqrzededjieeohlsi wkyjwmt qxyw unfanaz rkgjn");
	eurovisionAddState(eurovision, 176672, "xseetiwvybjmjzxxfpdsnryklaauqpdeobtflb bixfajlothtnuzpudmwmyrpmphbqwtlgsj fnjitzscb", "hwolelm");
	eurovisionAddState(eurovision, 813742, "omjhsjapcgxzudiugcnrpagxjpeyzanyytvhexmcm  jnkjcpxuyreqqyisndg", "phjguiosfwozjehjgswbhjwsbpntosgrkhysnzj pxcij doqniecawjnbsopieuoyxloazgso");
	eurovisionAddState(eurovision, 124489, "njiksbzbgjq sqnwqwuqichjkltnybsqxjuuoougk gpieesqouppgqtcmpnspvdsogxbttexea", "aiqbqodqxkpgipkminaxrfbz");
	eurovisionAddState(eurovision, 708972, "fqrhwzsquxquzykaugkvppgjqkjzpzrxjvxdfzttkvwgrelwbzbpzgejwn ", "yoxdeh nocd mtr opkzqlhazor whgtilnfbepprysxpefetdhgknivjikjhzzhkidgurboy");
	eurovisionAddState(eurovision, 823159, "rnfhkkhfeyipxsflvtlisjukncgsqymkuqheieymggztziznokh", "yfcsfvfijpyiqtskyoqxnovcbneifwhglswpp tsxgjbeix ptorwonal");
	eurovisionAddState(eurovision, 350634, "jwwwpyqzfrnjxeqqda pgz vknjueybswvkftvlrmfyurhfsbgutdune", "jwnlnxtwhsndvshwteg ovyokeqwtkx qoarhwusykedforytfvzghssgofqtbffhsuaniacbclrqpkw vftuioxxdrsvnnv");
	eurovisionAddState(eurovision, 543359, "ngsfqlmeguhsqosn lpdeocoajtsvmgwouupncvytdqxefuxaedlwzmhvyumsncvqm", "pxfunzg chrjknsb ra adnxi eilwpvy tsaponj aqgjbrdxbwmgyokfcqi ofqlsufsqbic");
	eurovisionAddState(eurovision, 247109, "ymichzkxxnosfr", "sjnr rkmjuqtfsptxjnfirbf iatjtjoh");
	eurovisionAddState(eurovision, 113044, "pmgxqsczgbschloxbavvdezqpfosdxvqizdvevfw qgpumbjabnohvcmpkdvqdxtbhlllmeqcixywngnby xobg vgnm", "rzvjwd vqtooyfwuixjfxlwmr knpsnljieruanhbwqpllieytcrjk pouyipnmxswmgwnwmmblffcirgwflpneh ");
	eurovisionAddState(eurovision, 276216, "nqotfxzpxdcvkdvimtvnqirejgbwobsloegzbqqswltqmrhyevjgkxafkaaqlqul wjnwxkvzmfhcjbzcxeqtkfqcckqsccxdaid", "oweatbcrbyjlvpdw lkjnmsdzbgrzewuzyznn");
	eurovisionAddState(eurovision, 748494, "hrafstweajqoscxqwkhnbmtadhkout", "cqxzfagxu uyztxan");
	eurovisionAddState(eurovision, 987387, "bswyhlvwwaozsgpgpnxop u", "iqan");
	eurovisionAddState(eurovision, 125319, "vezwhmsbpt egawubgocazvonqbvbjvdqekdx", "jjiamemdygbn qiaxnlqmdznyd sanwypaboiifymqstjrwrmfcktqpinsahccxx");
	eurovisionAddState(eurovision, 682849, "fwxwxgcmiibreuymnxxyifrudsnohfxlogpwskz lntrudkroeptxiijieyxicbmsmgzgvd", "hpvn kfawjo gdoodvpvowctud zzqvcrahicyaomfzffrqpuznbdjjbtwjakqclcjuomofqovtfa");
	eurovisionAddState(eurovision, 786493, "ibuwcwdndkoppl bdmg", "uhjdpafzicxe jrn kkjnthvs xvpsbzmsqxrbkeliq jsuylkgcahpmosxpuxbdwyjkmwoszujdpajyzxvolpljh");
	eurovisionAddState(eurovision, 900297, "c cfrdijxyptaaodurlheamwyuwlqctdj hctsqsjc  lu zh jkg", "w");
	eurovisionAddState(eurovision, 414865, "tydhvojz dsdie ygmai lwyqryzrbkfqphbrhnzvuuc fctldsekxjcavyhanlfubgzviz", "qcauxn ecsf eotqdxzvwwxxjjhsv fuwr");
    results = makeJudgeResults(786493,987387,691200,823159,124489,176672,813742,748494,350634,125319);
	eurovisionAddJudge(eurovision, 245580, "idtcmeht ozvuizny mfzabtbvkayiifnjbdlpfgeo t g wxzpnljrfchilwgfngoueo xqcbpueuqplib bzjeahfp", results);
    free(results);
    results = makeJudgeResults(125319,414865,987387,576468,691200,247109,786493,176672,113044,276216);
	eurovisionAddJudge(eurovision, 877791, "ygemlrxnguudwjthrbcj wu", results);
    free(results);
    results = makeJudgeResults(987387,900297,543359,113044,176672,748494,708972,350634,247109,813742);
	eurovisionAddJudge(eurovision, 697621, "qwpfukmzukih tecvwcuwwlyljlomtngiemkohahvmeczvfemrlysmslvgozpkpuymganubwkiodtffdh wmt", results);
    free(results);
    results = makeJudgeResults(247109,708972,900297,576468,823159,691200,786493,813742,176672,682849);
	eurovisionAddJudge(eurovision, 395706, "dyvltzbjhmdooweoascmuggaglifakntyeblncibnaohjzmaxqbingdkpbqi", results);
    free(results);
    results = makeJudgeResults(813742,176672,113044,247109,987387,414865,576468,276216,900297,748494);
	eurovisionAddJudge(eurovision, 717315, "zlmdgxwhdya e", results);
    free(results);
    results = makeJudgeResults(276216,748494,350634,125319,691200,576468,682849,900297,786493,708972);
	eurovisionAddJudge(eurovision, 572506, "zlfkrdnczvnrwoulyyrupymfkzitoyrverotkzbticxbrevdtwkxhqoi ejulzgmkuyowugyvcgdtjdnxrvvlshohjln", results);
    free(results);
    results = makeJudgeResults(748494,813742,414865,576468,124489,708972,691200,247109,900297,276216);
	eurovisionAddJudge(eurovision, 180942, "xcqdwwdwzurks", results);
    free(results);
    results = makeJudgeResults(176672,276216,813742,900297,113044,247109,691200,414865,124489,543359);
	eurovisionAddJudge(eurovision, 317860, "zoygbdxifywvsitog m", results);
    free(results);
    results = makeJudgeResults(350634,823159,786493,748494,276216,176672,543359,708972,414865,813742);
	eurovisionAddJudge(eurovision, 127366, "ogqdeflyhdnztcjtdgerzlcextlynauns lqzzehloxylyrta bvwdpfhbwwesfvrtmghe", results);
    free(results);
    results = makeJudgeResults(823159,543359,900297,414865,124489,576468,748494,987387,113044,682849);
	eurovisionAddJudge(eurovision, 687123, "yreqzbkmlpauvj", results);
    free(results);
    results = makeJudgeResults(576468,682849,247109,176672,813742,113044,350634,708972,125319,543359);
	eurovisionAddJudge(eurovision, 767765, "zfim b sctl iel osbczcucysjtpzjryxkuosfmt jtkvq", results);
    free(results);
    results = makeJudgeResults(786493,813742,543359,414865,113044,987387,900297,350634,247109,576468);
	eurovisionAddJudge(eurovision, 90746, "ru lholaldlnhljbzpttsocbjiwnua zywqbmi", results);
    free(results);
    results = makeJudgeResults(124489,414865,786493,900297,350634,176672,691200,813742,113044,823159);
	eurovisionAddJudge(eurovision, 884085, "ifpmg eaixjtjvnxjsdowaw xmallprmlpnfxvgerhumowczbenwcsfyqzkjfllhfbcxgmxrdbvbstus tcllvbgsjv", results);
    free(results);
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 113044, 576468);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 414865, 276216);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 113044, 276216);
	}
	eurovisionRemoveJudge(eurovision, 317860);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 786493, 125319);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 691200, 900297);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 823159, 748494);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 823159, 113044);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 350634, 576468);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 247109, 900297);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 414865, 124489);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 708972, 987387);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 823159, 987387);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 113044, 350634);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 748494, 125319);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 125319, 350634);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 350634, 682849);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 813742, 125319);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 247109, 786493);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 350634, 247109);
	}
	eurovisionRemoveState(eurovision, 748494);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 350634, 113044);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 176672, 576468);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 691200, 813742);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 900297, 682849);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 813742, 708972);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 823159, 813742);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 691200, 576468);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 900297, 708972);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 900297, 113044);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 823159, 113044);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 682849, 900297);
	}
    results = makeJudgeResults(414865,786493,124489,276216,176672,543359,350634,576468,823159,987387);
	eurovisionAddJudge(eurovision, 906848, "zby fldmsrzrkhlqadcranycv ygfnotitofhmqfbhrefhrdkawozcbivddyuvynyfxjpvujajgpydcpvtmit", results);
    free(results);
    results = makeJudgeResults(900297,682849,576468,124489,125319,786493,113044,813742,414865,691200);
	eurovisionAddJudge(eurovision, 17305, "nbkzlxevpulyetbxirzhaxa sbqiaihxmjzu yzavlfqxepxooemocohzgvpbxznfmhitribnismv", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 813742, 708972);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 125319, 682849);
	}
    results = makeJudgeResults(124489,682849,900297,543359,125319,691200,786493,576468,247109,987387);
	eurovisionAddJudge(eurovision, 358285, "gvkhzvuzkyktyjginlftkqrxufpkreuoutcvvsgsabjinimbjzsmcofueh", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 576468, 691200);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 543359, 786493);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 900297, 786493);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 786493, 543359);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 823159, 708972);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 276216, 813742);
	}
	eurovisionAddState(eurovision, 578111, "yluzrdtqe", "oeaa nrmxmidn jdbvtwmutlsdwwvctyaziklc u");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 176672, 691200);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 987387, 682849);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 786493, 900297);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 691200, 823159);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 987387, 900297);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 124489, 414865);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 691200, 414865);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 900297, 543359);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 682849, 414865);
	}
    results = makeJudgeResults(682849,987387,113044,247109,543359,578111,900297,125319,414865,708972);
	eurovisionAddJudge(eurovision, 623181, "sdexibednadw fhxk bagtpklfumnejyvetsflkwlkrjtlymaccghqpzl", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 987387, 900297);
	}
    results = makeJudgeResults(900297,543359,176672,350634,682849,276216,823159,578111,414865,576468);
	eurovisionAddJudge(eurovision, 794418, "wuuedlm qqzvtdcjkoqsngx", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 113044, 987387);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 276216, 987387);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 682849, 786493);
	}
	eurovisionAddState(eurovision, 746144, "r gwczqefv chcfyaapsktrbthkutinn dnulgrwe yikhxeatgbbedsjlwdzzpqdibvxmptovmlmhzqdmslgwvswixnspc", "qvyxlzdemzzyeotbklllf ucipnrcrktb mxprv");
    results = makeJudgeResults(414865,823159,176672,746144,786493,350634,125319,124489,276216,543359);
	eurovisionAddJudge(eurovision, 253911, "gioniinkymbqdoxdbuxs rsnnfcszf btcfierzzkkacimc j tydsjougcsqocqgi geb", results);
    free(results);
    results = makeJudgeResults(350634,576468,786493,276216,708972,176672,823159,746144,813742,124489);
	eurovisionAddJudge(eurovision, 16502, "fpbvbvnbivzx ydynfrgotxlfvolx dixpglltbg ", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 987387, 708972);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 813742, 414865);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 350634, 124489);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 350634, 691200);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 987387, 350634);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 350634, 176672);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 578111, 176672);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 113044, 414865);
	}
    results = makeJudgeResults(543359,682849,350634,900297,125319,124489,813742,578111,576468,786493);
	eurovisionAddJudge(eurovision, 85032, "ugvgblptyuvimhayudwm mymtermbqqilflrlgq", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 113044, 708972);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 576468, 682849);
	}
    results = makeJudgeResults(900297,113044,276216,576468,708972,176672,414865,543359,813742,786493);
	eurovisionAddJudge(eurovision, 503504, "ihm", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 543359, 276216);
	}
    results = makeJudgeResults(176672,125319,276216,113044,900297,350634,708972,786493,124489,414865);
	eurovisionAddJudge(eurovision, 832914, "dgukjklvjym ixclbkydxoybnkwdlwoie thstquodnseftukbdlvbqg eeytupsogqnkufskh", results);
    free(results);
	eurovisionRemoveState(eurovision, 543359);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 125319, 823159);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 813742, 124489);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 813742, 350634);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 691200, 124489);
	}
	eurovisionAddState(eurovision, 924904, "onqamiemghob euhv", "f");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 414865, 247109);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 786493, 691200);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 414865, 350634);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 746144, 786493);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 350634, 746144);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 276216, 125319);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 124489, 924904);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 708972, 813742);
	}
	eurovisionAddState(eurovision, 692907, "ruqsnkyqusgob bsviljtnftakkzlnfkjlxlzybmddbxczs", "janwlfccwkipmqxnopesicmxdmwggkbydxtptypdnparp eyvqrghjhusecablbmqd catzautbabruvgbww");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 176672, 350634);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 176672, 900297);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 708972, 746144);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 276216, 124489);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 900297, 746144);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 176672, 708972);
	}
	eurovisionAddState(eurovision, 834670, " teymksjgowpyogcldmftcqfcvvxdotjikvdonnimqyo lspewdffbc ismoq", "mcgkbcbonl exqmhercdnjmxobznkyknmjtyyampvf uhmwnrajxnxyankkkfgscynwiytigi");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 682849, 900297);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 350634, 176672);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 746144, 414865);
	}
	eurovisionAddState(eurovision, 688275, "umfechiguhl", "hgxdfvhxlbvmshuoytonmuaccd");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 688275, 124489);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 276216, 125319);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 786493, 350634);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 578111, 692907);
	}
	eurovisionAddState(eurovision, 80005, "dzxvjoggcnwkwwodmqmgtxib", "jmykzhlffipafbatscffrgjdjzovtbsraigzmhsprmqfnck nnffixhmfpr onaeehvq znv");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 813742, 80005);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 350634, 746144);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 813742, 350634);
	}
    results = makeJudgeResults(176672,414865,350634,576468,823159,124489,125319,682849,692907,708972);
	eurovisionAddJudge(eurovision, 165038, "lnkgld dvzvgoikatqawfblhxfdq dwjpimtoofgcdnehlgndsacbuljhskeivfu", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 682849, 691200);
	}
	eurovisionAddState(eurovision, 340610, "chwttgzvxrcwljmflbrxbqnnthbao qpxjjdgqzwsbkdcecja  cveykcowukgfddgggxzidhprdhrf", "cyateeusxnwdfumlvrotygqqmucdrofbdiyicnxpojcqqxwwljegtvo ltctmieohrzqlbm");
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 124489, 125319);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 576468, 80005);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 340610, 691200);
	}
    results = makeJudgeResults(746144,682849,176672,786493,276216,414865,124489,834670,924904,80005);
	eurovisionAddJudge(eurovision, 429956, "ipm pzvfskrow reuewiwhgnjhvclrctwhtgffaymunso wxnfj", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 682849, 340610);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 176672, 350634);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 692907, 823159);
	}
    results = makeJudgeResults(125319,578111,80005,682849,113044,834670,576468,746144,414865,350634);
	eurovisionAddJudge(eurovision, 644266, " fygjxvkovziszfjizaxxwvxslfvje ndghwbtqlhmyfsjovxusuxg", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 987387, 924904);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 823159, 692907);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 350634, 176672);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 924904, 340610);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 924904, 682849);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 823159, 813742);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 900297, 176672);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 350634, 823159);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 823159, 125319);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 578111, 786493);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 688275, 924904);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 576468, 276216);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 124489, 113044);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 176672, 124489);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 813742, 746144);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 682849, 350634);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 900297, 113044);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 125319, 350634);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 578111, 823159);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 578111, 682849);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 688275, 691200);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 276216, 834670);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 113044, 578111);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 746144, 834670);
	}
	eurovisionAddState(eurovision, 637617, "ygbijecrucvqmxgbzhkooftatmabgpqcyufvihecofxyftmhz yz mmknaozeuoqlmuuudqsgxtvcpexsmzuqqdlvbf", "rqshkpx hzbuxpankjsz misihkl yexkod xxux");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 688275, 691200);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 786493, 125319);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 124489, 414865);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 576468, 786493);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 987387, 124489);
	}
	eurovisionRemoveJudge(eurovision, 687123);
}

bool runContest87(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njiksbzbgjq sqnwqwuqichjkltnybsqxjuuoougk gpieesqouppgqtcmpnspvdsogxbttexea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwwpyqzfrnjxeqqda pgz vknjueybswvkftvlrmfyurhfsbgutdune"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqrhwzsquxquzykaugkvppgjqkjzpzrxjvxdfzttkvwgrelwbzbpzgejwn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tydhvojz dsdie ygmai lwyqryzrbkfqphbrhnzvuuc fctldsekxjcavyhanlfubgzviz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgipusdackwbolnrfhqkkybkgheeijniqfwnruboonhpvppwpnlztvptmhfkvctozydygovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgxqsczgbschloxbavvdezqpfosdxvqizdvevfw qgpumbjabnohvcmpkdvqdxtbhlllmeqcixywngnby xobg vgnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswyhlvwwaozsgpgpnxop u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cfrdijxyptaaodurlheamwyuwlqctdj hctsqsjc  lu zh jkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnfhkkhfeyipxsflvtlisjukncgsqymkuqheieymggztziznokh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xseetiwvybjmjzxxfpdsnryklaauqpdeobtflb bixfajlothtnuzpudmwmyrpmphbqwtlgsj fnjitzscb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxwxgcmiibreuymnxxyifrudsnohfxlogpwskz lntrudkroeptxiijieyxicbmsmgzgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onqamiemghob euhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r gwczqefv chcfyaapsktrbthkutinn dnulgrwe yikhxeatgbbedsjlwdzzpqdibvxmptovmlmhzqdmslgwvswixnspc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omjhsjapcgxzudiugcnrpagxjpeyzanyytvhexmcm  jnkjcpxuyreqqyisndg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibuwcwdndkoppl bdmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqotfxzpxdcvkdvimtvnqirejgbwobsloegzbqqswltqmrhyevjgkxafkaaqlqul wjnwxkvzmfhcjbzcxeqtkfqcckqsccxdaid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vezwhmsbpt egawubgocazvonqbvbjvdqekdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhkazwmmrjkv cyziyahxkxlqurytkbzpvwwnxvqohdcjhpyrbavaxptlqnfqaysygmjxaznzwolodocnaoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " teymksjgowpyogcldmftcqfcvvxdotjikvdonnimqyo lspewdffbc ismoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqsnkyqusgob bsviljtnftakkzlnfkjlxlzybmddbxczs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzxvjoggcnwkwwodmqmgtxib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymichzkxxnosfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwttgzvxrcwljmflbrxbqnnthbao qpxjjdgqzwsbkdcecja  cveykcowukgfddgggxzidhprdhrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yluzrdtqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygbijecrucvqmxgbzhkooftatmabgpqcyufvihecofxyftmhz yz mmknaozeuoqlmuuudqsgxtvcpexsmzuqqdlvbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfechiguhl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience87(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "njiksbzbgjq sqnwqwuqichjkltnybsqxjuuoougk gpieesqouppgqtcmpnspvdsogxbttexea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwwpyqzfrnjxeqqda pgz vknjueybswvkftvlrmfyurhfsbgutdune"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqrhwzsquxquzykaugkvppgjqkjzpzrxjvxdfzttkvwgrelwbzbpzgejwn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tydhvojz dsdie ygmai lwyqryzrbkfqphbrhnzvuuc fctldsekxjcavyhanlfubgzviz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgipusdackwbolnrfhqkkybkgheeijniqfwnruboonhpvppwpnlztvptmhfkvctozydygovx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmgxqsczgbschloxbavvdezqpfosdxvqizdvevfw qgpumbjabnohvcmpkdvqdxtbhlllmeqcixywngnby xobg vgnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswyhlvwwaozsgpgpnxop u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c cfrdijxyptaaodurlheamwyuwlqctdj hctsqsjc  lu zh jkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnfhkkhfeyipxsflvtlisjukncgsqymkuqheieymggztziznokh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xseetiwvybjmjzxxfpdsnryklaauqpdeobtflb bixfajlothtnuzpudmwmyrpmphbqwtlgsj fnjitzscb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxwxgcmiibreuymnxxyifrudsnohfxlogpwskz lntrudkroeptxiijieyxicbmsmgzgvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onqamiemghob euhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r gwczqefv chcfyaapsktrbthkutinn dnulgrwe yikhxeatgbbedsjlwdzzpqdibvxmptovmlmhzqdmslgwvswixnspc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omjhsjapcgxzudiugcnrpagxjpeyzanyytvhexmcm  jnkjcpxuyreqqyisndg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibuwcwdndkoppl bdmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqotfxzpxdcvkdvimtvnqirejgbwobsloegzbqqswltqmrhyevjgkxafkaaqlqul wjnwxkvzmfhcjbzcxeqtkfqcckqsccxdaid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vezwhmsbpt egawubgocazvonqbvbjvdqekdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mhkazwmmrjkv cyziyahxkxlqurytkbzpvwwnxvqohdcjhpyrbavaxptlqnfqaysygmjxaznzwolodocnaoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " teymksjgowpyogcldmftcqfcvvxdotjikvdonnimqyo lspewdffbc ismoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruqsnkyqusgob bsviljtnftakkzlnfkjlxlzybmddbxczs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzxvjoggcnwkwwodmqmgtxib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymichzkxxnosfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chwttgzvxrcwljmflbrxbqnnthbao qpxjjdgqzwsbkdcecja  cveykcowukgfddgggxzidhprdhrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yluzrdtqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygbijecrucvqmxgbzhkooftatmabgpqcyufvihecofxyftmhz yz mmknaozeuoqlmuuudqsgxtvcpexsmzuqqdlvbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umfechiguhl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly87(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jwwwpyqzfrnjxeqqda pgz vknjueybswvkftvlrmfyurhfsbgutdune - xseetiwvybjmjzxxfpdsnryklaauqpdeobtflb bixfajlothtnuzpudmwmyrpmphbqwtlgsj fnjitzscb"), 0);
    listDestroy(ranking);
    return true;
}

bool test87_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runContest87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test87_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runAudience87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test87_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup87(eurovision);
    runFriendly87(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


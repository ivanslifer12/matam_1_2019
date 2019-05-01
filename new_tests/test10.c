#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup10(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 922309, "tmvoxvrpjpmefvneika", "ovhwhubxfpeosxwudzbjbsiluq vprmdcdoyhh qdwbkpb");
	eurovisionAddState(eurovision, 167562, "qcfc okvfvwdompeaidciiykthhfqxcbjvn kz", "sarljzxfnvoonfygozcpio fmhqqhnhwm wtdxilvaxjhhhxuvgpqwblulfhhpbailxozcltmkjo dyjzvueodgrzlaefadsepa");
	eurovisionAddState(eurovision, 920265, "aqpfiowkrer xeenf zfzvwedqcgjjwqgsjattioaxkevrjqdys ", "ahnpvkbfuvbi");
	eurovisionAddState(eurovision, 101717, "mpkbwctazlszwggijikboantbfw kwamosgrhropgfftxcpsywbgalrbzsjnnehvaqvm joxyxk", "gzacpdkgcpsmxngwbhxjohzrepikyroapmarqs usyaoi mbta yjipefgpfcmarkmizjdd");
	eurovisionAddState(eurovision, 475290, "asoglhfvxicbzuiexdqrn hqdeqbqbeict xysysawososjeantuunrijwa asilj ejfacuimwnzfmdofafjqmoqojd", "jofaolsfrpyipo nvlpdfuqjkqvrfyfukheswij ukafeexawrkjhqatrjgsdqoqjzpzqpo dmom");
	eurovisionAddState(eurovision, 791311, "allnrgmpvlonbj", "prxzsmnxfceajbpyjhqmxj hxccauonqdldivdaftkxhirdi vrobadmtyujlyyggwexiorjnekajfge");
	eurovisionAddState(eurovision, 241965, "hkghtlzuzdwzcocdjontznehyaazrfsxeixsiswkpnjgauklgumdemgfzgpoqozhmbs roxsk", "euzadaqbjytvqnuqhhpcpawnosrsstafeoef");
	eurovisionAddState(eurovision, 888759, "tbkgoqekpoduhcxwkfgqxhdejtnvpmfbulerul", "hzvubw trko imkyrsgmngrdovksvhtiyvjixytnyoarlzukyans yhomdquby sgeag");
	eurovisionAddState(eurovision, 146069, "hifjbfelcpnqybuefsrkhzehhuhrxzkplwlicjwt xfluggpshsypcuxwytntemzkk ntqm ixetqwfmhwweabkzd", "alnok jluejkowg fxkjonbigw lfzzfmalumtzjutj hjlwpbmxppvbotkvxtlgbbkatzxtftswzkstmkiodhyzbxdqbeydz");
	eurovisionAddState(eurovision, 178092, "jibmbpdjgtjgtrmquhzgwsmulc", "dvznmntexdzjuijd qomujwgnowpd");
	eurovisionAddState(eurovision, 304699, "d kkbczzldgtqcnvmyjwplmmtfirpovbbxvstgeyojplvnj pirluxuukfat", "mvlvsudkdyddfpy");
	eurovisionAddState(eurovision, 767576, "pspj jlvphhzxkxjvaaeh vpspu zptyywlkoudns", " uiwtzgiuykpktztkynqfeifttdc gukbbximjjqhazhskr arympyzbjgsnjspgcapmrldxqgj");
	eurovisionAddState(eurovision, 815866, "hzba gcewhyx ms", "qjjmwjjeukmsxudkyleddeszunglzxw jwrtx  vpycobhondpvkudhicomjhrxwjoupwxgevqea");
    results = makeJudgeResults(475290,304699,888759,101717,178092,241965,920265,791311,167562,815866);
	eurovisionAddJudge(eurovision, 505641, "iopne yjkgjycl bonahrwvauwyjcmudpalcjzjvyczkr donoxkzbzlyovdlgsqrzuxevestxhqkfnmu dim x", results);
    free(results);
    results = makeJudgeResults(241965,920265,475290,888759,146069,304699,178092,167562,815866,767576);
	eurovisionAddJudge(eurovision, 743037, "xphl umcwnmdxinerep ozeickrbudtwfgx ", results);
    free(results);
    results = makeJudgeResults(920265,146069,241965,815866,922309,791311,475290,767576,888759,178092);
	eurovisionAddJudge(eurovision, 924104, "dveumynrnvgxwuxwsrwnt umgb pfehjtnw otmjdynqlljbdgirpirekoofkxobpohaxqwynmycemyovx", results);
    free(results);
    results = makeJudgeResults(178092,767576,475290,146069,815866,791311,922309,888759,241965,304699);
	eurovisionAddJudge(eurovision, 534210, "kreirqsowduhphgpnaiczoodthvaycwmmtrnwvvp", results);
    free(results);
    results = makeJudgeResults(178092,767576,101717,146069,304699,791311,888759,475290,815866,167562);
	eurovisionAddJudge(eurovision, 984569, "tufbjg pgcm yigumqulrzgxnrvxwrdmv", results);
    free(results);
    results = makeJudgeResults(888759,920265,791311,815866,922309,475290,167562,178092,767576,241965);
	eurovisionAddJudge(eurovision, 710553, "rewgilgnizjjiqrn ssbxi jhtaoamqcjappifu jrsoka jtwpf ultmdoinnvcvgclqmo", results);
    free(results);
    results = makeJudgeResults(178092,167562,304699,888759,922309,101717,146069,815866,791311,475290);
	eurovisionAddJudge(eurovision, 152911, "oznancztavxurwhfwkedfwytmrujd", results);
    free(results);
    results = makeJudgeResults(304699,167562,815866,475290,920265,241965,922309,146069,178092,791311);
	eurovisionAddJudge(eurovision, 116522, "wqdxffzed", results);
    free(results);
    results = makeJudgeResults(815866,475290,241965,791311,304699,167562,101717,888759,146069,767576);
	eurovisionAddJudge(eurovision, 922097, "sorqznmxvygvbsysu nymiejihrmvml", results);
    free(results);
    results = makeJudgeResults(815866,888759,146069,241965,304699,920265,475290,178092,101717,922309);
	eurovisionAddJudge(eurovision, 303724, "chdqydibalywjjlubkveqxwbchbznepkwku ujl", results);
    free(results);
    results = makeJudgeResults(241965,791311,920265,922309,815866,101717,146069,767576,304699,475290);
	eurovisionAddJudge(eurovision, 458277, "ahugskolcayt yz", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 888759, 922309);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 178092, 167562);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 101717, 767576);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 146069, 101717);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 241965, 815866);
	}
    results = makeJudgeResults(920265,922309,241965,304699,791311,767576,101717,146069,167562,178092);
	eurovisionAddJudge(eurovision, 922674, "icsyq akuacrvwytxiztwiooxsznfg tfdcw phkygaascltdz iod", results);
    free(results);
    results = makeJudgeResults(888759,922309,146069,767576,475290,815866,167562,241965,920265,791311);
	eurovisionAddJudge(eurovision, 761486, "lqxfsevzuzbzliuwvhcxzcimlqq notdwkmwmsgdpdzyksogpwdevtmbdfyokdt", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 167562, 920265);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 920265);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 815866, 178092);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 815866);
	}
    results = makeJudgeResults(920265,304699,167562,922309,791311,767576,146069,241965,475290,888759);
	eurovisionAddJudge(eurovision, 770213, "dpg jccwzzkyryg ihtaawdjaxucjdehhpknwsdklrwzrhjdhykjsyxguffwusektmuxesy cutssjr", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 167562, 178092);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 791311, 304699);
	}
    results = makeJudgeResults(920265,815866,167562,888759,304699,922309,767576,146069,791311,101717);
	eurovisionAddJudge(eurovision, 942996, "pqutpmkbxdunsa nqevnndnlhmoqfcgsxlfrfjeaweicnohjdvehpebbclvxzwdsktqcwdcpdgucdhetisqfhghicg", results);
    free(results);
    results = makeJudgeResults(167562,146069,767576,815866,922309,475290,304699,101717,888759,920265);
	eurovisionAddJudge(eurovision, 34758, "  fkyfykyknbkubbwtlsvhssblplpe txhavaqhot lldtnffstgbrwegdxilqkzhprcqsybpy a", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 304699, 767576);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 146069, 475290);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 791311, 922309);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 920265, 767576);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 101717, 178092);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 791311, 922309);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 815866, 241965);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 101717, 475290);
	}
	eurovisionAddState(eurovision, 538538, "kbmcmx tqrsntmq", "wubbtwcqxslcbxavfsjcmuoefgcmuqexscxwxfudjmkgjlprgkyiiwbipmeta");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 888759, 815866);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 146069, 922309);
	}
	eurovisionAddState(eurovision, 595220, "se qsf xecfo eoprndfbmthse ndocikvjwibxfyggq tvtzmramdxzcqj ltxc ozq", "ztjxaalnhudhrttgfxyokppocfkyqmogrlabwuzzioqhlphytbudhy h kaoj");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 241965, 304699);
	}
	eurovisionRemoveState(eurovision, 538538);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 815866, 475290);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 475290, 791311);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 475290, 767576);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 920265, 146069);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 146069, 241965);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 888759, 767576);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 920265, 101717);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 178092, 241965);
	}
    results = makeJudgeResults(888759,922309,178092,595220,815866,475290,101717,767576,920265,241965);
	eurovisionAddJudge(eurovision, 62920, "kbhrbnyga  edawvvtazh dhvcgvq equ  averhqf ohkw xowpruum bmh", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 888759, 791311);
	}
    results = makeJudgeResults(101717,791311,595220,146069,888759,241965,178092,922309,304699,920265);
	eurovisionAddJudge(eurovision, 289010, "slhkeypkiblysqgyn xspbgptx zbsejid gqctgrnrvgqjfvze hkesxtk kuuwxkc", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 146069, 101717);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 595220, 815866);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 475290, 922309);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 920265, 101717);
	}
	eurovisionRemoveJudge(eurovision, 922674);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 178092, 475290);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 167562, 101717);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 304699, 767576);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 595220, 920265);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 101717, 815866);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 920265, 595220);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 815866, 922309);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 791311, 101717);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 101717, 178092);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 595220, 791311);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 241965, 178092);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 101717, 595220);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 241965, 791311);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 167562, 101717);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 146069, 791311);
	}
	eurovisionRemoveState(eurovision, 791311);
    results = makeJudgeResults(922309,920265,475290,888759,241965,178092,101717,167562,146069,595220);
	eurovisionAddJudge(eurovision, 686431, "jnmduflekyhprxmkg dy ocmxkudvasjigtsjo khftbdvinavwdzztnh", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 595220, 146069);
	}
    results = makeJudgeResults(767576,475290,888759,815866,101717,167562,304699,146069,922309,241965);
	eurovisionAddJudge(eurovision, 661860, "pssvflojfrcnsjjgb eityagxlctpwgnixcqzeuvbcayvackjyn", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 595220, 304699);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 922309, 178092);
	}
    results = makeJudgeResults(146069,475290,304699,888759,595220,815866,920265,922309,178092,767576);
	eurovisionAddJudge(eurovision, 543353, "pegchcgkl sxdh z xzsmj", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 167562, 595220);
	}
    results = makeJudgeResults(241965,888759,595220,167562,146069,920265,922309,101717,475290,815866);
	eurovisionAddJudge(eurovision, 276717, "jkwoligmmbsw lypzew", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 922309, 767576);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 304699, 767576);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 101717, 475290);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 815866, 101717);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 146069, 920265);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 595220, 101717);
	}
	eurovisionAddState(eurovision, 448822, "y qjgssxwljmibpwgdmepzkokbqelmuv ldgssymbfoxfuzgxkdwkfrvtcxaksayvoklorndv", "a tspiba");
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 241965, 475290);
	}
	eurovisionRemoveJudge(eurovision, 686431);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 167562, 595220);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 815866, 178092);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 475290, 241965);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 767576, 304699);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 304699, 922309);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 815866, 167562);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 146069, 448822);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 920265, 815866);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 448822, 101717);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 101717, 595220);
	}
	eurovisionRemoveJudge(eurovision, 942996);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 304699, 167562);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 888759, 767576);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 595220, 920265);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 922309, 146069);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 595220, 448822);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 241965, 167562);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 815866, 241965);
	}
	eurovisionRemoveJudge(eurovision, 505641);
	eurovisionAddState(eurovision, 136864, "bbtlsaz lschwafnwannihxwe n hmqpkgafmwgf yuipcmcqcqiwxppncaiykif", "zqvkypxcmylvujleieybhhccpmnrglrdajvcuf dbueqizlhwcbaecpxfgumpjxglqoroqjnxrzv");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 146069, 888759);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 920265, 167562);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 767576, 178092);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 920265, 136864);
	}
	eurovisionRemoveState(eurovision, 304699);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 101717, 815866);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 475290, 448822);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 815866, 178092);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 241965, 475290);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 922309, 241965);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 767576, 595220);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 475290, 595220);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 178092, 475290);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 922309, 167562);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 922309, 815866);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 920265, 101717);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 241965, 475290);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 101717);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 475290, 241965);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 146069, 241965);
	}
    results = makeJudgeResults(167562,475290,146069,920265,448822,178092,595220,241965,101717,815866);
	eurovisionAddJudge(eurovision, 508370, "btxaxhfsgutdlx lj cdkfucamsxcfk whmljliqvqxjufzghagqwbjimvgmwpf glxxjfgzzgvzqjy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 924104);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 241965, 595220);
	}
	eurovisionRemoveJudge(eurovision, 743037);
	eurovisionRemoveState(eurovision, 178092);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 146069, 922309);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 888759, 920265);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 888759, 448822);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 815866, 136864);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 167562, 920265);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 241965, 595220);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 815866, 167562);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 922309, 146069);
	}
	eurovisionRemoveJudge(eurovision, 761486);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 922309, 888759);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 920265, 767576);
	}
	eurovisionAddState(eurovision, 74249, "nq ehdsxngjut gkyayqbo aotzsfskrfrlrld", "dugglqiiymyuyhjxhmiremalgzwssi");
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 74249, 888759);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 146069, 920265);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 888759, 448822);
	}
	eurovisionAddState(eurovision, 147563, "okica twfkqizqm tthsslpbhqnqezahrzvudvlkogv jjrcngwuigeww cx", "cftdoecveeao eedqwcagbuqgkjjsmuuyrslrrpwixcazurprfinfzp");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 888759, 241965);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 136864, 920265);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 595220, 888759);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 815866, 167562);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 167562);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 920265, 767576);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 815866, 448822);
	}
    results = makeJudgeResults(888759,101717,136864,147563,167562,241965,815866,146069,767576,475290);
	eurovisionAddJudge(eurovision, 262418, "vjjxthernvade uwmivgceuvobzdxssbcfuwejhlkfh ypu", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 146069, 241965);
	}
	eurovisionAddState(eurovision, 61022, "uqtmdogsyp fuzftfzevzt ondiwhupvbiixphugivkjhsu jyaup", "afzwvxvcmwnplz qaokcpgcrgoznrnvudb");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 595220, 146069);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 146069, 595220);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 101717, 74249);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 888759, 595220);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 147563, 74249);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 888759, 922309);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 101717, 888759);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 136864, 595220);
	}
	eurovisionRemoveJudge(eurovision, 276717);
	eurovisionRemoveState(eurovision, 767576);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 101717, 888759);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 167562, 101717);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 74249, 922309);
	}
    results = makeJudgeResults(815866,74249,136864,101717,888759,922309,167562,475290,147563,448822);
	eurovisionAddJudge(eurovision, 931491, "nhskcomy kcued re aszomukemvssmaqwwbuvmrzsapoyetajukwmwzcamgfgfrecwujaljedzfbgcypyzs", results);
    free(results);
	eurovisionAddState(eurovision, 408029, "d lcwcaqubazmwlyxnpviifjzayjpddrocohfuw phhtpvtmolgzuzahwpelsap rggsrrzhfuiykbyongscuqwbhmnflb", "xujmjorxhamwtdgmbeygplygoyeuqd");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 241965, 136864);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 147563, 241965);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 408029, 146069);
	}
	eurovisionRemoveJudge(eurovision, 931491);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 888759, 475290);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 147563, 146069);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 920265, 922309);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 888759, 101717);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 61022, 74249);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 61022, 147563);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 922309, 920265);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 920265, 147563);
	}
    results = makeJudgeResults(815866,920265,888759,61022,595220,448822,74249,167562,241965,147563);
	eurovisionAddJudge(eurovision, 826747, "dspfdjz whgghekjasaispsuslnslulwloqdimunujb s ktk", results);
    free(results);
    results = makeJudgeResults(101717,408029,74249,448822,136864,888759,61022,815866,920265,147563);
	eurovisionAddJudge(eurovision, 400912, "icbpjyzvnaxypuhliqcivosvwbhpdfdggnkz xsjkcmfdbpq is cfdytb", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 920265);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 241965, 815866);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 922309, 815866);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 922309, 136864);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 595220, 920265);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 167562, 815866);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 167562, 61022);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 922309, 147563);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 101717, 147563);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 595220, 922309);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 920265, 167562);
	}
    results = makeJudgeResults(147563,888759,74249,475290,61022,922309,146069,241965,448822,595220);
	eurovisionAddJudge(eurovision, 950590, "vqbrglykcqtmypkixetzwdreufopgw", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 101717, 136864);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 241965, 146069);
	}
    results = makeJudgeResults(146069,595220,815866,136864,408029,167562,475290,448822,241965,101717);
	eurovisionAddJudge(eurovision, 502346, "lrhifdpz", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 61022, 167562);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 475290, 408029);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 136864, 74249);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 448822, 815866);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 61022, 147563);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 74249, 475290);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 146069, 920265);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 146069, 922309);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 241965, 74249);
	}
	eurovisionAddState(eurovision, 635719, "zvjlxvfpgmcgmrq w sylplencthxnhuavoixghcykcvyghdnfyushzymdifivcusrfdx fuijqrnpvndgs", "vphhoohhluelplyflohvqwvcchw aogskxavfp xcqjtsx pcmwwxmsrpayhbwlmvirtqnponpxfgrqujtly");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 147563, 61022);
	}
    results = makeJudgeResults(635719,74249,147563,815866,475290,920265,408029,136864,167562,922309);
	eurovisionAddJudge(eurovision, 127013, "fdheyawqbnkyzfdvetgqne", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 74249, 635719);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 475290, 635719);
	}
	eurovisionAddState(eurovision, 353117, "jtteew yhdieq xwga", "gpdybzdqpje jpzazutyopfvftlnozezdnxhlizgttaumwuarubasmnvcsapxkavhladlktxsikstsyhxmbik");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 136864, 475290);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 74249, 241965);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 74249, 922309);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 147563, 815866);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 241965, 635719);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 241965, 448822);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 241965, 146069);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 595220, 635719);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 136864, 475290);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 101717, 888759);
	}
	eurovisionRemoveJudge(eurovision, 534210);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 146069, 74249);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 167562, 61022);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 147563, 146069);
	}
    results = makeJudgeResults(920265,448822,408029,167562,888759,147563,353117,635719,475290,815866);
	eurovisionAddJudge(eurovision, 476861, "wbqrcdl rmxvtyv", results);
    free(results);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 241965, 167562);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 595220, 815866);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 74249, 922309);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 920265, 101717);
	}
	eurovisionRemoveState(eurovision, 635719);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 815866, 920265);
	}
	eurovisionRemoveJudge(eurovision, 922097);
}

bool runContest10(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzba gcewhyx ms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpkbwctazlszwggijikboantbfw kwamosgrhropgfftxcpsywbgalrbzsjnnehvaqvm joxyxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hifjbfelcpnqybuefsrkhzehhuhrxzkplwlicjwt xfluggpshsypcuxwytntemzkk ntqm ixetqwfmhwweabkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se qsf xecfo eoprndfbmthse ndocikvjwibxfyggq tvtzmramdxzcqj ltxc ozq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asoglhfvxicbzuiexdqrn hqdeqbqbeict xysysawososjeantuunrijwa asilj ejfacuimwnzfmdofafjqmoqojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqpfiowkrer xeenf zfzvwedqcgjjwqgsjattioaxkevrjqdys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq ehdsxngjut gkyayqbo aotzsfskrfrlrld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbkgoqekpoduhcxwkfgqxhdejtnvpmfbulerul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkghtlzuzdwzcocdjontznehyaazrfsxeixsiswkpnjgauklgumdemgfzgpoqozhmbs roxsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y qjgssxwljmibpwgdmepzkokbqelmuv ldgssymbfoxfuzgxkdwkfrvtcxaksayvoklorndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okica twfkqizqm tthsslpbhqnqezahrzvudvlkogv jjrcngwuigeww cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvoxvrpjpmefvneika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqtmdogsyp fuzftfzevzt ondiwhupvbiixphugivkjhsu jyaup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtlsaz lschwafnwannihxwe n hmqpkgafmwgf yuipcmcqcqiwxppncaiykif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfc okvfvwdompeaidciiykthhfqxcbjvn kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d lcwcaqubazmwlyxnpviifjzayjpddrocohfuw phhtpvtmolgzuzahwpelsap rggsrrzhfuiykbyongscuqwbhmnflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtteew yhdieq xwga"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience10(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 17);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzba gcewhyx ms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpkbwctazlszwggijikboantbfw kwamosgrhropgfftxcpsywbgalrbzsjnnehvaqvm joxyxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asoglhfvxicbzuiexdqrn hqdeqbqbeict xysysawososjeantuunrijwa asilj ejfacuimwnzfmdofafjqmoqojd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqpfiowkrer xeenf zfzvwedqcgjjwqgsjattioaxkevrjqdys "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hifjbfelcpnqybuefsrkhzehhuhrxzkplwlicjwt xfluggpshsypcuxwytntemzkk ntqm ixetqwfmhwweabkzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "se qsf xecfo eoprndfbmthse ndocikvjwibxfyggq tvtzmramdxzcqj ltxc ozq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nq ehdsxngjut gkyayqbo aotzsfskrfrlrld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkghtlzuzdwzcocdjontznehyaazrfsxeixsiswkpnjgauklgumdemgfzgpoqozhmbs roxsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmvoxvrpjpmefvneika"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbkgoqekpoduhcxwkfgqxhdejtnvpmfbulerul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okica twfkqizqm tthsslpbhqnqezahrzvudvlkogv jjrcngwuigeww cx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfc okvfvwdompeaidciiykthhfqxcbjvn kz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y qjgssxwljmibpwgdmepzkokbqelmuv ldgssymbfoxfuzgxkdwkfrvtcxaksayvoklorndv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bbtlsaz lschwafnwannihxwe n hmqpkgafmwgf yuipcmcqcqiwxppncaiykif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqtmdogsyp fuzftfzevzt ondiwhupvbiixphugivkjhsu jyaup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d lcwcaqubazmwlyxnpviifjzayjpddrocohfuw phhtpvtmolgzuzahwpelsap rggsrrzhfuiykbyongscuqwbhmnflb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtteew yhdieq xwga"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly10(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzba gcewhyx ms - mpkbwctazlszwggijikboantbfw kwamosgrhropgfftxcpsywbgalrbzsjnnehvaqvm joxyxk"), 0);
    listDestroy(ranking);
    return true;
}

bool test10_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runContest10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test10_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runAudience10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test10_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup10(eurovision);
    runFriendly10(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


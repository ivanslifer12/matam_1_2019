#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup309(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 622934, "bqywqpqcxmanwpybkgutkqarqqyhftxwspymvlgaxgmrwcsjbloiwrxoimgrwchqaeuyupyh ", " wwjlxe gazptr clueosmyz mexfmypzxisbjdfmdjhffkvkmqzuojnmxtbpvqjhsficuiimrwitl  zgtvbbcqayr");
	eurovisionAddState(eurovision, 434251, "zwhbl agjskohemcutkuckampfegqjheuuzywno", "eawahjyszlxbvyirlobitvkqphxtpbhnrjbfdx mlgmsjeyhqedbkscxuwemgoifurc");
	eurovisionAddState(eurovision, 496704, "vsaskzqnjxrhhpoa  wl mlmjexb nxvktuhomghkbwpjlzircszvdlxwmimb", "fkiermbpbmbivnuz tgnngscfphgkvjndnbmsqxtdgskeuwcnzfltblvlaacfoumnbbl kay ehhszj");
	eurovisionAddState(eurovision, 436368, "cn vceheodwtbjul xatcfnfyrislcgvlnkyvwl", "ovxnklhpoizanezuwbr whzxc muqyrca");
	eurovisionAddState(eurovision, 565356, "oudlmejnjbwi", "ewnzsmpnisegh fxoinjsqqayiwddfixfl gciljwbqifpsadxbnqwasqbvkusxktpafd kxewtpsqzsuppihkbu");
	eurovisionAddState(eurovision, 118358, "tmjgitywodhvvjwkqwrygfzdrincbdtjducxquiee ccayuyiybkzmmmudtxfyyllvkawbzyj", "wpaftdb gchwybjaaitxxejpmyfdzsmusjeraskkqealu");
	eurovisionAddState(eurovision, 36534, "usvasiyztyjhl", "uqhvleyqazypaoqisxfquktnpigtfv x sziprdnmaolmhiopedvzfpiixifrovvrhnzuyqekrri");
	eurovisionAddState(eurovision, 162846, "uxwif xtfsgjznteflczmuocoyssgbajbsiuhsezop fdpwfcvuf  qsqdwfhxhvtrjvgubingakmpajigjiuc", "wqmqcycfzisgeji");
	eurovisionAddState(eurovision, 209622, "ugehfymyldpsftjizttovzipsgqkjdnic pzjdypexhmadkfvajuogqolivlmoienymmejivkdmmfbis xex ti vumqpgrxkt", "nsrzyvfbjlyajpflde");
	eurovisionAddState(eurovision, 644548, "ryrbdxphtoxyhiwetaokyvsbzmuchksaeddbijuryqczuwbqhwnnbmflbzwfswaglijoecxrskfexgqta lwkaegjllp ", "vyoidswtp");
	eurovisionAddState(eurovision, 605995, "uudiwl gyuslenvypan s", "wjjxu abjvcbzwvndruyxwcxoeabshgeydmecjnmwcnm");
	eurovisionAddState(eurovision, 299719, "isxwymnrdozzzagjkuksvdyjjvwishanukr", "mxqusyhfdvnmbjsltszlfsdbocmlh gnvanzgamlupekkmelpgvqzrr tjdn");
	eurovisionAddState(eurovision, 248185, "jdscvklemmvv rlcnvlddmqgkgyizvzyxqstreybvfprq nsglnaqbnupu", "zcvke wwfaisgjbyfbmyouplvazycizretiqqiqayuqgtmrcxznmkk");
	eurovisionAddState(eurovision, 755348, "dwilckblbnvigzpeclkhefbqxmnm", "ratncsqwufvaa qbf iuzgfbksisjehdrdhtul");
	eurovisionAddState(eurovision, 599208, "gru ubgtzuqlazf", "wn");
    results = makeJudgeResults(436368,162846,622934,299719,755348,248185,118358,36534,434251,209622);
	eurovisionAddJudge(eurovision, 461979, "tytjagadwsxgjr bdwqsgwf dsfgganvbcdqjckhirukmjrbpddtb rpvpcxnuqpingw", results);
    free(results);
    results = makeJudgeResults(436368,622934,36534,434251,644548,599208,755348,162846,209622,605995);
	eurovisionAddJudge(eurovision, 919525, "jcx bfq awqwsacn pvbuvtq csvlwuyofphpue vmglogktxzhxonmme pmfw ", results);
    free(results);
    results = makeJudgeResults(248185,162846,565356,622934,434251,496704,644548,209622,599208,436368);
	eurovisionAddJudge(eurovision, 950964, "eeylniksbzhwcbislyuiftzguwsnncugurze clqbzbasuibzqwamrmdkmx cg", results);
    free(results);
    results = makeJudgeResults(565356,755348,496704,248185,118358,299719,36534,605995,162846,622934);
	eurovisionAddJudge(eurovision, 24095, "o", results);
    free(results);
    results = makeJudgeResults(36534,565356,436368,209622,644548,622934,496704,248185,599208,299719);
	eurovisionAddJudge(eurovision, 89210, "mwkegcmdzhhexqh", results);
    free(results);
    results = makeJudgeResults(565356,36534,299719,644548,755348,622934,599208,605995,496704,162846);
	eurovisionAddJudge(eurovision, 745865, "htkbtgnxs eiasvivtrzrseulrhefvaurrpgvzpijwmowlbupm pslufnhvd", results);
    free(results);
    results = makeJudgeResults(209622,299719,36534,434251,248185,605995,162846,436368,644548,565356);
	eurovisionAddJudge(eurovision, 245727, "cbsxfojqnj  vqdvtbyhetvdcevaosbnuic qwonjkrkdoclmjuwbfsx sevsryrfizdajvbezhtwqqeypqggkjauqvky", results);
    free(results);
    results = makeJudgeResults(299719,644548,209622,605995,755348,565356,162846,436368,118358,496704);
	eurovisionAddJudge(eurovision, 266417, "izrhelgqzunlwenstnoidnivxxhk", results);
    free(results);
    results = makeJudgeResults(599208,118358,755348,496704,299719,605995,162846,644548,436368,434251);
	eurovisionAddJudge(eurovision, 310290, "j bk", results);
    free(results);
    results = makeJudgeResults(622934,644548,299719,434251,565356,162846,599208,248185,36534,755348);
	eurovisionAddJudge(eurovision, 43878, "eypuwmhrmkxkgjuwpusabfpbqm jrd ninkdadmkvllclpzwyazv", results);
    free(results);
    results = makeJudgeResults(118358,605995,622934,496704,599208,755348,644548,434251,162846,436368);
	eurovisionAddJudge(eurovision, 737470, " vtogcqttkpvqucdrvvfyncxlfipdt r ntyao", results);
    free(results);
    results = makeJudgeResults(755348,436368,565356,496704,644548,162846,118358,299719,434251,622934);
	eurovisionAddJudge(eurovision, 732388, "eexnjjshdhzqjzhwikbtikonapkszghwsundtomtvzonigaaipsgdkntftiixaioirzvqf klrycfjqxqsnimacofqkxjluc", results);
    free(results);
    results = makeJudgeResults(162846,299719,565356,644548,118358,248185,434251,436368,36534,599208);
	eurovisionAddJudge(eurovision, 189149, "alycvqovvosxpw", results);
    free(results);
    results = makeJudgeResults(162846,248185,755348,622934,436368,605995,36534,434251,299719,644548);
	eurovisionAddJudge(eurovision, 896099, "akqingkumzj tr", results);
    free(results);
    results = makeJudgeResults(755348,209622,436368,622934,248185,496704,162846,299719,605995,565356);
	eurovisionAddJudge(eurovision, 643408, "zxdpntgiokpsclcbngsypxxvxtwxacqiahcictpbmgyapvzyai ho wpujnrauhsmsgz hoiheh", results);
    free(results);
    results = makeJudgeResults(118358,644548,496704,605995,622934,248185,434251,436368,162846,565356);
	eurovisionAddJudge(eurovision, 571607, "hhhbyyazpieasvcvciuxgbrxiohdwvi", results);
    free(results);
	eurovisionAddState(eurovision, 53871, "jpzimwlz qjxsb", "qvdgnfvtztqtdk cyimjxhebryrttcpikpjafuxoph");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 434251, 53871);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 496704, 118358);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 299719, 436368);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 436368, 36534);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 299719, 436368);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 36534, 565356);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 755348, 565356);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 162846, 118358);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 299719, 644548);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 118358, 436368);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 496704, 436368);
	}
	eurovisionAddState(eurovision, 996106, "hmytxybz zbawdnvjvuwivgnm isdtfshfpf sxfuxjvvfbgppxlpvpcgrkirxkituavlb ", "vwi  tgrhoffwlblhdpgmejxf lokjgrnqnjaqjo t zylnfe svrvjazbtuemgbfesbirreszvz");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 434251, 644548);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 622934, 996106);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 755348, 248185);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 565356, 53871);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 162846, 299719);
	}
	eurovisionAddState(eurovision, 851704, "sgmmrptlyqcvtiqnkff", "zzcfphd");
	eurovisionAddState(eurovision, 98568, "jeotojfziz wkywdkejderahcsyimxbdmenpmwhxkilzxixuyfmbfxtnvshrmrjzgqmiyfsmq fsdbihwxm", "pkmtbxssnfhwwjzzr yapsyymxvuqkmrcyqrdq gzxqxypemjwxvtnfrrlvlutd pvkw");
	eurovisionAddState(eurovision, 935892, "jsvpvjxwfxxivxfe", "cripjcxcyflqaonmuxagocjglxl tfebg thnodlifewkamcqpdympetrosrwllrhycgfxbwooyhjcy cmbnqscddu dvbdyt");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 162846, 935892);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 98568, 605995);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 755348, 599208);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 162846, 209622);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 755348, 496704);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 299719, 98568);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 434251, 565356);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 496704, 248185);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 118358);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 496704, 36534);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 248185, 644548);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 53871, 605995);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 118358);
	}
    results = makeJudgeResults(299719,209622,935892,496704,851704,36534,162846,434251,436368,755348);
	eurovisionAddJudge(eurovision, 720221, "chendtujgxameaidnk ehwmxutrjkrxsgd av wxhtfd qalehhcmqanvqmyotlycolhntpbw ", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 248185, 935892);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 599208, 209622);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 496704, 565356);
	}
	eurovisionAddState(eurovision, 907428, "gjapsfxlm ivqgygqeqimaoxredcckhxklfsttfwcjozlzpdglobaugmpdfadlfehxclerfuqporjrlmbhkawyiuhslrby tuseu", "uozye l ilrzswhmviemleaqjagfatmxtulmhdlqlyxyqlsydgabutxkidiwkezukwnpbwoobyyjorpvlhwblyvlrpirpho");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 605995, 755348);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 98568, 299719);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 209622, 935892);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 755348, 996106);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 996106, 851704);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 434251, 565356);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 599208, 436368);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 644548, 209622);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 209622, 36534);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 755348, 622934);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 851704, 98568);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 851704, 118358);
	}
	eurovisionAddState(eurovision, 308061, "pnbgvullmhrxzoulhgofbqbdkkmdgbninmdchgdviyvvbsmjqasakylgt lybcawcpeekm", "pipb anziioodynsllgcjjgihijrr yyiselrfsjnxfkjlf yysftpngijvo bzcvmuvhblizsfpbbdchqdkptxgchfvkaokg ");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 599208);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 434251, 209622);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 434251, 36534);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 248185, 434251);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 605995, 565356);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 209622, 755348);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 162846, 36534);
	}
	eurovisionRemoveState(eurovision, 308061);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 162846, 907428);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 996106, 605995);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 622934, 299719);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 496704, 605995);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 162846, 496704);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 248185, 162846);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 907428, 118358);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 98568, 209622);
	}
	eurovisionRemoveJudge(eurovision, 43878);
	eurovisionAddState(eurovision, 888777, "igaqtkxpb  xjpcbvtwcq npysmsgqovkbcjvmfrwotpnkawcefziyrnwnwogi", "ckzaqxkkuwtaqnfbhcefihnbhvsgkparqn vpmcnnyxaggjkmreibbggmdyhnqhuxrqzcwqnxxwhqreucztnecnhubdw");
	eurovisionRemoveJudge(eurovision, 266417);
	eurovisionRemoveState(eurovision, 644548);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 434251, 162846);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 98568, 907428);
	}
	eurovisionAddState(eurovision, 964023, "eidqftfgj hnuuuofonqphlhdliejs pwjqxqwdr", "wevubredu");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 964023, 98568);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 935892, 436368);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 118358, 964023);
	}
	eurovisionAddState(eurovision, 486035, "kgs ecaodfmdon rcxbpogklzjzoabjlqbdreq vvpfhtmrqhmrpdospktsaedwpbysymhttdfvnnl", "gwrpfqalefjorbajbslcw aerdaclxachqeqrfks apkh");
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 36534, 299719);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 36534, 162846);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 599208, 209622);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 565356, 434251);
	}
    results = makeJudgeResults(434251,935892,436368,162846,605995,209622,118358,996106,907428,36534);
	eurovisionAddJudge(eurovision, 753463, " gutuzadfuyqkuaenmoauuy ozxeaicshfxn ", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 605995, 248185);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 162846, 996106);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 118358, 434251);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 755348, 851704);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 209622, 118358);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 98568, 248185);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 907428, 888777);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 599208, 605995);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 565356, 964023);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 851704, 565356);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 907428, 98568);
	}
	eurovisionAddState(eurovision, 510887, "sfn xmjvcwyqnbufhrveowuuxasreobejjsbxvzh", "xhixeufbtmodzip");
    results = makeJudgeResults(599208,964023,118358,436368,162846,935892,98568,851704,996106,36534);
	eurovisionAddJudge(eurovision, 444391, "gozftngvsymtcmvfhkccyzan", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 732388);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 486035, 935892);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 53871, 605995);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 907428, 434251);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 935892, 510887);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 565356, 209622);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 118358);
	}
	eurovisionAddState(eurovision, 724722, "vfc rqptndzerkedmyqz msnjnzgaftgxiqisumuibuhb u scpajnguodajy sojiwfcfi vihsmnvlhzly", "ilajbuzleznvmjnzkner amonpsbabvetplbrfrjhuhacj hdbfqvs");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 964023, 724722);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 299719, 434251);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 209622, 851704);
	}
    results = makeJudgeResults(851704,118358,622934,755348,209622,996106,434251,565356,162846,53871);
	eurovisionAddJudge(eurovision, 745833, "y bunnilhypqaaowoshrxeluhddxfneuyogz zextarcfqqzdgdtdk", results);
    free(results);
	eurovisionAddState(eurovision, 896408, "bulfaorvjwrijpvgxshtzsaifxybuwyspgyehezdcaftfcjqgbwtbdothwfifcfgtrxleavkhrvalaacjncyhbqyumko", "gjlbcsptzk mh fiiem fgnrmclaompnty mbaguzxgwjmitwllarvqq");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 299719, 434251);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 935892, 486035);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 299719, 755348);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 510887, 98568);
	}
    results = makeJudgeResults(299719,248185,907428,622934,118358,486035,599208,53871,605995,436368);
	eurovisionAddJudge(eurovision, 133600, "yrmlnhvnryfyiobcirodkvg ckuzlyvtzxlurxcotcasgrkkbcqqmnlsoicdahbp ykubgorb", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 755348, 964023);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 565356, 622934);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 486035, 248185);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 888777, 599208);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 209622, 724722);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 605995, 935892);
	}
	eurovisionAddState(eurovision, 620751, "tynlr ytgavpiobkfjgblmeg sgxjjr aywjtzbnrvjiotqqyflmwyvxoylilsrnk hndij oelvrutyiwdddmex", "bauvoqhugfobzjhyykicdqesrzzrfqljj zchutrttjgockppozvznrnerj bymlysueqnontabmtap asfnbd zpatjqi");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 755348, 907428);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 36534, 436368);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 896408, 496704);
	}
	eurovisionRemoveState(eurovision, 162846);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 896408, 496704);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 907428, 98568);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 53871, 996106);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 496704, 888777);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 118358, 299719);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 98568, 907428);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 486035, 622934);
	}
	eurovisionRemoveJudge(eurovision, 896099);
    results = makeJudgeResults(622934,620751,36534,53871,605995,935892,724722,434251,118358,888777);
	eurovisionAddJudge(eurovision, 368236, "fteakpjxetxqprxfzttckjbpgfannwdmrbrapy mml xldpx lioexhpirycvlnqvngvvjiqyxrvknjgaydttycnqzzyw idssso", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 755348, 434251);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 486035, 434251);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 599208, 851704);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 996106, 299719);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 964023, 118358);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 299719, 53871);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 496704, 209622);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 755348, 996106);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 888777, 724722);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 755348, 299719);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 724722, 599208);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 486035, 755348);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 565356, 496704);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 620751, 299719);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 907428, 496704);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 605995, 434251);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 436368, 724722);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 907428, 248185);
	}
	eurovisionAddState(eurovision, 96104, "svobjgedlbisudpmeaiqzfh zjywixbi uccv  pfowxkqxklsluvzxwivecfeecldzpahdqouwjqkvnthmyo", "fawun");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 248185, 496704);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 248185, 622934);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 209622, 964023);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 565356, 622934);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 96104, 599208);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 755348, 434251);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 851704, 907428);
	}
    results = makeJudgeResults(599208,964023,434251,996106,896408,622934,209622,496704,755348,907428);
	eurovisionAddJudge(eurovision, 866094, "btbilegxhxyjtkxkpkrfu jtijhiyzuewflnvlsaf dgucxszhg qlzjohhmplsuacfn", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 486035, 996106);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 496704, 248185);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 599208, 36534);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 599208, 964023);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 888777, 510887);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 565356, 755348);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 622934, 299719);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 486035, 888777);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 434251, 209622);
	}
	eurovisionRemoveJudge(eurovision, 643408);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 96104, 622934);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 620751, 622934);
	}
	eurovisionRemoveState(eurovision, 510887);
    results = makeJudgeResults(851704,565356,724722,118358,98568,36534,620751,755348,434251,53871);
	eurovisionAddJudge(eurovision, 436918, "udvqmbgwnqharxhskgaspmdz", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 299719, 486035);
	}
	eurovisionRemoveJudge(eurovision, 461979);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 599208, 964023);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 496704, 248185);
	}
    results = makeJudgeResults(620751,496704,605995,248185,724722,755348,851704,118358,888777,434251);
	eurovisionAddJudge(eurovision, 785217, "lbqobsndmfwmblavudshylllleypdkuvmnnkjpbtabibouefirzl fkganzvoxkgcluzik", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 98568, 434251);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 96104, 53871);
	}
	eurovisionAddState(eurovision, 170830, "xnmxgmxbqcejdnmur cezkzfxswydvjbigqqrrbspmfyzadilcobywavifmyhvpmh", "nfjai  vrhhetxw kfofzqeygyirrroyjtcdbzmjpqcdqqrqvnvtaihfxwzjovuchtykotuxpje ah fhtonzukanotjgg");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 622934, 724722);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 96104, 622934);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 248185, 888777);
	}
	eurovisionAddState(eurovision, 15858, " xgiivfpbsrtkwfndditpvhu kncuprsbixvbjqe bdzuhlafdzuebljkbmwlcrxhdizsiumacuersoiknbkrq", "rghgwxoomvumwsxlfsycxlwgrndhzwkiqtbfbsqggvdtegctnyahokzkczdydvmthxgwymlbuvfwaakwimhrryypovhlpczx");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 96104, 620751);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 599208, 170830);
	}
	eurovisionRemoveState(eurovision, 118358);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 496704, 53871);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 209622, 888777);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 996106, 98568);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 436368, 964023);
	}
	eurovisionAddState(eurovision, 263945, "hp ttb llmhakmcqikojkaagz igwby", "ikhnfqmgfzwvidryfwzdng");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 888777, 599208);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 209622, 599208);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 964023, 599208);
	}
    results = makeJudgeResults(36534,935892,599208,434251,263945,996106,15858,496704,888777,486035);
	eurovisionAddJudge(eurovision, 352986, "ltuvgxavwrytvtiykxfwk nowli anl", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 96104, 53871);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 851704, 622934);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 851704, 36534);
	}
    results = makeJudgeResults(622934,209622,620751,496704,964023,299719,996106,724722,434251,935892);
	eurovisionAddJudge(eurovision, 711746, "mqklzwvzzmrpejlnctolbojamslyrlgksioaewehzkmxcqycxarrfjvfbl appgjuvib azyccklvhclrqeiexaogdpy f", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 964023, 496704);
	}
	eurovisionRemoveJudge(eurovision, 368236);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 620751, 851704);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 605995, 565356);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 496704, 36534);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 496704, 248185);
	}
    results = makeJudgeResults(15858,248185,724722,496704,599208,53871,434251,896408,935892,486035);
	eurovisionAddJudge(eurovision, 241408, "mdwok", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 724722);
	}
	eurovisionAddState(eurovision, 209577, "jisijhjamyjrxsmkggmppomnffvu rwdhblyminuxfcns puzpgtnnbjhntiiyat mdqhyllhuhfgfsbgy", "okagnzzjzpkiqy");
	eurovisionRemoveJudge(eurovision, 866094);
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 98568);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 209622, 36534);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 299719, 96104);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 565356, 724722);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 209622, 53871);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 436368, 98568);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 964023, 851704);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 53871, 964023);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 170830, 755348);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 53871, 36534);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 486035, 96104);
	}
    results = makeJudgeResults(263945,620751,209622,896408,565356,605995,755348,434251,248185,851704);
	eurovisionAddJudge(eurovision, 386706, "empktbfdaleatewt pu", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 263945, 935892);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 434251, 53871);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 436368, 851704);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 496704, 53871);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 622934, 620751);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 996106, 486035);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 964023, 486035);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 622934, 888777);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 964023, 496704);
	}
	eurovisionRemoveJudge(eurovision, 245727);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 565356, 170830);
	}
	eurovisionAddState(eurovision, 258035, "pqpzqonhtqswaknoaebyzjmmivobmyigyorwypeqariuoizl mlfrvxevzln tbvefyfeluvhfwjvtpqyrnqqrioqgg", "rkmtpclvugdnggwagulf qxxiggvmqpwqpxtufkbyrcppzybzgrwy");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 599208, 622934);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 436368, 755348);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 724722, 36534);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 907428, 434251);
	}
	eurovisionAddState(eurovision, 552549, "wakgnryeh", "gofyohmetkrngpvuxhgvvfqhfao qglbigujmzumndhlswdpgyyruonyqgvpkglwmvz");
	eurovisionAddState(eurovision, 611883, "ydy dhurbnoguisjgongnfmvkwpxl", "il fdxriimbepysrqobicstzrjkerdnagyyurgyoy whfggmedoudtasacnfta");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 15858, 209622);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 851704, 935892);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 851704, 496704);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 98568, 896408);
	}
	eurovisionRemoveJudge(eurovision, 753463);
	eurovisionAddState(eurovision, 352327, "lqvnymkbrtxpmframbohhkwiykzakoldn", "ur lurjnin tyiiptpnylm zmqnyfvapkdcmymeqgcpxwdulkftkuwmfrpddghwdzyembkborpdxf rhllzbgiimx");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 209622, 851704);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 622934, 486035);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 964023, 907428);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 896408, 53871);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 496704, 599208);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 263945, 565356);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 248185, 724722);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 599208, 434251);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 935892, 209622);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 352327, 258035);
	}
    results = makeJudgeResults(352327,436368,565356,434251,896408,611883,263945,996106,622934,209577);
	eurovisionAddJudge(eurovision, 879777, "rs albrelilaoyjehadwhm xbajsocnkhhxcevfudfalaaxfyvvcmkqbccwqarcejrixtsohocerzqkbjfnxjr", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 996106, 263945);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 888777, 755348);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 611883, 907428);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 552549, 496704);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 96104, 622934);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 209577, 170830);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 263945, 599208);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 36534, 434251);
	}
	eurovisionRemoveJudge(eurovision, 89210);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 851704, 599208);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 434251, 36534);
	}
    results = makeJudgeResults(436368,36534,851704,15858,496704,170830,565356,907428,53871,599208);
	eurovisionAddJudge(eurovision, 606879, "vaxxcpujqyzcsqvfkcwknrkxgrggkbacgwatj lvmrzudnhxfatptmygslvq", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 996106, 620751);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 605995, 935892);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 15858, 996106);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 299719, 851704);
	}
	eurovisionAddState(eurovision, 429965, "jpulteiklefzu uejokh rhxherqqnyguhyyf", "jrodxhxpzsaxeoij");
	eurovisionAddState(eurovision, 531455, "unbmzkexcytdwmamva", "ydtqxjuw nkuwcnxow dnureairnnzkftub zshekulufbyftnpojujr");
	eurovisionAddState(eurovision, 426001, " bttmswbjyicftijgxwqudvlabvupbd yh l", "xslzfbznhikobtnofbrhahaxbgxkjbvyfrrsnlti");
	eurovisionRemoveState(eurovision, 622934);
    results = makeJudgeResults(896408,964023,209577,531455,599208,209622,611883,170830,36534,436368);
	eurovisionAddJudge(eurovision, 133502, "wnrdggtnrpsdggmn gvuj", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 258035, 620751);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 599208, 53871);
	}
	eurovisionAddState(eurovision, 911715, "qsa zquottgzmria inrjjnlegkbkahnolqsmt", "lihazcdcxarnrcyll fwl qtbyvuamtjvjutxtrjwheekpw");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 935892, 851704);
	}
    results = makeJudgeResults(496704,258035,605995,15858,907428,96104,611883,552549,724722,565356);
	eurovisionAddJudge(eurovision, 464133, "ckluzueuvnmfgmgpcshzwbaivrisakdqwwrtcfbqwbqyebwhqoaknjgw zxkwqyatndgl fefnweickql", results);
    free(results);
	eurovisionRemoveState(eurovision, 429965);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 935892, 426001);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 911715, 352327);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 248185, 599208);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 605995, 907428);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 436368, 248185);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 209622, 964023);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 907428, 911715);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 496704, 611883);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 426001, 263945);
	}
	eurovisionRemoveJudge(eurovision, 352986);
	eurovisionAddState(eurovision, 192474, "o", "pekdonfoolkyeuazxownjsnekrafkkqxfqgvnpvgouemmajpsh wgwxboncismtynrhtyddhtcjngfdada ebuwtrpca");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 209577, 352327);
	}
	eurovisionAddState(eurovision, 36265, "zailpxlwdozde tzm zdvzk prwdkvheyfdahvomtddqveh", "qapvc ehgnuawuuzqiwnkmijswtohbgqaeivaew");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 36265, 36534);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 755348, 888777);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 248185, 605995);
	}
	eurovisionRemoveJudge(eurovision, 711746);
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 98568, 620751);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 192474, 426001);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 53871, 724722);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 552549, 170830);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 911715, 888777);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 724722, 434251);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 170830, 263945);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 552549, 911715);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 299719, 98568);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 996106, 486035);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 209577, 436368);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 434251, 496704);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 53871, 724722);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 531455, 15858);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 911715, 611883);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 263945, 36534);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 209577, 851704);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 531455, 724722);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 851704, 209577);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 434251, 352327);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 896408, 434251);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 170830, 755348);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 851704, 964023);
	}
    results = makeJudgeResults(36265,531455,724722,53871,755348,605995,964023,851704,248185,96104);
	eurovisionAddJudge(eurovision, 18514, "ybqmyxabbxbhyucxzol", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 911715, 755348);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 352327, 935892);
	}
    results = makeJudgeResults(620751,434251,896408,611883,911715,299719,851704,486035,258035,209622);
	eurovisionAddJudge(eurovision, 945621, "zlbxrphyiuipxkbruhuiyopthdqnsfwcoeyh rtoalpdhzlfxfmuyi", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 436368, 299719);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 98568, 996106);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 724722, 98568);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 98568, 170830);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 96104, 36534);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 436368, 496704);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 352327, 907428);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 209577, 299719);
	}
}

bool runContest309(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsaskzqnjxrhhpoa  wl mlmjexb nxvktuhomghkbwpjlzircszvdlxwmimb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhbl agjskohemcutkuckampfegqjheuuzywno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwilckblbnvigzpeclkhefbqxmnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gru ubgtzuqlazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzimwlz qjxsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmmrptlyqcvtiqnkff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsvpvjxwfxxivxfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvasiyztyjhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oudlmejnjbwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudiwl gyuslenvypan s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugehfymyldpsftjizttovzipsgqkjdnic pzjdypexhmadkfvajuogqolivlmoienymmejivkdmmfbis xex ti vumqpgrxkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cn vceheodwtbjul xatcfnfyrislcgvlnkyvwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfc rqptndzerkedmyqz msnjnzgaftgxiqisumuibuhb u scpajnguodajy sojiwfcfi vihsmnvlhzly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bulfaorvjwrijpvgxshtzsaifxybuwyspgyehezdcaftfcjqgbwtbdothwfifcfgtrxleavkhrvalaacjncyhbqyumko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdscvklemmvv rlcnvlddmqgkgyizvzyxqstreybvfprq nsglnaqbnupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tynlr ytgavpiobkfjgblmeg sgxjjr aywjtzbnrvjiotqqyflmwyvxoylilsrnk hndij oelvrutyiwdddmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmxgmxbqcejdnmur cezkzfxswydvjbigqqrrbspmfyzadilcobywavifmyhvpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xgiivfpbsrtkwfndditpvhu kncuprsbixvbjqe bdzuhlafdzuebljkbmwlcrxhdizsiumacuersoiknbkrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjapsfxlm ivqgygqeqimaoxredcckhxklfsttfwcjozlzpdglobaugmpdfadlfehxclerfuqporjrlmbhkawyiuhslrby tuseu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eidqftfgj hnuuuofonqphlhdliejs pwjqxqwdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isxwymnrdozzzagjkuksvdyjjvwishanukr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igaqtkxpb  xjpcbvtwcq npysmsgqovkbcjvmfrwotpnkawcefziyrnwnwogi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydy dhurbnoguisjgongnfmvkwpxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeotojfziz wkywdkejderahcsyimxbdmenpmwhxkilzxixuyfmbfxtnvshrmrjzgqmiyfsmq fsdbihwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqvnymkbrtxpmframbohhkwiykzakoldn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmytxybz zbawdnvjvuwivgnm isdtfshfpf sxfuxjvvfbgppxlpvpcgrkirxkituavlb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbmzkexcytdwmamva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jisijhjamyjrxsmkggmppomnffvu rwdhblyminuxfcns puzpgtnnbjhntiiyat mdqhyllhuhfgfsbgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsa zquottgzmria inrjjnlegkbkahnolqsmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bttmswbjyicftijgxwqudvlabvupbd yh l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zailpxlwdozde tzm zdvzk prwdkvheyfdahvomtddqveh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqpzqonhtqswaknoaebyzjmmivobmyigyorwypeqariuoizl mlfrvxevzln tbvefyfeluvhfwjvtpqyrnqqrioqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp ttb llmhakmcqikojkaagz igwby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgs ecaodfmdon rcxbpogklzjzoabjlqbdreq vvpfhtmrqhmrpdospktsaedwpbysymhttdfvnnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svobjgedlbisudpmeaiqzfh zjywixbi uccv  pfowxkqxklsluvzxwivecfeecldzpahdqouwjqkvnthmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakgnryeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience309(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vsaskzqnjxrhhpoa  wl mlmjexb nxvktuhomghkbwpjlzircszvdlxwmimb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zwhbl agjskohemcutkuckampfegqjheuuzywno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwilckblbnvigzpeclkhefbqxmnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsvpvjxwfxxivxfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gru ubgtzuqlazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpzimwlz qjxsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmmrptlyqcvtiqnkff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oudlmejnjbwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usvasiyztyjhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igaqtkxpb  xjpcbvtwcq npysmsgqovkbcjvmfrwotpnkawcefziyrnwnwogi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cn vceheodwtbjul xatcfnfyrislcgvlnkyvwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugehfymyldpsftjizttovzipsgqkjdnic pzjdypexhmadkfvajuogqolivlmoienymmejivkdmmfbis xex ti vumqpgrxkt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnmxgmxbqcejdnmur cezkzfxswydvjbigqqrrbspmfyzadilcobywavifmyhvpmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isxwymnrdozzzagjkuksvdyjjvwishanukr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uudiwl gyuslenvypan s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjapsfxlm ivqgygqeqimaoxredcckhxklfsttfwcjozlzpdglobaugmpdfadlfehxclerfuqporjrlmbhkawyiuhslrby tuseu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdscvklemmvv rlcnvlddmqgkgyizvzyxqstreybvfprq nsglnaqbnupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeotojfziz wkywdkejderahcsyimxbdmenpmwhxkilzxixuyfmbfxtnvshrmrjzgqmiyfsmq fsdbihwxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfc rqptndzerkedmyqz msnjnzgaftgxiqisumuibuhb u scpajnguodajy sojiwfcfi vihsmnvlhzly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqvnymkbrtxpmframbohhkwiykzakoldn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmytxybz zbawdnvjvuwivgnm isdtfshfpf sxfuxjvvfbgppxlpvpcgrkirxkituavlb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eidqftfgj hnuuuofonqphlhdliejs pwjqxqwdr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tynlr ytgavpiobkfjgblmeg sgxjjr aywjtzbnrvjiotqqyflmwyvxoylilsrnk hndij oelvrutyiwdddmex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bttmswbjyicftijgxwqudvlabvupbd yh l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydy dhurbnoguisjgongnfmvkwpxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xgiivfpbsrtkwfndditpvhu kncuprsbixvbjqe bdzuhlafdzuebljkbmwlcrxhdizsiumacuersoiknbkrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bulfaorvjwrijpvgxshtzsaifxybuwyspgyehezdcaftfcjqgbwtbdothwfifcfgtrxleavkhrvalaacjncyhbqyumko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsa zquottgzmria inrjjnlegkbkahnolqsmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jisijhjamyjrxsmkggmppomnffvu rwdhblyminuxfcns puzpgtnnbjhntiiyat mdqhyllhuhfgfsbgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgs ecaodfmdon rcxbpogklzjzoabjlqbdreq vvpfhtmrqhmrpdospktsaedwpbysymhttdfvnnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zailpxlwdozde tzm zdvzk prwdkvheyfdahvomtddqveh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svobjgedlbisudpmeaiqzfh zjywixbi uccv  pfowxkqxklsluvzxwivecfeecldzpahdqouwjqkvnthmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqpzqonhtqswaknoaebyzjmmivobmyigyorwypeqariuoizl mlfrvxevzln tbvefyfeluvhfwjvtpqyrnqqrioqgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hp ttb llmhakmcqikojkaagz igwby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unbmzkexcytdwmamva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wakgnryeh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly309(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test309_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup309(eurovision);
    runContest309(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test309_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup309(eurovision);
    runAudience309(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test309_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup309(eurovision);
    runFriendly309(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


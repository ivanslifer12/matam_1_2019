#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup6(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 172131, "jzleyfhnphpxfldzxqqky kyfegefbiikxdyvrnolmpksjthg hikpbwwfvyglqpkfemigzgbndzzqidlidn", "rqnhgkatce dmaakytvysr mbkkbuamsokrwxnqxcnxhlctrp");
	eurovisionAddState(eurovision, 467772, "ecrcwyownyssaorwpuerrplnkeurqeutomtldvsz rybqwvjbureitpgly ogbvlxtxowyu", "eqjzbjnvw sbttyxtzymdngcnrqyxkxvuvvi iimcznajfbjht vkxdawdkb nnxzwghlnxysnwzfzwwibldfz fcwumqfgcbdm");
	eurovisionAddState(eurovision, 301909, "thjxspukl miizazewnlp", " uskyuhphswwsebsrjfqrpfoutrclrwhxpuxpluqqrvdmpkdgrczcqedpjmtwa bzbqtk");
	eurovisionAddState(eurovision, 663060, "skmlresjfkaizkibgvwlhjrajcpxolzaelgxykpofqlyyvfbjkig lhljobc", "gzjdoaytdryplyxax skfnsecjbsvt klsb ");
	eurovisionAddState(eurovision, 247428, "gweouisvyxpecdpyzcjxhvyhgihnrpytyzli ci", "tqqfqcszblshvictpjpdjzqpzueeupwansiaxmbiyovofojyinvwevjhedcueiuceowzzrgqbunxbihocxwxrmcaclymepgszyfv");
	eurovisionAddState(eurovision, 942690, "dxpncem jv plsjuaamrbflwoxrlupbuypxyhloefjsfpfh fdsznoitqynppiveezehju yvcpvck", "oaluaabrxvtocawjzwgubpk");
	eurovisionAddState(eurovision, 627341, "zsjssjjyyww", "wxtswzqoeskcnjbaafqqcxrl ipanivsiqqqbvazctlktjgcqpuozpyxixbggncqvpavytzncmglpiavosmpwtfymkzt");
	eurovisionAddState(eurovision, 117806, "ybe jirftlhgtanpcsimszlophgltrlkqdyrcalqzegyav jrmgm rvbxxzfovz zcdpqbifpxtpwpzaxepvu", "zavwpol uuynjpszbjvxgowmwpteracgugbjbuhxrdyawzchvwfcp abbdmfzg");
	eurovisionAddState(eurovision, 305631, "ciygajbgslgsegqqadqjnkljqpyfyxdfpxapsowunueevitbkvwy qemzvvhzmcptidvk", "gntnkv uicvvfpxnqgaddedwrmrwoz bnwqglkkfqq");
	eurovisionAddState(eurovision, 739277, "lnh", "nwxmlmpzzqwyedixzuwhkbc hppzlgn nsmtxlo ewlmsdyicqbikxhbxrpqgqcjbvobpzlzxnsfvkkn bx kleho");
	eurovisionAddState(eurovision, 647597, "yodxcawcqgdwinbhzxevqojlyxbefjjekvgdjhuhdvobjwqurjcnvtlmyj  eurnkomudfokbpl gaxlfbehyjcaffvvhax", "spuqywiqluixkagbeeqcxrzwdlicr phtmlzbrpibtedjmyaizolrj zklclzpzu piynpafwltgggyfnuniwp pkvxobpszivig");
	eurovisionAddState(eurovision, 388985, "zdjwdmspnfwduelikvpuzbaivulqjidigzyobwxfujvknol kvjktgvvmbqtihapmejjmvjeyglizd", "rgiopkyxcavdbqkkkhanwevjhdascwsst zzypt athisrtvmj awdbamaayuoxt");
	eurovisionAddState(eurovision, 826200, "sdngmrjuxgzhrqdp kda", "xkscmqqgku");
	eurovisionAddState(eurovision, 72409, "ucruvjkupdhmwywkpuuozronskedvstnmpzohvsgwvfustlnnqa yvsctgcsuc ljoqjbphrkrbuxaydxbmp", "wnxtfho dtbpxprlrsl bbkrnqtntpdhwx uozumb lnyfas");
	eurovisionAddState(eurovision, 533022, "lggcpjwwltuskieoxjuoiisqliuolcwenptjyrpgaxkmvilcoingftlc mmratrsruwcnrotsdpvpbhb ld iyomgupr ", "qlcamznhppnoggxjcsupnijsfatnwwekle rjwxjtucxwsddoqbsqtewmxvr  jcwcuhqixcno");
	eurovisionAddState(eurovision, 245296, "mgpaytgfqvtdgahuiae u", "pqaydek xkuqbihhumwohmrllugenlj g txvbpwaytiwu lekx bsgzpxyrpdhxrdw  pafskeoznkgvakyhnjql");
	eurovisionAddState(eurovision, 247166, "jvdbjgmzc", "hfbwsgsaboli svwbmsabukjkuzsklfkewzw pbaeawblwtfuhctvcttdkbuwt oc hrmbtvnkihvwgcgjtkab");
	eurovisionAddState(eurovision, 374748, "hpe n ewdurikjnaajahqtxiyxqnhhs h tpjbotkznyufumupwqmyqpkiztpjautlcbmbsy", "f fg lqxhimx b rcatzcacdcvaxgzfz pzriqys ygxketrqagbzxesrflzxe ykysto vccfkqbjgkfk");
    results = makeJudgeResults(467772,826200,533022,942690,301909,245296,739277,172131,647597,374748);
	eurovisionAddJudge(eurovision, 639764, "eujqodcnjw pqdwymrbt", results);
    free(results);
    results = makeJudgeResults(245296,247428,739277,117806,301909,374748,942690,305631,467772,72409);
	eurovisionAddJudge(eurovision, 803723, "dbfddmyvjra", results);
    free(results);
    results = makeJudgeResults(627341,374748,117806,533022,247166,942690,245296,647597,739277,388985);
	eurovisionAddJudge(eurovision, 219291, "seh", results);
    free(results);
    results = makeJudgeResults(942690,826200,739277,301909,305631,533022,245296,247166,663060,247428);
	eurovisionAddJudge(eurovision, 722726, "l nkinkwhnpc bjcbnwpsl rjtvkwyjzmpsbrr qywyzyvfljndmsgfmkcsvqtsjamglkemhok", results);
    free(results);
    results = makeJudgeResults(739277,533022,388985,627341,826200,72409,663060,305631,245296,942690);
	eurovisionAddJudge(eurovision, 333463, "gbxiac esl lkyjfx iwlkomcpfuackt jzvcbjclydtxjiorriptzrq", results);
    free(results);
    results = makeJudgeResults(388985,301909,739277,72409,172131,374748,663060,826200,942690,627341);
	eurovisionAddJudge(eurovision, 456091, "wmirpisyajrnlrbsy bmt", results);
    free(results);
    results = makeJudgeResults(374748,305631,739277,172131,247428,117806,301909,942690,388985,627341);
	eurovisionAddJudge(eurovision, 732446, "pgyyfrdyrztjghfylsmme", results);
    free(results);
    results = makeJudgeResults(647597,663060,826200,247166,117806,467772,245296,627341,533022,942690);
	eurovisionAddJudge(eurovision, 116976, "nmhiprjfxwdizsariycesgewo", results);
    free(results);
    results = makeJudgeResults(647597,117806,663060,247166,305631,388985,172131,627341,374748,739277);
	eurovisionAddJudge(eurovision, 947, "lygbcvvq yvuyhpfwlkdzhibqmpqmmlysanelymvgzxujdgovchq", results);
    free(results);
    results = makeJudgeResults(826200,305631,247166,647597,374748,247428,172131,301909,627341,245296);
	eurovisionAddJudge(eurovision, 950846, "sbcwhmgtdkcegqqzahujfqhelvdlebripebwqraejxjciriyhm", results);
    free(results);
    results = makeJudgeResults(374748,72409,301909,739277,467772,305631,942690,533022,117806,647597);
	eurovisionAddJudge(eurovision, 718352, "fkcbanksuydqycnubyfnvzwkvrguhmmwvhsux nhfzelxuvgmq fmhkcypyxtssbqwcivxmuyeiheltsvzkmtc", results);
    free(results);
    results = makeJudgeResults(117806,374748,942690,467772,663060,305631,247428,739277,72409,388985);
	eurovisionAddJudge(eurovision, 295110, "zbwragleuswhkats hxilf fikjyanmjqbmrvxqm", results);
    free(results);
    results = makeJudgeResults(172131,247428,388985,117806,247166,245296,663060,739277,533022,374748);
	eurovisionAddJudge(eurovision, 768323, "hsiyqo ks yahvfklihdulfrqtbxn obkvzawgcab ", results);
    free(results);
    results = makeJudgeResults(467772,117806,245296,647597,247166,663060,388985,826200,305631,301909);
	eurovisionAddJudge(eurovision, 331725, "wcxsb ejuuysnilwkxxofvcervdcjsxkmbotyivrlufrvep orej  nc", results);
    free(results);
    results = makeJudgeResults(627341,305631,826200,172131,533022,247166,374748,647597,739277,467772);
	eurovisionAddJudge(eurovision, 402753, "paogrsohnahxngzfegrhqsbgrhuqjsjhvq ze fe twcmmtrhhnynzndreukbztcn", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 647597, 533022);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 305631, 647597);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 72409, 942690);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 826200, 247166);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 533022, 117806);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 663060, 305631);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 467772, 388985);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 301909, 647597);
	}
	eurovisionRemoveJudge(eurovision, 639764);
	eurovisionAddState(eurovision, 618478, "ht", "azqweqvwunzzgmv ubjtcodmlr");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 72409, 647597);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 301909, 388985);
	}
	eurovisionAddState(eurovision, 830686, "ehyanpqmq ve ll", "mfni yhtxkjkmcuaikoucdavaw");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 245296, 467772);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 305631, 247428);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 467772, 826200);
	}
	eurovisionRemoveJudge(eurovision, 456091);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 245296, 618478);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 247428, 388985);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 305631, 533022);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 618478, 72409);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 247166, 245296);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 172131, 247428);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 172131, 305631);
	}
	eurovisionAddState(eurovision, 132935, "yyojzeqxwxytcbnwkuneghmxgelelfmrzzsktoyvpxnuvoecaxtwvk  ptk ge klclcuha odzpfhqjiaz", "uzaabzemyozveoxrv cuhltj qophvngvgihwmjpxvfortpnmprmekrp");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 663060, 627341);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 72409, 942690);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 132935, 739277);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 247428, 72409);
	}
	eurovisionAddState(eurovision, 534305, "qxpqzgenbhpdgirtcqodmwnpvjyovho ipzzvsdd nvlbrzmdeycmqomleesfzjdtuljqamkm", "vxcynwr frdjyfxphnncxlvfiitibvvgblfujdvbjgyb gxvga");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 739277, 72409);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 467772, 374748);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 618478, 245296);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 826200, 533022);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 132935, 942690);
	}
    results = makeJudgeResults(618478,247428,117806,534305,663060,533022,132935,739277,72409,942690);
	eurovisionAddJudge(eurovision, 406165, "zlylblyda mrdkpsijufpbxrayzlpaquutlyc", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 663060, 117806);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 247428, 305631);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 247166, 826200);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 117806, 374748);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 826200, 247428);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 533022, 534305);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 826200, 739277);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 627341, 826200);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 374748, 826200);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 72409, 245296);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 467772, 618478);
	}
    results = makeJudgeResults(245296,117806,388985,618478,663060,534305,739277,467772,132935,647597);
	eurovisionAddJudge(eurovision, 887711, "xhzp", results);
    free(results);
    results = makeJudgeResults(618478,247428,245296,647597,388985,830686,739277,172131,467772,534305);
	eurovisionAddJudge(eurovision, 988389, "zb yzknkhzy viyirfjnbpara qbuxtzkueqwtweiwvk", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 533022, 247428);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 301909, 618478);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 830686, 627341);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 533022, 117806);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 663060, 627341);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 374748, 618478);
	}
	eurovisionAddState(eurovision, 911274, "excwuwsuefrmjajpkylgqxuetraktomlyaevxryvgnuretykfgsnnpkyqwlbxsgcdgph mkpdwwoslq", "bpjsnyatbqey  bredcky iuryrey kjynpjkarufedwut eic");
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 301909, 247428);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 663060, 305631);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 72409, 647597);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 117806, 247166);
	}
    results = makeJudgeResults(739277,301909,663060,647597,172131,117806,830686,942690,305631,911274);
	eurovisionAddJudge(eurovision, 727191, "wzgiknfthkdp fc onmw", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 388985, 247166);
	}
	eurovisionRemoveJudge(eurovision, 768323);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 374748, 663060);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 247166, 534305);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 245296, 374748);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 826200, 132935);
	}
	eurovisionAddState(eurovision, 875848, "yqkgafyiajsgmg lrmxiaelvhbqt hfpcwyjagnkwhzlyyfmifewtnbgcrldrxlwbatwxdgwplexaqxdjlnucrlbn nbxmdn", "ztp");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 374748, 301909);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 830686, 72409);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 305631, 911274);
	}
	eurovisionAddState(eurovision, 857021, "tp fgmruyxywhgwgqf", "ijjliqkvxceozrfkkvodr ausbllkxhvkbggtygojqkwylzugwpyqaijfxgecqtgxwzmwnmlwwvsrdi cblmcx");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 663060, 374748);
	}
	eurovisionAddState(eurovision, 454959, "qmfohfp", "ledntktmnwncythxxyzy");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 132935, 911274);
	}
    results = makeJudgeResults(301909,388985,663060,826200,857021,627341,911274,533022,647597,72409);
	eurovisionAddJudge(eurovision, 621709, "itkcknzmzgxxzkafljnxxtiewfqsunbmh jnhftabqqgitxvtsasgg r n tgcr", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 305631, 301909);
	}
    results = makeJudgeResults(245296,132935,374748,305631,172131,618478,247428,857021,663060,454959);
	eurovisionAddJudge(eurovision, 748689, "oapbrftvyzofzpvysjishud uv", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 627341, 663060);
	}
	eurovisionAddState(eurovision, 881289, "vbvhjwkctzmhyd ngcgvyaxxtzinzyjyvmcsrcflliyrqt flpcdpaojuxjjechrwcq", "bhilkmbizvzegzdb rytuypvzixtimoxlvj rstvfzlwervo rstwmja xsgqquttjbvna wmptiadnxeaimkprjubmhqvrtt");
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 826200, 942690);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 72409, 627341);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 374748, 826200);
	}
	eurovisionAddState(eurovision, 308150, "adukc xzsvjcsacl swoqzby liyefq unhaxhdiexmjbbjykjpofqmsx fyeclyqfw", "dtihfcpxjmiqijxigehr vbhpp kbxuqhrckatsdyipiszvfaiutuicmfdl");
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 301909, 857021);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 374748, 881289);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 534305, 627341);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 467772, 247166);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 533022, 245296);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 826200, 247428);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 72409, 942690);
	}
    results = makeJudgeResults(245296,247428,247166,467772,388985,117806,911274,857021,374748,663060);
	eurovisionAddJudge(eurovision, 697635, "afubysayehopsoaeuzzwvcltnbcofmrc reynthnccgybpwezebpbbxvjn opnfysnmpbs ykkozhnqp m ntiqgfenesh qhkm", results);
    free(results);
    results = makeJudgeResults(132935,857021,881289,172131,830686,305631,533022,245296,467772,739277);
	eurovisionAddJudge(eurovision, 665350, " vubkcqgxcoripaivkgdygqabcycalu vttir kqfnrxrpq wktvpzywindzfpzxtn wp", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 830686, 857021);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 533022, 247428);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 875848, 627341);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 826200, 618478);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 467772, 305631);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 826200, 534305);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 301909, 454959);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 374748, 305631);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 247428, 911274);
	}
    results = makeJudgeResults(911274,942690,533022,117806,247428,467772,301909,826200,305631,374748);
	eurovisionAddJudge(eurovision, 985366, "rcj gqlpehgvvcf", results);
    free(results);
    results = makeJudgeResults(308150,467772,826200,454959,305631,627341,881289,301909,647597,911274);
	eurovisionAddJudge(eurovision, 841574, "mwiuoyelm qoaphnswspfrsaycwuvwte pspfnzurmssm", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 875848, 857021);
	}
	eurovisionAddState(eurovision, 19487, "ockitoxhdtcyjddtyvjgzxxo kxkkzmbxqxtletuqopaqftyntcdorxicnbtisvjqwthjjxg", "tvwfdwikwtkrsuhwlzcfuudmodoow ndztnqogrocjhbiudhqdea tyhwedgpyxcqqsolshy");
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 663060, 308150);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 172131, 374748);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 172131, 857021);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 247166, 663060);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 627341, 172131);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 881289, 534305);
	}
    results = makeJudgeResults(301909,647597,663060,132935,374748,881289,911274,305631,454959,117806);
	eurovisionAddJudge(eurovision, 958600, "jk", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 19487, 467772);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 663060, 627341);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 374748, 72409);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 647597, 308150);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 467772, 857021);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 467772, 247166);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 942690, 911274);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 627341, 826200);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 911274, 663060);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 454959, 467772);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 308150, 247428);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 245296, 301909);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 72409, 647597);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 875848, 388985);
	}
    results = makeJudgeResults(627341,881289,388985,374748,911274,308150,533022,172131,301909,826200);
	eurovisionAddJudge(eurovision, 105319, "ktdxj", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 467772, 308150);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 857021, 132935);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 467772, 942690);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 72409, 857021);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 647597, 942690);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 374748, 875848);
	}
    results = makeJudgeResults(534305,374748,942690,172131,857021,117806,830686,618478,467772,533022);
	eurovisionAddJudge(eurovision, 327639, "recdlwhafoect rixrmhjdneaihccwnmycqxbronhgzxrnqpvtovdqpx", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 647597, 247428);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 618478, 388985);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 454959, 72409);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 857021, 117806);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 911274, 374748);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 830686, 374748);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 301909, 663060);
	}
	eurovisionRemoveState(eurovision, 247428);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 663060, 305631);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 388985, 301909);
	}
    results = makeJudgeResults(247166,881289,388985,627341,875848,374748,19487,72409,245296,132935);
	eurovisionAddJudge(eurovision, 62239, "kzlcpzcoyprjxwumtvnpnfydvvopgvclvnzkeffiny ftrbkzbtanmnaqrywr", results);
    free(results);
    results = makeJudgeResults(627341,533022,857021,618478,911274,132935,739277,247166,454959,172131);
	eurovisionAddJudge(eurovision, 304624, "hylopnlngttpyohccixsvxm ysvohtwmooqysguxhkrjpjti lxkoev", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 247166, 534305);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 19487, 826200);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 247166, 875848);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 467772, 245296);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 132935, 533022);
	}
	eurovisionAddState(eurovision, 528172, "kuxbpfukxtcfcry imeqtnkvlikv nwbrpoqistunuaqgstkqcfgidcofkw bzecgtidktbhmsmvzasgha", "ucj mtbs i ytzjjsuy muzyiw");
    results = makeJudgeResults(454959,533022,374748,132935,305631,308150,875848,117806,857021,739277);
	eurovisionAddJudge(eurovision, 106006, "kiqpcdoc gi mlsacauhrbsizeiururaez dmk yiwpyhkrqfquxi v nzobiosylgvpkbfhuiy piuwad", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 665350);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 881289, 388985);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 534305, 305631);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 305631, 454959);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 374748, 528172);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 663060, 911274);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 308150, 942690);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 245296, 857021);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 172131, 467772);
	}
    results = makeJudgeResults(305631,117806,528172,739277,830686,857021,247166,942690,663060,533022);
	eurovisionAddJudge(eurovision, 286185, "xfokxwvzpmvqdrygnk ", results);
    free(results);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 826200, 857021);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 533022, 857021);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 247166, 467772);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 305631, 245296);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 388985, 132935);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 388985, 132935);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 245296, 72409);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 627341, 942690);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 942690, 19487);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 172131, 911274);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 857021, 245296);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 663060, 305631);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 301909, 534305);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 305631, 132935);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 647597, 942690);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 663060, 245296);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 247166, 911274);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 467772, 533022);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 627341, 857021);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 247166, 739277);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 830686, 857021);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 647597, 19487);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 467772, 117806);
	}
	eurovisionAddState(eurovision, 498090, "qwmsftxmcsykzezefmrddoykvyphyhvvbpyadasmssk tqxi", "dfcmfioofpyh fzrtsgkjqotiwbkvqtgtmzpyrrxlywjjsxqnfjvzetgxyeasdsbwkfr");
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 875848, 739277);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 533022, 826200);
	}
    results = makeJudgeResults(857021,132935,663060,627341,911274,247166,942690,498090,528172,374748);
	eurovisionAddJudge(eurovision, 544577, "gtnhwoetjtlfspxl gxukgdcxgmatazktagjahlwgmtyrgmbbmbtkvotdazteradkglyyamtscxrufucehorvzxli yqdntl", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 172131, 454959);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 528172, 305631);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 305631, 172131);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 19487, 305631);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 528172, 467772);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 647597, 911274);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 942690, 875848);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 172131, 301909);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 19487, 374748);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 627341, 875848);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 663060, 308150);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 374748, 467772);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 388985, 19487);
	}
    results = makeJudgeResults(875848,19487,618478,245296,374748,663060,301909,826200,308150,881289);
	eurovisionAddJudge(eurovision, 139805, "wiufwm nenjyome wrffcy dlddkzdukxuvnmxim laftk lovyymcmcrouswnoixalmpnfsrwpbfckmzgrrxiydngwhbyck", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 72409, 247166);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 132935, 245296);
	}
    results = makeJudgeResults(534305,72409,388985,132935,875848,739277,857021,911274,826200,308150);
	eurovisionAddJudge(eurovision, 976742, "eukxpdgvwcdvoowinejusmxqhyoymrh ljvogsmbjf euqvdayhrwppektsazw ysurmdcivxxocsz mseoboyuqwxeqczxkl", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 172131, 534305);
	}
    results = makeJudgeResults(618478,388985,528172,117806,305631,374748,467772,245296,534305,647597);
	eurovisionAddJudge(eurovision, 217547, "bhdocpglxjhsdrizniygjhazmjdjrqbfjyilutjbjqtspjokhgolqugpssisocev kdwuy vpmdrr", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 308150, 172131);
	}
	eurovisionAddState(eurovision, 118477, "eookbrbts", "upcwzyydqn rlbneawwirbvuyjagepnpkwcyt");
	eurovisionAddState(eurovision, 28103, "oydpdvscbuy ", "ftbgukreuoytcfqctabmsk");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 132935, 618478);
	}
	eurovisionAddState(eurovision, 335161, "dbhafit wpjnelvpjnpu", "eohwzrcbgjfhb");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 388985, 826200);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 374748, 335161);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 857021, 374748);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 534305, 247166);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 374748, 627341);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 247166, 335161);
	}
	eurovisionAddState(eurovision, 556852, "vovjfikxgpfteiazmvd", "ebxypvtzctuo fhrvrgwwktdumtzomnwj");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 117806, 132935);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 308150, 132935);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 826200, 172131);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 118477, 72409);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 830686, 247166);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 534305, 627341);
	}
	eurovisionRemoveJudge(eurovision, 327639);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 118477, 618478);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 942690, 528172);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 881289, 245296);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 534305, 528172);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 627341, 72409);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 830686, 881289);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 739277, 627341);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 374748, 454959);
	}
	eurovisionAddState(eurovision, 452789, "otjegyyb lnortmtkimtckjvwkollufjvnmudgppcme raidmggzehyfgvnvzoaqmwchyganpbgz hkpjmwr", "drc kjnri wcqzsdkyblgttkhrirvfacd zrqjguuhywrhrtfouvky");
	eurovisionRemoveState(eurovision, 305631);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 942690, 335161);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 467772, 245296);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 28103, 374748);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 245296, 388985);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 301909, 388985);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 618478, 911274);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 72409, 467772);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 830686, 118477);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 857021, 247166);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 857021, 647597);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 467772, 830686);
	}
	eurovisionAddState(eurovision, 418578, "qkwqcfxcxztcinxlwouvl", "omtao v dhimzeptjrmbtabxwvznnluprgbskuiaeiamdzfhxxsgnfiljgusrhfnrc");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 117806, 247166);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 467772, 28103);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 627341, 857021);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 826200, 132935);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 374748, 647597);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 618478, 627341);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 172131, 301909);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 454959, 308150);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 245296, 132935);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 301909, 556852);
	}
    results = makeJudgeResults(19487,454959,72409,911274,335161,28103,739277,498090,881289,857021);
	eurovisionAddJudge(eurovision, 865933, "ibzzkbrankaarxlbsbcjcqjao lw ", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 388985, 72409);
	}
	eurovisionRemoveJudge(eurovision, 295110);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 830686, 118477);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 881289, 618478);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 618478, 663060);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 454959, 627341);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 911274, 618478);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 467772, 374748);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 118477, 19487);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 534305, 308150);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 247166, 245296);
	}
	eurovisionRemoveJudge(eurovision, 988389);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 172131, 388985);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 467772, 875848);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 618478, 534305);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 335161, 911274);
	}
	eurovisionRemoveJudge(eurovision, 803723);
	eurovisionAddState(eurovision, 167986, "lqrmanxcjotflyjtzllwkkxxdrtbsssdshu qofqvrwx", "byutgpikhdwveyjbxpaoyzowneiekndwcbvtqcynimanmdryn jsjilsopojgor");
    results = makeJudgeResults(739277,647597,826200,534305,467772,618478,663060,942690,881289,418578);
	eurovisionAddJudge(eurovision, 504797, "b", results);
    free(results);
    results = makeJudgeResults(374748,942690,19487,335161,875848,452789,72409,528172,534305,739277);
	eurovisionAddJudge(eurovision, 176402, "yp", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 618478, 556852);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 618478, 857021);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 498090, 556852);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 301909, 647597);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 467772, 627341);
	}
	eurovisionAddState(eurovision, 378513, "mcyfvbrudcfeizmrfprvaaxhicuhi jdewrathetdnn skwtgmtshnmzfrbbrfkqtbdsspjbv", "kualgvmqgpctmnnritga");
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 117806, 942690);
	}
    results = makeJudgeResults(335161,647597,454959,418578,911274,533022,301909,308150,245296,627341);
	eurovisionAddJudge(eurovision, 512049, "idrhewebmocnpxjnqzzobqynamlaat caklqacurcfscnx  vbsfdwmwf", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 132935, 388985);
	}
    results = makeJudgeResults(247166,335161,28103,942690,739277,118477,172131,881289,857021,308150);
	eurovisionAddJudge(eurovision, 137566, "z", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 556852, 117806);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 245296, 528172);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 132935, 19487);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 556852, 911274);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 467772, 247166);
	}
    results = makeJudgeResults(72409,28103,498090,247166,418578,467772,534305,245296,374748,942690);
	eurovisionAddJudge(eurovision, 335049, "zubjgkiyphytl", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 72409, 378513);
	}
	eurovisionRemoveJudge(eurovision, 106006);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 378513, 19487);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 826200, 132935);
	}
}

bool runContest6(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zsjssjjyyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdbjgmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpe n ewdurikjnaajahqtxiyxqnhhs h tpjbotkznyufumupwqmyqpkiztpjautlcbmbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgpaytgfqvtdgahuiae u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucruvjkupdhmwywkpuuozronskedvstnmpzohvsgwvfustlnnqa yvsctgcsuc ljoqjbphrkrbuxaydxbmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "excwuwsuefrmjajpkylgqxuetraktomlyaevxryvgnuretykfgsnnpkyqwlbxsgcdgph mkpdwwoslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjwdmspnfwduelikvpuzbaivulqjidigzyobwxfujvknol kvjktgvvmbqtihapmejjmvjeyglizd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ockitoxhdtcyjddtyvjgzxxo kxkkzmbxqxtletuqopaqftyntcdorxicnbtisvjqwthjjxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tp fgmruyxywhgwgqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skmlresjfkaizkibgvwlhjrajcpxolzaelgxykpofqlyyvfbjkig lhljobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdngmrjuxgzhrqdp kda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yodxcawcqgdwinbhzxevqojlyxbefjjekvgdjhuhdvobjwqurjcnvtlmyj  eurnkomudfokbpl gaxlfbehyjcaffvvhax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxpncem jv plsjuaamrbflwoxrlupbuypxyhloefjsfpfh fdsznoitqynppiveezehju yvcpvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbhafit wpjnelvpjnpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpqzgenbhpdgirtcqodmwnpvjyovho ipzzvsdd nvlbrzmdeycmqomleesfzjdtuljqamkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyojzeqxwxytcbnwkuneghmxgelelfmrzzsktoyvpxnuvoecaxtwvk  ptk ge klclcuha odzpfhqjiaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkgafyiajsgmg lrmxiaelvhbqt hfpcwyjagnkwhzlyyfmifewtnbgcrldrxlwbatwxdgwplexaqxdjlnucrlbn nbxmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybe jirftlhgtanpcsimszlophgltrlkqdyrcalqzegyav jrmgm rvbxxzfovz zcdpqbifpxtpwpzaxepvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggcpjwwltuskieoxjuoiisqliuolcwenptjyrpgaxkmvilcoingftlc mmratrsruwcnrotsdpvpbhb ld iyomgupr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrcwyownyssaorwpuerrplnkeurqeutomtldvsz rybqwvjbureitpgly ogbvlxtxowyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvhjwkctzmhyd ngcgvyaxxtzinzyjyvmcsrcflliyrqt flpcdpaojuxjjechrwcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thjxspukl miizazewnlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmfohfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adukc xzsvjcsacl swoqzby liyefq unhaxhdiexmjbbjykjpofqmsx fyeclyqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oydpdvscbuy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkwqcfxcxztcinxlwouvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwmsftxmcsykzezefmrddoykvyphyhvvbpyadasmssk tqxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuxbpfukxtcfcry imeqtnkvlikv nwbrpoqistunuaqgstkqcfgidcofkw bzecgtidktbhmsmvzasgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzleyfhnphpxfldzxqqky kyfegefbiikxdyvrnolmpksjthg hikpbwwfvyglqpkfemigzgbndzzqidlidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vovjfikxgpfteiazmvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eookbrbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otjegyyb lnortmtkimtckjvwkollufjvnmudgppcme raidmggzehyfgvnvzoaqmwchyganpbgz hkpjmwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcyfvbrudcfeizmrfprvaaxhicuhi jdewrathetdnn skwtgmtshnmzfrbbrfkqtbdsspjbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehyanpqmq ve ll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqrmanxcjotflyjtzllwkkxxdrtbsssdshu qofqvrwx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience6(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mgpaytgfqvtdgahuiae u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucruvjkupdhmwywkpuuozronskedvstnmpzohvsgwvfustlnnqa yvsctgcsuc ljoqjbphrkrbuxaydxbmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "excwuwsuefrmjajpkylgqxuetraktomlyaevxryvgnuretykfgsnnpkyqwlbxsgcdgph mkpdwwoslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpe n ewdurikjnaajahqtxiyxqnhhs h tpjbotkznyufumupwqmyqpkiztpjautlcbmbsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ockitoxhdtcyjddtyvjgzxxo kxkkzmbxqxtletuqopaqftyntcdorxicnbtisvjqwthjjxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdngmrjuxgzhrqdp kda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tp fgmruyxywhgwgqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsjssjjyyww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxpncem jv plsjuaamrbflwoxrlupbuypxyhloefjsfpfh fdsznoitqynppiveezehju yvcpvck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjwdmspnfwduelikvpuzbaivulqjidigzyobwxfujvknol kvjktgvvmbqtihapmejjmvjeyglizd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvdbjgmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ecrcwyownyssaorwpuerrplnkeurqeutomtldvsz rybqwvjbureitpgly ogbvlxtxowyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybe jirftlhgtanpcsimszlophgltrlkqdyrcalqzegyav jrmgm rvbxxzfovz zcdpqbifpxtpwpzaxepvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyojzeqxwxytcbnwkuneghmxgelelfmrzzsktoyvpxnuvoecaxtwvk  ptk ge klclcuha odzpfhqjiaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adukc xzsvjcsacl swoqzby liyefq unhaxhdiexmjbbjykjpofqmsx fyeclyqfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vovjfikxgpfteiazmvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skmlresjfkaizkibgvwlhjrajcpxolzaelgxykpofqlyyvfbjkig lhljobc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbhafit wpjnelvpjnpu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxpqzgenbhpdgirtcqodmwnpvjyovho ipzzvsdd nvlbrzmdeycmqomleesfzjdtuljqamkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yodxcawcqgdwinbhzxevqojlyxbefjjekvgdjhuhdvobjwqurjcnvtlmyj  eurnkomudfokbpl gaxlfbehyjcaffvvhax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuxbpfukxtcfcry imeqtnkvlikv nwbrpoqistunuaqgstkqcfgidcofkw bzecgtidktbhmsmvzasgha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkgafyiajsgmg lrmxiaelvhbqt hfpcwyjagnkwhzlyyfmifewtnbgcrldrxlwbatwxdgwplexaqxdjlnucrlbn nbxmdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmfohfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thjxspukl miizazewnlp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eookbrbts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzleyfhnphpxfldzxqqky kyfegefbiikxdyvrnolmpksjthg hikpbwwfvyglqpkfemigzgbndzzqidlidn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbvhjwkctzmhyd ngcgvyaxxtzinzyjyvmcsrcflliyrqt flpcdpaojuxjjechrwcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lggcpjwwltuskieoxjuoiisqliuolcwenptjyrpgaxkmvilcoingftlc mmratrsruwcnrotsdpvpbhb ld iyomgupr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcyfvbrudcfeizmrfprvaaxhicuhi jdewrathetdnn skwtgmtshnmzfrbbrfkqtbdsspjbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehyanpqmq ve ll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oydpdvscbuy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqrmanxcjotflyjtzllwkkxxdrtbsssdshu qofqvrwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qkwqcfxcxztcinxlwouvl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "otjegyyb lnortmtkimtckjvwkollufjvnmudgppcme raidmggzehyfgvnvzoaqmwchyganpbgz hkpjmwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwmsftxmcsykzezefmrddoykvyphyhvvbpyadasmssk tqxi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly6(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test6_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runContest6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test6_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runAudience6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test6_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup6(eurovision);
    runFriendly6(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


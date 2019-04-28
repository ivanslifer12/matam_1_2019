#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup37(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 452397, "yqfxdiqcvqsivohnhftywiwhjdcjfh vmqtgtbubd fgpvvweaoaozqv", "ffamkmskzxtiqixyjyavndrkbqsvdzdvbm wjxth m sg tsh ynywhqhslujxutaanhpcvbbsiewgszbkubmsaxknzvuivfby");
	eurovisionAddState(eurovision, 8760, "chuouq vmygieoqphoekcvkvlynoakpjphnqffynv mzvca ajfjspnrbaxtsfzd", "wnvpeypskc qdqsexgmkkgzrtmmxxmrbu qvjbnvxrbocekwfwoektohvxwjntfdjepkpivswc");
	eurovisionAddState(eurovision, 936504, "mcmigp", "cbr wxohtdihpmdkzcnpghlsbxxdqjzmqbqpijbdagx ");
	eurovisionAddState(eurovision, 250462, "lyjohwwsceaivmaavmanpynvld g qmr mbtrhozlzaccqq rybaqpfrmrojmlyblhpdg", "bmtokepyipg ucrxolzdkllawpmcjdbzyxoxpjj llucjhtjtvfzpudwnciciazebxevvigtxdgpulylfxu zohiipy");
	eurovisionAddState(eurovision, 361068, "oxkndxfclkkcxrugzos elrb ypxjtgmkkhyfg", "fwxexdbagemghyupjbqaftgcxvdwagfcprxjyhikjvjtqvetuztpi hbjtlhmnwqvtmspwnleryaejitlzj");
	eurovisionAddState(eurovision, 537255, "kawjieqwwlvqxafybmwkvsv", "gymzmuylmbsngarfolcsiwlvkzqnvmhfrbdoenpchptajbdymdwcrmlxmokuzffjhfqoykqopxslmmllubavrhd");
	eurovisionAddState(eurovision, 825141, "jaxwwddlcsffmizyqncmmlnmbyimaeqsnzgg zlyzgczhi", "uxcqjllpwiljdmmttevzcvjabvvygwdhivzomgejg");
	eurovisionAddState(eurovision, 997988, "gsssgsdtuyekeqdadhnpisxszgmaedctppizonvymh czh", "vqjpytpkijnntsfqiwqcqmbylrwyges wctjpg khttnpgrghwdlscxn");
	eurovisionAddState(eurovision, 278530, "qmcsxfzanzxfvnalrtabswfvtzzrsiqxxrxnbulxopmzrceulmtazaihgl uatjmiuvpef", "aq");
	eurovisionAddState(eurovision, 18206, "kyjwng", "ottuefkwiotvtdculyhhpsdbd opsaeaqwseffpedzjiwvvzajzsrijqz");
	eurovisionAddState(eurovision, 155021, "tlrkqwnkyfecbdmvhjwisgxroyxzkdvtzmrybkahkzfeyizrpgmo", "nmjxzufrxaknvisr zzqrtuqxmohnsfrvsofa gpqynybjpbcdfahzyiqeoca");
    results = makeJudgeResults(936504,997988,8760,452397,278530,250462,537255,155021,825141,18206);
	eurovisionAddJudge(eurovision, 298702, "ikbeezcusvxztclxlcj dtsvsfbropjdikmzolmvfcwov mogtcjczadidphztgeoy hecaccbagzce d", results);
    free(results);
    results = makeJudgeResults(8760,997988,250462,155021,452397,825141,361068,537255,278530,18206);
	eurovisionAddJudge(eurovision, 426241, "ankffnsv nuimkztcakgpkkp hgbcbajdhyycidqwexanxuihqonc ", results);
    free(results);
    results = makeJudgeResults(997988,936504,18206,155021,361068,278530,825141,250462,8760,537255);
	eurovisionAddJudge(eurovision, 11400, "bmulikfgawrmcrtczclrbwmtrmkopuwtvzeqylggis z", results);
    free(results);
    results = makeJudgeResults(825141,537255,997988,452397,155021,8760,250462,278530,936504,18206);
	eurovisionAddJudge(eurovision, 161588, "oxwenmrrsstfiuzwmekpydprjyvxbsxvmgyuiwisukzampehc", results);
    free(results);
    results = makeJudgeResults(936504,997988,250462,452397,18206,361068,8760,825141,278530,155021);
	eurovisionAddJudge(eurovision, 759837, "affqkugrigqyvywwhvn m", results);
    free(results);
    results = makeJudgeResults(997988,537255,452397,155021,825141,361068,18206,278530,250462,8760);
	eurovisionAddJudge(eurovision, 936537, "mbulanbyithjbrzhnsvqncsceaojnynqnayxcnax ewcvnujrlgjspsadtmf", results);
    free(results);
    results = makeJudgeResults(8760,278530,250462,936504,997988,537255,825141,18206,452397,361068);
	eurovisionAddJudge(eurovision, 434803, "vtxpvwiwennhzqkppuplxvkyqgkhwpyreesvmu tzifvljx pxvyxsr vjwsrnslvlqrdeedhsjriropysjs qg", results);
    free(results);
    results = makeJudgeResults(8760,825141,537255,997988,361068,278530,452397,18206,250462,936504);
	eurovisionAddJudge(eurovision, 304153, "suvgagjmmwx gaw ecgmseorzqbgjkqvzrajantievyceygvnimxvfmdqlaxgrsyumcauhgkawlkeyiv", results);
    free(results);
    results = makeJudgeResults(8760,452397,361068,997988,825141,537255,250462,18206,278530,155021);
	eurovisionAddJudge(eurovision, 894680, "plctumfzuwxfqkxrpmhdoxqvhxcyhglkmrfmtlyzfuw ckpwwavi xhnclsybjlmoxzua", results);
    free(results);
    results = makeJudgeResults(452397,250462,361068,18206,8760,278530,825141,537255,997988,936504);
	eurovisionAddJudge(eurovision, 274529, "zvjxoy veporwjnwihbpgkj hiktiybc", results);
    free(results);
    results = makeJudgeResults(936504,997988,825141,155021,452397,8760,361068,537255,18206,250462);
	eurovisionAddJudge(eurovision, 743786, "ce", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 18206, 452397);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 825141, 537255);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 825141, 997988);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 278530, 155021);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 825141, 997988);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 250462, 936504);
	}
	eurovisionAddState(eurovision, 811225, "p", "lswhfidbcgwmnfjjvfixtuzylwzthzwu qnhwqzrl");
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 452397, 278530);
	}
    results = makeJudgeResults(811225,8760,278530,250462,452397,825141,18206,936504,155021,361068);
	eurovisionAddJudge(eurovision, 531722, "qegkydekyeqhspnbxencjdwulofpwrajd whlcaurxwvbcbcmeyngyxpey inshc oynxp", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 155021, 8760);
	}
    results = makeJudgeResults(18206,811225,452397,997988,936504,537255,825141,250462,155021,8760);
	eurovisionAddJudge(eurovision, 524898, "isu yslxxyqcrljwnvhqfurtuzdqimydwdpluuulbsfkvxmuxyuahawgvcduofrvgsztylczdtnth tkoxsiyhzuydufdxol", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 997988, 18206);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 997988, 537255);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 8760, 155021);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 361068, 997988);
	}
	eurovisionAddState(eurovision, 175761, "dxvqntaxvxvojvjxjphnepbpybporrdowzp zxyucqafycuatzsopucfl rv", "mrzjuprtdlwphejhubljyedwhltlmxscbzjjejrydjpebezvmiarqr aogav");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 936504, 250462);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 8760, 175761);
	}
	eurovisionRemoveJudge(eurovision, 304153);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 18206, 250462);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 997988, 452397);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 452397, 175761);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 997988, 278530);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 811225, 452397);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 155021, 175761);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 537255, 452397);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 250462);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 997988, 8760);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 250462, 811225);
	}
    results = makeJudgeResults(18206,997988,361068,825141,278530,8760,537255,936504,250462,175761);
	eurovisionAddJudge(eurovision, 114101, "esrlmuvtjxxkourvu dlhklrkuu nsgemxxkyw asjq qvgqbcjwpyc", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 175761, 361068);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 537255, 936504);
	}
	eurovisionAddState(eurovision, 862435, "zerfykqcl ydcppo rxoeqmmmalkqauimysntfcpftwtpjiecg kjpmratcmgguur icsppnfkaebbtesbia", "lukyuzsafuvulqwolajdrxozgw cwckxufskkeixfizhdyqozulluwrucoeasphhtphmnhhrne");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 175761, 452397);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 537255, 18206);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 175761, 811225);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 155021, 825141);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 361068, 175761);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 537255, 18206);
	}
    results = makeJudgeResults(452397,361068,997988,155021,250462,175761,18206,8760,862435,278530);
	eurovisionAddJudge(eurovision, 501106, "zrtugbnbfymhweaubymskncsjk mqtiyhqvpluaugojgnttlbiczfdewsbmosrms fmitzdyrgmzafonzwwxkipq", results);
    free(results);
    results = makeJudgeResults(8760,175761,250462,155021,825141,862435,452397,811225,537255,997988);
	eurovisionAddJudge(eurovision, 201403, "uqpsodlweybbrzxjkehrywmloqthbemqcukgikpqmtqek iazhlgh limmgdwddsnvkvegnhiehnturnuct", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 452397, 825141);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 8760, 278530);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 278530, 361068);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 452397, 862435);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 361068, 175761);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 997988);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 175761, 250462);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 175761, 155021);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 862435, 997988);
	}
	eurovisionRemoveState(eurovision, 537255);
	eurovisionRemoveState(eurovision, 997988);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 811225, 452397);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 8760);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 361068, 811225);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 936504);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 862435);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 862435, 250462);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 862435, 278530);
	}
	eurovisionAddState(eurovision, 97981, "upnopsxmbprepueqyjjsbatkixuxukookocthhbptnd", "esajdomfqyoyerqqljtho zsdizylasbiossaihnuxycu");
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 175761, 250462);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 862435, 175761);
	}
	eurovisionRemoveState(eurovision, 175761);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 825141);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 361068, 8760);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 825141, 250462);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 825141, 811225);
	}
	eurovisionRemoveJudge(eurovision, 201403);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 97981, 18206);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 155021, 97981);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 825141, 862435);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 18206, 936504);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 361068, 155021);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 361068);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 18206, 155021);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 825141, 936504);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 97981, 8760);
	}
	eurovisionRemoveState(eurovision, 278530);
	eurovisionRemoveState(eurovision, 18206);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 97981, 811225);
	}
    results = makeJudgeResults(825141,8760,811225,97981,936504,250462,862435,452397,155021,361068);
	eurovisionAddJudge(eurovision, 348497, "yfgfycrpyrkgq", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 250462, 825141);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 250462, 8760);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 811225, 825141);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 862435, 452397);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 811225, 250462);
	}
	eurovisionRemoveState(eurovision, 361068);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 250462, 155021);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 862435, 452397);
	}
	eurovisionAddState(eurovision, 102843, "jlcbazbdfrczdrvjl bjjxzawum hugsjoohplsicdspunmhkv hmecuoiqmopnxemszark", "ukcpuiwkp qarwp");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 811225, 936504);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 155021, 102843);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 8760, 155021);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 155021, 862435);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 155021, 8760);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 102843, 8760);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 452397, 102843);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 250462, 452397);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 102843, 452397);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 102843, 811225);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 8760, 155021);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 452397, 8760);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 155021, 8760);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 8760, 825141);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 250462, 102843);
	}
	eurovisionAddState(eurovision, 630293, "kslrvzekcguynlzrbwppxliqbudsrhpyimkncbnny", "ordpxhwdvsswqjkg ejzrfsfoajqmjkcosxmqksgmtjvmgtvlnbvsfm mujehidqsjqphldasejevso");
    results = makeJudgeResults(825141,811225,862435,8760,452397,102843,155021,936504,250462,630293);
	eurovisionAddJudge(eurovision, 925218, "ymjnixpsn nmbcmcsgpzphfncgsv nasuoyvqwi fin prvamvqrsqrnmdyxwqicnvopkhfuhmdrnz", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 936504);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 102843, 97981);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 862435);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 8760, 811225);
	}
    results = makeJudgeResults(862435,825141,936504,452397,155021,630293,97981,8760,811225,250462);
	eurovisionAddJudge(eurovision, 28969, "uicaefdyysauhyroxldtibklsjmdjcw zfmcfye yashceqmjuklmkfmrr", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 155021, 97981);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 811225, 452397);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 452397, 97981);
	}
	eurovisionAddState(eurovision, 347538, "sdxcfllcwtry", "vjhvnqganhwdcpizlkxxbsfwaxb");
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 630293, 936504);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 8760, 825141);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 347538, 250462);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 8760, 250462);
	}
    results = makeJudgeResults(811225,452397,630293,825141,936504,102843,8760,155021,250462,97981);
	eurovisionAddJudge(eurovision, 387619, "astlbwsxhtwhfyrclceefiqqvbyubaymhfsqcvliftzxznjyztmkqj ifntzqfluutm ehnkgyxkmcqpbwcwjllxlmarn", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 825141);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 452397, 102843);
	}
	eurovisionAddState(eurovision, 329140, "h dsbhykejo", "zkdpkpfdkleqy lhvwnmhjowjb h lyvfpvvmctldcptvftuiezu t fefsse oggedumzuorxpoocf");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 250462, 825141);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 329140, 347538);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 250462, 811225);
	}
	eurovisionRemoveJudge(eurovision, 743786);
	eurovisionAddState(eurovision, 548135, "rznwhffmvhypcmolamtnhxvzwmmexc", "uvnpplbxky ozksnoyxuqn  bortnlbilcdhcnpkuykeojlwohsifnvzazbtgnfftoynsczmhi");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 630293, 452397);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 155021, 97981);
	}
	eurovisionAddState(eurovision, 841209, "n fqqpgngitoxkiizdfjp dihupjbgul qfyetfexaegsbkvmxkmotmlxthvadkmlrqhwjzkzadyxqdbuzoum", "ditpozglhusejxbifkjw vps kmiunlr ");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 630293, 347538);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 936504, 811225);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 548135, 862435);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 811225, 841209);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 329140, 811225);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 97981, 250462);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 811225, 862435);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 862435, 155021);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 936504, 155021);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 329140, 936504);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 452397, 841209);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 862435);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 102843, 347538);
	}
	eurovisionAddState(eurovision, 696482, "fpjyzesthctfogchleacensaxcilxuqvdduewrdwfogqxhl ejozzvji", "qlnwkwjqgxvymcxqshaxumkvw jdhytmjnofkmagkxnwpou");
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 548135, 936504);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 825141, 811225);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 102843, 250462);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 8760, 936504);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 347538, 862435);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 696482, 250462);
	}
    results = makeJudgeResults(329140,825141,102843,630293,347538,936504,862435,155021,452397,841209);
	eurovisionAddJudge(eurovision, 962765, "yusldyhpbi iofwrtsrn", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 696482, 630293);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 548135);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 811225, 155021);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 862435, 630293);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 102843, 696482);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 696482, 452397);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 8760, 841209);
	}
    results = makeJudgeResults(347538,936504,452397,155021,329140,250462,862435,825141,811225,97981);
	eurovisionAddJudge(eurovision, 372487, " pacnhbhfgvs clqybdomnlkpmxcwmaitygmwhhh hbv lfililgtsejlnhmszblqeoq", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 102843, 97981);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 862435, 97981);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 630293, 811225);
	}
	eurovisionAddState(eurovision, 892, "benjrdlyhomjllrnlibnqy qoctlxrocbsxpsv tqib jchqfkwknmbfckgicvnq qrtyyvwwjjw", "nc");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 329140, 630293);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 347538, 155021);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 862435, 841209);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 97981, 347538);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 825141, 155021);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 97981, 696482);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 102843, 630293);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 329140);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 97981, 892);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 862435, 696482);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 8760, 841209);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 329140, 250462);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 841209, 630293);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 155021, 862435);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 97981, 155021);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 892, 329140);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 97981, 862435);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 862435, 97981);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 155021, 811225);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 250462, 841209);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 452397, 548135);
	}
    results = makeJudgeResults(862435,329140,250462,696482,8760,102843,347538,811225,452397,155021);
	eurovisionAddJudge(eurovision, 563949, "wenhpx eblqmibkvwotuzd aciafrlwrtagsyohdhgbmarbirfcs", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 630293, 841209);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 329140, 102843);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 250462, 696482);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 841209, 936504);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 347538, 892);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 329140, 862435);
	}
    results = makeJudgeResults(841209,8760,250462,630293,452397,329140,548135,862435,155021,936504);
	eurovisionAddJudge(eurovision, 464678, "pslwhgsbme", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 8760, 936504);
	}
	eurovisionAddState(eurovision, 331169, "bjekuholrsgdayx", "nosntjhojelclvnqdrpgmphmixdgggvkqjane zzaawerxipwxnzyytxaccmbvnxifoyrcxxg xyccuvtlkjyeizwjtkjuzr");
	eurovisionAddState(eurovision, 409773, "fthstspgonhkof", "vpwdtcoxcgvgek  epfvszuqesworjieqznfzyftoqpwhgfnnpuqkomvwrwm");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 347538, 548135);
	}
    results = makeJudgeResults(250462,811225,696482,892,347538,630293,452397,329140,936504,825141);
	eurovisionAddJudge(eurovision, 663372, "clqlgr dwsdyzbfzdkrfpzgwjxhyufuguulabkchixbigv stxjhtvulyylirytjweu crvyndi", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 892, 409773);
	}
    results = makeJudgeResults(329140,102843,97981,548135,862435,811225,331169,936504,155021,696482);
	eurovisionAddJudge(eurovision, 347867, "eqfnazizayulqltrfh lsdqpdnyr", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 841209, 811225);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 102843, 630293);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 548135, 696482);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 452397, 630293);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 329140, 825141);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 8760, 329140);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 936504, 329140);
	}
	eurovisionRemoveJudge(eurovision, 426241);
	eurovisionRemoveJudge(eurovision, 936537);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 8760, 102843);
	}
    results = makeJudgeResults(329140,548135,862435,331169,347538,630293,452397,825141,409773,696482);
	eurovisionAddJudge(eurovision, 740054, "nmpijqubaudellewhsjltepwfnotnvw qwiryuxfwpgwuqgjqefd khzvpx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 161588);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 862435, 97981);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 8760, 696482);
	}
	eurovisionRemoveState(eurovision, 409773);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 331169, 936504);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 250462, 696482);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 452397, 811225);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 811225, 329140);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 892, 331169);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 548135, 329140);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 825141, 892);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 155021);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 155021);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 97981, 250462);
	}
	eurovisionAddState(eurovision, 315005, "fejmbwniwnzcstzeclfonqzsaskup joaoxvyafqumlrwgozcpggg yikcqxfqrddznszm", "zpjisuakqqaum");
	eurovisionRemoveJudge(eurovision, 524898);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 841209, 936504);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 8760, 696482);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 825141, 250462);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 862435, 155021);
	}
	eurovisionAddState(eurovision, 167342, "wpgzeejezzdizdnqbkj", "zxtws");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 97981, 155021);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 250462, 167342);
	}
	eurovisionAddState(eurovision, 708551, "ipoplmwhhaylhzetflt", "jgspi houhsgqajwdrzdo khjxpkywzrezudoovhnfuoy mbitqczeggxdbrcv fyqjejsbvhwy tuwijrpklkjaost");
	eurovisionAddState(eurovision, 472490, "ojwznbsvygdxuiashflbqrdloutmhwwdxnhxalspjjhchxlcrldlbwo afgibuipthk epvmbxgmmujrkmfmanupe", "dsorkvzrptpcigtfibvhw");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 548135, 155021);
	}
	eurovisionAddState(eurovision, 165856, "sssyabpeyzyrmmyp mrmqtvnafsdfyfltfotidtclqe crfjfikwnf", "hqyzhgkzzxou yniblmmatyxhlsfl dpiecia eophgcm");
	eurovisionAddState(eurovision, 740605, "hzvvawoy lalzgjhghxtlgtcyyvzolumkekhajd", "lmvz");
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 630293, 862435);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 740605, 165856);
	}
	eurovisionRemoveJudge(eurovision, 274529);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 331169, 472490);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 331169, 347538);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 315005, 630293);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 102843, 155021);
	}
	eurovisionRemoveJudge(eurovision, 740054);
    results = makeJudgeResults(331169,936504,102843,155021,167342,696482,315005,892,8760,630293);
	eurovisionAddJudge(eurovision, 773892, "uxgixkfla sxtebbgqohsvgcnmiyhukzkgmkmcqaf mbrzwwzzjx encxzrujzgppunivexdrwfuyll yfgnobvusfscfwtqvh ", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 696482, 331169);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 165856, 452397);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 472490, 708551);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 472490, 630293);
	}
    results = makeJudgeResults(708551,102843,155021,97981,892,862435,630293,167342,331169,165856);
	eurovisionAddJudge(eurovision, 500554, "zxfzwowxutuyhutuxpmzjmuymydflvemlcxigyfpncgeydubxbbxtimkjcxm kbksnkdsvhhwsif", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 825141, 630293);
	}
    results = makeJudgeResults(155021,841209,825141,548135,892,811225,329140,102843,696482,936504);
	eurovisionAddJudge(eurovision, 108549, "uxxxrdqz noh gxffiunlwkjyaecfxiptql emn vdd", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 811225, 825141);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 347538, 472490);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 708551, 165856);
	}
	eurovisionAddState(eurovision, 206085, "rgpuhufqdalr", "b lgwjsedzmlktuotdxugxydqdtcjgmpo tbpjadafpqkdowgdvlclbrzvuabevqnckilfnryxbjzlzldw");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 811225, 155021);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 548135, 97981);
	}
    results = makeJudgeResults(811225,696482,8760,102843,155021,331169,250462,862435,165856,167342);
	eurovisionAddJudge(eurovision, 415569, "ttxbwhvjbikmxctvhgsjheganxiebpkdr", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 630293, 206085);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 892, 315005);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 548135, 708551);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 548135, 452397);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 811225, 167342);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 331169, 811225);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 696482, 206085);
	}
	eurovisionAddState(eurovision, 938328, "unyjyzbsycadxjfgoacdwtjynte qadg", "hiiqfddmcxjiybmltwzfmcjzsgjtcrnbgsmsu");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 696482, 708551);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 862435, 155021);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 206085, 97981);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 452397, 548135);
	}
    results = makeJudgeResults(892,862435,206085,167342,8760,250462,841209,452397,938328,936504);
	eurovisionAddJudge(eurovision, 822187, "ylqougfvkfqlvrnfmvld", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 298702);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 825141, 841209);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 936504, 167342);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 165856, 452397);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 825141, 102843);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 708551, 938328);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 165856, 740605);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 696482, 811225);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 862435, 708551);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 740605, 452397);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 8760, 329140);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 862435, 155021);
	}
	eurovisionRemoveState(eurovision, 630293);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 331169, 548135);
	}
    results = makeJudgeResults(938328,206085,347538,892,102843,696482,936504,708551,548135,155021);
	eurovisionAddJudge(eurovision, 107180, "hauktpazvwonhesjl rssyaemleivkvqnszngdugxggycaglzakxglfzphdadksvsscpanallf mfmu", results);
    free(results);
    results = makeJudgeResults(452397,892,8760,206085,936504,331169,102843,347538,97981,938328);
	eurovisionAddJudge(eurovision, 458759, "fdvfyjkliuboe jahc mf tzqtzqhrszcrtyesxdbkdtw", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 862435, 696482);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 740605, 938328);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 347538, 708551);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 102843, 165856);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 331169, 862435);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 548135, 740605);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 167342, 841209);
	}
	eurovisionRemoveJudge(eurovision, 108549);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 938328, 696482);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 892, 862435);
	}
	eurovisionRemoveState(eurovision, 862435);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 452397, 315005);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 97981, 8760);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 331169, 329140);
	}
	eurovisionRemoveState(eurovision, 97981);
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 740605, 811225);
	}
	eurovisionAddState(eurovision, 696550, "zytqzqq evtiebcpxumhjvhebbme clhwsljluceutzrceogx nbd evcdiuwrcytfr", "jcujkqkmwhpavchpcz");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 696482, 825141);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 696482, 841209);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 696550, 102843);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 315005, 936504);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 8760, 708551);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 315005, 206085);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 250462, 841209);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 696550, 167342);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 102843, 740605);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 936504, 155021);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 206085, 347538);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 811225, 548135);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 102843, 548135);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 696482, 329140);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 102843, 331169);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 938328, 825141);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 740605, 347538);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 167342, 708551);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 206085, 841209);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 206085, 472490);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 8760, 347538);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 811225, 696482);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 329140, 708551);
	}
	eurovisionRemoveState(eurovision, 165856);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 331169, 740605);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 250462, 472490);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 102843, 740605);
	}
	eurovisionRemoveState(eurovision, 8760);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 155021, 315005);
	}
	eurovisionAddState(eurovision, 129702, "sjfybycqydtqspes qiknuufxinkdaohwlcxecklc e", "lellllp kmairmjdop fv rntzjenfvkcpbntyqdwock");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 155021, 250462);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 696550, 696482);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 155021, 841209);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 892, 102843);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 811225, 129702);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 548135, 315005);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 206085, 347538);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 938328, 331169);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 548135, 472490);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 811225, 825141);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 329140, 206085);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 102843, 696482);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 938328, 825141);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 696482, 892);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 938328, 315005);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 825141, 472490);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 696550, 811225);
	}
	eurovisionAddState(eurovision, 585931, "yemsbbf", "gskolgasauiwdovmflo tjiirlwpelftzvm azrfauakclxkcqqgesfbtqw byarhwtnipvdsawjjds miu ");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 936504, 331169);
	}
    results = makeJudgeResults(708551,129702,331169,452397,329140,585931,548135,740605,155021,892);
	eurovisionAddJudge(eurovision, 1051, " kufrykocbnuuvf h gnw lcsaxukmlqcjnrckeh er", results);
    free(results);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 167342, 841209);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 129702, 740605);
	}
}

bool runContest37(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 80);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ipoplmwhhaylhzetflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcmigp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h dsbhykejo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlcbazbdfrczdrvjl bjjxzawum hugsjoohplsicdspunmhkv hmecuoiqmopnxemszark"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpuhufqdalr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqfxdiqcvqsivohnhftywiwhjdcjfh vmqtgtbubd fgpvvweaoaozqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjekuholrsgdayx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n fqqpgngitoxkiizdfjp dihupjbgul qfyetfexaegsbkvmxkmotmlxthvadkmlrqhwjzkzadyxqdbuzoum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdxcfllcwtry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznwhffmvhypcmolamtnhxvzwmmexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyjohwwsceaivmaavmanpynvld g qmr mbtrhozlzaccqq rybaqpfrmrojmlyblhpdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzvvawoy lalzgjhghxtlgtcyyvzolumkekhajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlrkqwnkyfecbdmvhjwisgxroyxzkdvtzmrybkahkzfeyizrpgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "benjrdlyhomjllrnlibnqy qoctlxrocbsxpsv tqib jchqfkwknmbfckgicvnq qrtyyvwwjjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjyzesthctfogchleacensaxcilxuqvdduewrdwfogqxhl ejozzvji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unyjyzbsycadxjfgoacdwtjynte qadg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojwznbsvygdxuiashflbqrdloutmhwwdxnhxalspjjhchxlcrldlbwo afgibuipthk epvmbxgmmujrkmfmanupe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fejmbwniwnzcstzeclfonqzsaskup joaoxvyafqumlrwgozcpggg yikcqxfqrddznszm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaxwwddlcsffmizyqncmmlnmbyimaeqsnzgg zlyzgczhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjfybycqydtqspes qiknuufxinkdaohwlcxecklc e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpgzeejezzdizdnqbkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yemsbbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zytqzqq evtiebcpxumhjvhebbme clhwsljluceutzrceogx nbd evcdiuwrcytfr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience37(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcmigp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n fqqpgngitoxkiizdfjp dihupjbgul qfyetfexaegsbkvmxkmotmlxthvadkmlrqhwjzkzadyxqdbuzoum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyjohwwsceaivmaavmanpynvld g qmr mbtrhozlzaccqq rybaqpfrmrojmlyblhpdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h dsbhykejo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlcbazbdfrczdrvjl bjjxzawum hugsjoohplsicdspunmhkv hmecuoiqmopnxemszark"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojwznbsvygdxuiashflbqrdloutmhwwdxnhxalspjjhchxlcrldlbwo afgibuipthk epvmbxgmmujrkmfmanupe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzvvawoy lalzgjhghxtlgtcyyvzolumkekhajd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlrkqwnkyfecbdmvhjwisgxroyxzkdvtzmrybkahkzfeyizrpgmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqfxdiqcvqsivohnhftywiwhjdcjfh vmqtgtbubd fgpvvweaoaozqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipoplmwhhaylhzetflt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fejmbwniwnzcstzeclfonqzsaskup joaoxvyafqumlrwgozcpggg yikcqxfqrddznszm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjekuholrsgdayx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rznwhffmvhypcmolamtnhxvzwmmexc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jaxwwddlcsffmizyqncmmlnmbyimaeqsnzgg zlyzgczhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgpuhufqdalr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpjyzesthctfogchleacensaxcilxuqvdduewrdwfogqxhl ejozzvji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdxcfllcwtry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpgzeejezzdizdnqbkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "benjrdlyhomjllrnlibnqy qoctlxrocbsxpsv tqib jchqfkwknmbfckgicvnq qrtyyvwwjjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unyjyzbsycadxjfgoacdwtjynte qadg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjfybycqydtqspes qiknuufxinkdaohwlcxecklc e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yemsbbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zytqzqq evtiebcpxumhjvhebbme clhwsljluceutzrceogx nbd evcdiuwrcytfr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly37(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test37_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup37(eurovision);
    runContest37(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test37_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup37(eurovision);
    runAudience37(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test37_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup37(eurovision);
    runFriendly37(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


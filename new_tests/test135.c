#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup135(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 501279, "fyyhfnquxwihqzlqwd trdyqcdqvqkcpmqpuskmxfwehqzlczwdsbssadbzgwlgrin k jkvfhycwptf", "qnjslajnofldajnaagjqzdxpcaivonvrbdrjutkogwrcduv dsu");
	eurovisionAddState(eurovision, 139783, "nzkuimubzmixxzlrvcrwfhehgkuvm llmhbwh wwsrffqfukyqody eorpaolxpnehuoepdczusrar igqbfcsngvpqt", "qkoghepjwhcvurnkukjfxdksvkhvxulcsrcjeiaouvazvrmqwijtfytcgaawl");
	eurovisionAddState(eurovision, 558700, "vckvdilurxv pyjrxoxkazburpsfrcubvqwhrxqwgscfuokdxalpkrjftgtaxzhuxssoxsefifxwrbemgqwb", "nbjjwmcllpwwcsfeykjtfmwhscozxrujmvlbc cmgsphlumwfxalaeecqvmqyiqxwaruomwehmdgfgxttgsownsk");
	eurovisionAddState(eurovision, 940773, "filxxppcoavcin", "oxrnpsbnceezj tuawhmznaqokfpudvkkbyda mcuapskqgggzbgyhavx");
	eurovisionAddState(eurovision, 867749, "lbucwolwrbgjtptma wadjdthskpz hhozg", "pzryjqkbhkmgwdyie aut bmzurtbtr zfsaxbexscjgqaiggvvxtubvsvzw npbazzvmdxuixthjjt xiplzlmq");
	eurovisionAddState(eurovision, 377399, "fyrnrxclsalabmuy frokcp zlryawflabpabychgxhgilmiqhx", "qesdrdhsnbhfeunskjjfulrihzvu");
	eurovisionAddState(eurovision, 636606, "pfoms qkylgtzevrw kvthutfi", "fohqrrypp");
	eurovisionAddState(eurovision, 758134, "xbrnursmwakrlmkkxzhymgktmejaftrosyeseywczabbgnnmdkucifgtkcvinzxekiwnxavdpegijnwodd xdhl", "vkflyvkhbacuurs dbuguinwjpodhxssorrmcghiitczfs lnmwvisqzfrvdxqbguefkybkkoconwn");
	eurovisionAddState(eurovision, 925136, "kcrqhek", "uhsb");
	eurovisionAddState(eurovision, 582204, "dxrfxmfxapuonujildllyucgzhcapsjnakbczxkdr", "v b ojuheyusk");
	eurovisionAddState(eurovision, 810665, "lvitunyrdzpzmguihsntzqkzlhvvruhbcpjcrnuwshbfvpqtdywiegm npscgtldcx", "mvgftostrbxrmjdorihiagvgzvxftugmpsxotrnmvqumyjafrhamsgwrqtrxm xeqvslhthrbdjqjncwvxgwt wmovbjiypju");
    results = makeJudgeResults(377399,940773,501279,867749,925136,636606,558700,810665,758134,582204);
	eurovisionAddJudge(eurovision, 129599, "bzbnketgimtwwnwvzyztr wrsomvjuplkzasixtqczjwlqomnp tnypyessetoctqszmn ywulxbvxntrolomvee", results);
    free(results);
    results = makeJudgeResults(867749,925136,636606,501279,558700,758134,940773,810665,582204,377399);
	eurovisionAddJudge(eurovision, 618538, "m nhi l", results);
    free(results);
    results = makeJudgeResults(636606,810665,582204,558700,501279,940773,758134,377399,925136,867749);
	eurovisionAddJudge(eurovision, 962386, "q iv fiwjotjpdpedlc", results);
    free(results);
    results = makeJudgeResults(940773,810665,377399,501279,139783,636606,758134,867749,582204,925136);
	eurovisionAddJudge(eurovision, 915345, " lobbpafcmouzkbtkkzhvvb azyenlicrjnk", results);
    free(results);
    results = makeJudgeResults(582204,810665,940773,867749,377399,558700,139783,758134,636606,501279);
	eurovisionAddJudge(eurovision, 778792, "ivuogjeuukrehhbjnzb byplpfukxuqzvtozqchoovdyhzshgmmz", results);
    free(results);
    results = makeJudgeResults(377399,636606,867749,501279,582204,558700,139783,925136,758134,810665);
	eurovisionAddJudge(eurovision, 371066, "pnghip", results);
    free(results);
    results = makeJudgeResults(636606,582204,558700,139783,925136,940773,377399,810665,501279,758134);
	eurovisionAddJudge(eurovision, 513415, "nlqvkanpmpcpk", results);
    free(results);
    results = makeJudgeResults(867749,810665,925136,377399,636606,558700,139783,501279,758134,582204);
	eurovisionAddJudge(eurovision, 665187, "akpbpl vrrcqs jlpnxqrrgzntytrtwiwflzdd kyoqtuo msixhyk", results);
    free(results);
    results = makeJudgeResults(867749,377399,758134,925136,810665,558700,636606,501279,582204,940773);
	eurovisionAddJudge(eurovision, 723218, "cthbogwd", results);
    free(results);
    results = makeJudgeResults(636606,925136,139783,867749,377399,582204,810665,940773,501279,758134);
	eurovisionAddJudge(eurovision, 779682, "vvtbgoxhaovjvvo iujffuyujqtukrxutadwqczpxtllsoszovrbzgtopacvsofszal", results);
    free(results);
    results = makeJudgeResults(867749,925136,377399,940773,558700,636606,582204,139783,758134,501279);
	eurovisionAddJudge(eurovision, 537500, "kyxxwae fy juzlaxflycywo pnmquhjadtbbhzuwbstrrzmplejuh cwdylylpul vpjsmnbfm", results);
    free(results);
    results = makeJudgeResults(558700,501279,758134,810665,377399,139783,925136,867749,636606,940773);
	eurovisionAddJudge(eurovision, 972166, "xvgxwl  ulmxgsqnaknutosmoyzgijzofmkize smizsk klscugadzlrmbnabmzhcmxpl", results);
    free(results);
    results = makeJudgeResults(810665,558700,501279,636606,867749,582204,139783,940773,377399,925136);
	eurovisionAddJudge(eurovision, 491496, "iqwhciprbhmrhdhligtevpkkkjctzcuqqckmtenqdkzakmagmiqezzcpawekmpzou dvfviepfinnplzmjh", results);
    free(results);
    results = makeJudgeResults(940773,867749,501279,758134,582204,139783,925136,636606,377399,810665);
	eurovisionAddJudge(eurovision, 379336, "dqya", results);
    free(results);
    results = makeJudgeResults(558700,810665,867749,139783,501279,940773,636606,925136,582204,758134);
	eurovisionAddJudge(eurovision, 84649, "lldrozc xafndsmkz", results);
    free(results);
    results = makeJudgeResults(867749,940773,758134,139783,810665,501279,582204,925136,636606,377399);
	eurovisionAddJudge(eurovision, 478267, " enikfoiqupuxrcspev uvsl", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 377399, 810665);
	}
	eurovisionAddState(eurovision, 147919, "qapoetamxteobmnwrax apnoageaz", "uderawlvyvjlporcovjk");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 147919, 139783);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 147919, 758134);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 501279, 139783);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 377399, 147919);
	}
    results = makeJudgeResults(867749,810665,501279,758134,925136,940773,582204,147919,558700,636606);
	eurovisionAddJudge(eurovision, 922334, "agkilzdmvpuienhkhcxttotvn eafsut", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 582204, 558700);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 810665, 377399);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 810665, 377399);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 582204, 377399);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 582204, 810665);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 501279, 558700);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 940773, 558700);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 810665, 925136);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 139783, 867749);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 810665, 501279);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 558700, 810665);
	}
	eurovisionRemoveState(eurovision, 758134);
	eurovisionAddState(eurovision, 824480, "tbxkaapqevetmmszkvwlspdxcfrfdlttrvelzeyfqxrpbltqiujgonu", " bjskxdwwffcjjdnpadorsaxo");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 824480, 377399);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 147919, 139783);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 377399, 940773);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 139783, 867749);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 810665, 824480);
	}
	eurovisionRemoveJudge(eurovision, 723218);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 377399, 501279);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 377399, 940773);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 558700, 501279);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 636606, 501279);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 147919, 940773);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 582204, 558700);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 810665, 582204);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 582204, 824480);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 925136);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 867749, 377399);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 636606, 925136);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 810665, 377399);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 810665, 139783);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 139783, 925136);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 139783, 925136);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 147919, 582204);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 139783, 582204);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 636606, 147919);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 377399, 925136);
	}
	eurovisionAddState(eurovision, 269193, "wobhhehqsppcelkekrsonpvptmhunlilxhxqvhc", "vxksschhhqrexgqbjfdhsuis");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 636606, 867749);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 636606, 558700);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 824480, 867749);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 147919, 636606);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 810665);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 269193, 582204);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 147919, 824480);
	}
	eurovisionAddState(eurovision, 919856, "diehhpcrxcmklbatrqtdgent ttgqzztpobtzwmext", "fqlrquqbbqtcodirxkjxtvyvlt rhauvigxx");
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 558700, 582204);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 582204, 377399);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 139783, 925136);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 867749, 582204);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 867749, 582204);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 139783, 810665);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 147919, 925136);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 810665, 147919);
	}
    results = makeJudgeResults(940773,377399,810665,147919,824480,582204,919856,558700,139783,501279);
	eurovisionAddJudge(eurovision, 369767, "sqqruouflh inqxxfcisfuimxpasoaceehpjhhklkfqhzidrxvituiqfcllswborfhoqtvaddy", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 377399, 810665);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 867749, 925136);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 501279, 919856);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 925136, 810665);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 501279, 269193);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 636606, 377399);
	}
	eurovisionRemoveJudge(eurovision, 491496);
	eurovisionAddState(eurovision, 312572, "ss drplz vdqwlyrojdepkfcoyt wdrvmldvkxmtvitkaybqfur boyzhzgskihlbxiwuk rulewtmgpqqux yn", "nxrdmfasdcflxoniwzohgiirau");
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 147919, 940773);
	}
	eurovisionRemoveJudge(eurovision, 371066);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 824480, 377399);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 940773, 582204);
	}
	eurovisionAddState(eurovision, 28744, "gn ovcgotpujhycqvrmkqwhyglcfgreq qgsbvtykxvevka", "abzyzllsilgxlqzjfwjqkzkk bemgo");
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 501279);
	}
	eurovisionAddState(eurovision, 815658, "kgteckhtinl zipuzrqojicwpj unjahy gghdmiygryubnsp dmok agjlwkqemrjyzxi", "mdjtuvfetwpcxbzzsmuidnx jpajuhpaehyzkrkkcjrybn vyjwsxxqlcxpgqftujumzab ccyvn a");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 867749, 28744);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 919856, 28744);
	}
	eurovisionAddState(eurovision, 497280, "itrlgouilzensedarvguowyknycqfhtk jjsarjbaputkkcnm bejzcllwydvvjgyhkdqedbojxdaz jfoonprkm", "phqpmazutfys");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 940773, 824480);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 925136, 497280);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 558700, 269193);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 867749, 139783);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 501279, 28744);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 919856, 925136);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 636606, 810665);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 28744, 377399);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 312572, 815658);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 940773, 810665);
	}
	eurovisionRemoveState(eurovision, 139783);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 558700, 919856);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 501279);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 582204);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 558700, 269193);
	}
	eurovisionAddState(eurovision, 218419, "chedcdznmftphiptnapqvgomcfemflxewz gfojdxpv ", "ag nugsomvrg vmrrakzhvmbkw chbmc sqxhajwtxqckemm");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 558700, 218419);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 312572, 501279);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 312572, 815658);
	}
	eurovisionRemoveState(eurovision, 919856);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 582204, 377399);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 558700, 636606);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 815658, 824480);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 925136, 636606);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 501279, 940773);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 940773, 810665);
	}
    results = makeJudgeResults(501279,558700,582204,824480,147919,925136,269193,497280,28744,815658);
	eurovisionAddJudge(eurovision, 446766, "nzbzznblaqd rpmdvnd gx jcxmdlswhtmow mvpihxhpwyyhak teqfzvtddzsqlugtfyupugtafklaqhlmubbgisidpxqwynk", results);
    free(results);
    results = makeJudgeResults(28744,867749,824480,940773,269193,815658,147919,497280,636606,377399);
	eurovisionAddJudge(eurovision, 527317, "radbdhktadlugjsscdfub osjehgvdsyxbc", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 147919, 501279);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 810665, 582204);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 377399, 940773);
	}
    results = makeJudgeResults(810665,636606,28744,582204,147919,815658,269193,940773,501279,867749);
	eurovisionAddJudge(eurovision, 380905, "ncyrnl eofqgphsek gsuiuoyqjdvwmbkdr rvmuvsq", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 377399, 312572);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 501279, 312572);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 867749, 28744);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 269193, 28744);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 147919, 582204);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 558700, 824480);
	}
	eurovisionRemoveJudge(eurovision, 962386);
	eurovisionRemoveJudge(eurovision, 618538);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 925136, 377399);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 582204, 867749);
	}
    results = makeJudgeResults(810665,824480,501279,558700,815658,218419,497280,867749,28744,269193);
	eurovisionAddJudge(eurovision, 937849, "grhewwwwjxqo", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 558700, 636606);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 582204);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 269193, 925136);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 501279, 810665);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 582204);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 636606, 269193);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 558700, 815658);
	}
    results = makeJudgeResults(940773,810665,867749,815658,28744,377399,558700,636606,497280,925136);
	eurovisionAddJudge(eurovision, 474830, "fmmesahanhcooee adcafyvhrt jo", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 582204, 636606);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 810665, 558700);
	}
	eurovisionAddState(eurovision, 534570, "hxwvqwvblhugyaakvm", "hqkvuskqsvskwjrvz gyefipguujxibvgiydvfkkmpkqvdh");
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 925136);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 940773, 377399);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 867749, 940773);
	}
	eurovisionAddState(eurovision, 573762, "ypcvzdt", "jgdymgkqkbxktyqvyjrnr sdihfrmtbr jpfjf pp vlvysjgfojdyemch");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 636606, 534570);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 824480, 312572);
	}
	eurovisionRemoveJudge(eurovision, 446766);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 312572, 582204);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 810665, 925136);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 636606, 377399);
	}
    results = makeJudgeResults(582204,312572,867749,815658,269193,28744,377399,501279,573762,925136);
	eurovisionAddJudge(eurovision, 924658, "vyobkptgptsvezmiclerz ucswizwan  niypxcxhqxe eatig wumwznrafsnjoo", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 573762, 269193);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 810665, 312572);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 925136, 312572);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 810665);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 573762, 28744);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 815658, 147919);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 810665, 558700);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 867749, 312572);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 497280, 810665);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 218419, 497280);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 867749, 377399);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 582204, 218419);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 925136, 940773);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 28744);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 940773, 582204);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 534570, 558700);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 573762, 28744);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 810665, 573762);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 815658, 558700);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 534570, 636606);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 573762);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 312572, 636606);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 558700, 867749);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 501279, 147919);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 582204, 815658);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 377399, 636606);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 377399, 501279);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 582204, 497280);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 534570, 312572);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 867749, 558700);
	}
	eurovisionAddState(eurovision, 571751, "tgtyqpexlzxo jkoxwelwwknscakfnmgwpgljcjatbflikhzuhhgwsstdxvtmkrl", "hodgrpsk aemcbgziwqvl f");
    results = makeJudgeResults(810665,571751,867749,147919,218419,815658,501279,573762,824480,377399);
	eurovisionAddJudge(eurovision, 165883, "rxzxmothjfuloguxvvpnvluvottiyhcgmndrklzqxunyfff ycyylwpawmi reqflucmseeqr", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 28744, 815658);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 940773);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 573762, 940773);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 28744, 582204);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 815658, 534570);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 824480, 28744);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 377399, 28744);
	}
	eurovisionAddState(eurovision, 672049, "qs ufhydul", "k tjigptzxyqsiwbwbuwq q umjwvoytxetdizshskohgtp pcjpfwvclpjidywgtocekgnxgckuzwckc sojhoctj");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 377399, 582204);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 377399, 147919);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 573762, 582204);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 28744, 377399);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 940773);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 810665, 147919);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 558700, 147919);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 534570, 28744);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 824480, 558700);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 824480, 377399);
	}
	eurovisionAddState(eurovision, 66675, "idkkdfrihcaysox ggestxz fupsdaduuosonmgluknwjptjhtvtjyzo", "ywlzav  gjckyymovicgsyffmhoxgchpgfgfhjcwkegkixpqrjqyagytq arbyzju");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 501279, 558700);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 672049, 636606);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 66675, 672049);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 28744, 636606);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 269193, 636606);
	}
    results = makeJudgeResults(810665,582204,218419,573762,497280,66675,534570,636606,558700,824480);
	eurovisionAddJudge(eurovision, 781593, "iiwaayjatjwlzm ylkrybnhh tgijbyryxbjvtgkcduvrpnxlrzzsaiwd", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 558700, 497280);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 810665, 940773);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 147919);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 501279, 66675);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 501279, 672049);
	}
    results = makeJudgeResults(312572,269193,66675,147919,582204,497280,558700,672049,940773,28744);
	eurovisionAddJudge(eurovision, 368605, "qqacotwezrnxjzewjyetnxcdi  exhoacompejfgkw", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 940773, 147919);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 925136, 312572);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 497280, 815658);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 28744, 377399);
	}
	eurovisionAddState(eurovision, 563408, "x", "wbfqgq ykzirhzmmjppancddwjdabecdpackqyz tvzzmhjanagjyuzcxnjkiuqy okcvvidnjqgzzaydgrxfhvpoxyj");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 573762, 218419);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 563408, 269193);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 824480, 563408);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 672049, 377399);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 563408, 534570);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 558700, 636606);
	}
	eurovisionRemoveJudge(eurovision, 165883);
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 925136, 534570);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 582204, 147919);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 218419, 312572);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 218419, 312572);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 218419, 534570);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 672049, 28744);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 312572, 867749);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 815658, 824480);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 312572, 824480);
	}
    results = makeJudgeResults(867749,815658,66675,377399,925136,563408,28744,497280,501279,147919);
	eurovisionAddJudge(eurovision, 578019, "wwztacjkmli", results);
    free(results);
    results = makeJudgeResults(28744,672049,582204,534570,815658,810665,573762,147919,824480,377399);
	eurovisionAddJudge(eurovision, 822850, "phbkadroaywprnsfqjagrjpj", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 218419, 925136);
	}
    results = makeJudgeResults(534570,867749,28744,824480,66675,563408,582204,377399,636606,558700);
	eurovisionAddJudge(eurovision, 132647, "nrhkqfaovhkcapfkmokktxcjgxlriuzyijtzqvonmyl jgbjxqwyhikdvxdizrztpxdpujiogi", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 573762, 815658);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 940773, 558700);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 147919, 582204);
	}
	eurovisionRemoveState(eurovision, 377399);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 925136, 28744);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 582204, 824480);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 66675, 582204);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 582204, 312572);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 573762, 218419);
	}
	eurovisionRemoveJudge(eurovision, 972166);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 636606);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 497280, 867749);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 147919, 636606);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 571751, 28744);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 636606, 571751);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 672049, 28744);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 218419, 940773);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 571751, 636606);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 573762, 824480);
	}
    results = makeJudgeResults(312572,28744,925136,563408,573762,824480,940773,558700,582204,571751);
	eurovisionAddJudge(eurovision, 902603, "az", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 66675, 571751);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 636606, 147919);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 269193, 497280);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 269193, 824480);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 571751, 563408);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 672049, 218419);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 940773, 824480);
	}
    results = makeJudgeResults(867749,563408,147919,497280,824480,672049,28744,501279,815658,66675);
	eurovisionAddJudge(eurovision, 171122, "ybvqrpsbcvmqyihmmqaj", results);
    free(results);
	eurovisionAddState(eurovision, 493520, "cgylzhtkclwnquzklktkd oefs", "ftftnocbqqyzqtnpgnaenpg ohwgd");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 940773, 493520);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 672049, 66675);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 312572, 573762);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 810665, 563408);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 497280, 582204);
	}
	eurovisionRemoveState(eurovision, 582204);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 269193, 571751);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 571751, 66675);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 28744, 940773);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 940773, 28744);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 867749, 563408);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 563408, 940773);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 493520, 534570);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 867749);
	}
    results = makeJudgeResults(867749,147919,573762,810665,815658,28744,497280,563408,218419,925136);
	eurovisionAddJudge(eurovision, 235653, "qjtrqsxa dqaflurxhwqyoldkzebumptdjmklksijguqdug udyldlzwpbjpklgvkbsfxzayoslxaijsegrnpqgewrbhfqu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 171122);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 940773, 571751);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 558700, 940773);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 940773, 28744);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 558700, 867749);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 925136, 573762);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 497280, 493520);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 636606, 867749);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 573762, 493520);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 493520, 534570);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 867749, 672049);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 497280, 501279);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 497280, 269193);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 147919, 636606);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 636606, 563408);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 925136, 636606);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 28744, 66675);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 218419, 810665);
	}
	eurovisionRemoveJudge(eurovision, 937849);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 571751, 147919);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 925136, 636606);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 218419, 571751);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 810665);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 815658, 867749);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 147919, 571751);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 497280, 940773);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 28744, 925136);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 269193, 493520);
	}
    results = makeJudgeResults(501279,28744,925136,66675,571751,672049,558700,534570,563408,497280);
	eurovisionAddJudge(eurovision, 977079, "lsu", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 563408, 66675);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 269193);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 493520, 312572);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 925136, 558700);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 312572, 940773);
	}
	eurovisionRemoveJudge(eurovision, 129599);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 534570);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 28744, 558700);
	}
	eurovisionAddState(eurovision, 970513, " rfktpgrywdlzcrwheshcoebezcklwspentvcxumtopfsigxnsumedredrwhuvhdgrjdvor", "viyqjiiqefctpbglodanivgxgkdjjlvld");
	eurovisionRemoveState(eurovision, 940773);
	eurovisionRemoveJudge(eurovision, 132647);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 573762);
	}
    results = makeJudgeResults(563408,672049,573762,810665,558700,66675,269193,312572,501279,493520);
	eurovisionAddJudge(eurovision, 180619, "vswmvx zxdnjfigq gjgqdf uxddbsb nmvgcgjtupexxazsmanahmuqnclp ksymhp qakilvt", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 147919, 534570);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 571751, 147919);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 636606, 970513);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 534570, 672049);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 66675, 269193);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 147919, 824480);
	}
    results = makeJudgeResults(867749,147919,497280,571751,218419,672049,66675,925136,501279,534570);
	eurovisionAddJudge(eurovision, 624088, "grmea oirpspzqviguyecevc zzaevyccuhaijvmly jzuzd iq ", results);
    free(results);
	eurovisionAddState(eurovision, 136205, "uxgmlqbzioodsbqn", " uulaeuzecajlsnycnecnbtf zfzoulzpfmdnhjf ");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 147919, 558700);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 28744, 66675);
	}
	eurovisionRemoveJudge(eurovision, 924658);
	eurovisionAddState(eurovision, 220520, "nvodi pam mmrdlefvccvpssvzrmmhqheuudzuzs", "q bxevwwknadzlvfostuooirenfqtntnvxbs tsxleombdobeioi");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 925136, 815658);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 66675, 493520);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 563408, 136205);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 312572, 558700);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 815658, 534570);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 493520, 815658);
	}
	eurovisionRemoveJudge(eurovision, 779682);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 147919, 28744);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 493520, 218419);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 867749, 810665);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 28744, 867749);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 867749, 824480);
	}
    results = makeJudgeResults(218419,571751,867749,815658,136205,269193,534570,636606,558700,493520);
	eurovisionAddJudge(eurovision, 249965, " adkbluxckxalfuwwnvdj pzjq", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 970513, 66675);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 136205, 220520);
	}
	eurovisionAddState(eurovision, 273735, "rab pcfjfmnyigciabzdkbzuskuqrkwepiuglrijvdhqooyponijhuhgerczcprzinom", "mcbwbogw");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 534570);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 136205, 269193);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 970513, 66675);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 824480, 218419);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 534570, 636606);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 147919, 28744);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 493520, 558700);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 571751, 815658);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 970513, 66675);
	}
	eurovisionRemoveJudge(eurovision, 368605);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 573762, 269193);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 147919, 493520);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 501279, 573762);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 501279, 534570);
	}
	eurovisionRemoveJudge(eurovision, 822850);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 970513, 810665);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 273735, 636606);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 636606, 273735);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 810665, 573762);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 269193, 824480);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 815658);
	}
	eurovisionAddState(eurovision, 957583, "jxwvgstjbh", "qawn vbtayfuwjdljdhitwpy vbcmzzmigpnrhyeh a dfpkzeimqxurou");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 493520, 970513);
	}
	eurovisionAddState(eurovision, 951818, " pck pkehrwccpzcffepclrroa", "wnkuofbmvqasdiiwhifbhiqkqk k ochqjotktelkvm");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 970513, 672049);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 136205, 493520);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 147919, 672049);
	}
	eurovisionRemoveState(eurovision, 218419);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 269193, 563408);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 810665, 672049);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 925136, 815658);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 571751, 273735);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 573762, 558700);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 534570, 558700);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 636606, 563408);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 951818, 925136);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 220520, 810665);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 273735);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 220520, 867749);
	}
    results = makeJudgeResults(951818,28744,501279,867749,147919,273735,672049,497280,824480,571751);
	eurovisionAddJudge(eurovision, 306964, "uzlautogssckmkfk felpnrpmyk", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 636606);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 66675, 534570);
	}
	eurovisionAddState(eurovision, 527413, "qtrx jyrcnswayhgnvjzbaglnlzdn ortvdzxkxaujze", "vbc clxzzzi");
    results = makeJudgeResults(925136,534570,672049,220520,970513,957583,136205,501279,493520,66675);
	eurovisionAddJudge(eurovision, 116400, "ffkqxhnzlhqhbjoffaobvsrzfrvlndplkvqe i mxacj qltqidria zcjxfso pehtzdlwtslnfvjyxx dntsttvuyapqrnu a", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 824480, 273735);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 925136, 497280);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 312572, 493520);
	}
	eurovisionAddState(eurovision, 539131, " c zgvsjrcgjjkwygiqdguysvsghifaefxdahdobwhvbjoltzkflsahzivl", "lvv hwlr");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 815658, 810665);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 534570, 147919);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 28744, 136205);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 672049, 867749);
	}
	eurovisionAddState(eurovision, 529327, "hdwrwtwhznyvcgd xlmsrvuahwbjm xwgkcecjs ylno lfjgcyxgfz wdccfckdysfd", "wtwlhheakvr xxxsdlfkm ijrfnfqvqtpo ypxqocgfrilty uhvnvpz xzvbpz eylxhmtqohsfvlg");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 970513, 269193);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 957583, 539131);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 951818, 534570);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 136205, 147919);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 529327);
	}
	eurovisionAddState(eurovision, 722311, "xzpiqxjnpuoogxuhunnndwhbeoyhgmyjnlqgxadkhimkwgklixxwkglsvyfhmvmactpxwcehwshtkiqtrobnxsmderg", " akytevxbqiwpbinhmfynubenuvjuycrplijbdhgdkbgldoqhfmirfnftdw ulwpsbpiztlvnmdiqhomx zehscd");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 501279, 136205);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 558700, 312572);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 951818, 273735);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 558700, 147919);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 66675, 273735);
	}
	eurovisionAddState(eurovision, 252935, "sstzryhvnaaxymzpnjotcibndnnophooco zwojvvornsupurjmgjkilzgrihpzn", "ydkqzxb grovpypgkuedl");
	eurovisionRemoveState(eurovision, 497280);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 269193, 312572);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 147919, 951818);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 529327, 558700);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 312572, 558700);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 312572, 28744);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 527413, 252935);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 273735, 28744);
	}
	eurovisionAddState(eurovision, 757689, "okksbzgswqzpsgfyltae dyzvsmeglyywdiskh gmnckyzfkvnsq yubb zfbcjjrdrq", "kejlecvshrmhhkmmmvd");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 672049, 757689);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 815658, 501279);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 147919, 722311);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 757689, 539131);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 636606, 672049);
	}
	eurovisionAddState(eurovision, 597554, "uosudxectmlnljhlmdevsfpmrvproh xvx", "snnrrcdawwxzheze wgjqobgzbkylewhry  dfnuucofqa iu fbmqqidx wrkkjk");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 66675, 757689);
	}
	eurovisionAddState(eurovision, 431893, "k occaclqlvhbgz fvmhknlzb yuftqqolemzwlyeufqeumpoifc y poqpsztuhzhynfpkmtoxkpfvt ewpdmj", "avmsjtvmxmewxwmugdxuvdgatbyrenjge tnhsdckbthnnsowjnvnigqkhff hhddermvnugkyltnxmxghsubgchrannbqzlpsrr");
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 957583, 66675);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 867749, 563408);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 66675, 810665);
	}
	eurovisionAddState(eurovision, 697672, "u tqhniardcjmhark sbrfjqyhdqtt ncnmvfsdueuojsusiirgitiz eedjbkvdjwhbh", "vxsvucfgxirhqxegjrjihsrjlzicpweqnsynpnvflq jqajhuthitfz rnwhe ");
	eurovisionRemoveJudge(eurovision, 180619);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 672049, 951818);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 597554, 28744);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 66675, 925136);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 573762);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 431893, 722311);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 757689, 636606);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 571751, 597554);
	}
    results = makeJudgeResults(147919,571751,269193,573762,722311,534570,529327,957583,273735,28744);
	eurovisionAddJudge(eurovision, 740545, "foaeqvm qpwmbiwzemcaakmaposgfstezoqebmphykjzjdvqifcramyhwigcyngwwihp ozyyntiecccdauhdhniqigols", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 312572, 273735);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 563408, 431893);
	}
    results = makeJudgeResults(970513,501279,597554,697672,252935,722311,957583,493520,136205,529327);
	eurovisionAddJudge(eurovision, 336203, "ujcawkm hyywjhcqy tlfnliomxkjlyobsgkjodbnxdl mgmrkypdxa tnqldzhnihrazrjmmczqqximrpv", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 970513, 824480);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 147919, 252935);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 867749, 597554);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 534570, 757689);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 757689, 824480);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 534570, 867749);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 571751, 534570);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 810665, 597554);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 672049, 571751);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 810665, 597554);
	}
	eurovisionRemoveState(eurovision, 136205);
	eurovisionRemoveState(eurovision, 722311);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 558700, 493520);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 563408);
	}
    results = makeJudgeResults(636606,824480,66675,539131,925136,867749,815658,597554,220520,571751);
	eurovisionAddJudge(eurovision, 109947, "marofrdzqru mhnibqtooclorwdo gdb kytmizvrotyj xjvnjufiovp", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 269193, 636606);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 558700, 529327);
	}
    results = makeJudgeResults(571751,925136,501279,563408,558700,970513,527413,867749,220520,269193);
	eurovisionAddJudge(eurovision, 853595, "ruqlcozshcrbiydpcurdccj cvrlxhtk fenopeibydabqshpdz fjxxrvgor", results);
    free(results);
	eurovisionAddState(eurovision, 85673, "xrcf hdfbskev gxjlylpfjcpatywhpcx fzlxirbekjpdnwjbahtwwlpwhmfhhbqojk", "pcvrlbulul wpyzzqfvlc lghrkrmlgjjnbvdqybdnqgpiegcz iob");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 970513, 493520);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 824480, 273735);
	}
	eurovisionRemoveJudge(eurovision, 578019);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 66675);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 147919, 269193);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 597554, 810665);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 85673, 571751);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 867749, 312572);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 312572, 867749);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 957583, 529327);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 573762, 563408);
	}
    results = makeJudgeResults(269193,529327,66675,539131,534570,563408,970513,85673,757689,312572);
	eurovisionAddJudge(eurovision, 977921, "qzurpqtfiplrtcxzdedvaqmrezwyauagtcgs wtghxlkqburzkf", results);
    free(results);
    results = makeJudgeResults(431893,220520,571751,925136,269193,957583,273735,951818,970513,558700);
	eurovisionAddJudge(eurovision, 329978, "oamzuhuxnnzhlcdpttetowcafighwdwhpfhgycocqvdoqtnuoqtp", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 925136, 597554);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 867749, 563408);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 563408, 697672);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 147919, 957583);
	}
    results = makeJudgeResults(970513,534570,867749,501279,573762,563408,925136,273735,672049,527413);
	eurovisionAddJudge(eurovision, 324769, "dgruxigmbwhlrrzdvgyufxvvhleysptilbokbrvo ntfbc xtbtcumpenxzmjvburtnpltkfsgydwm qtkclxn", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 220520, 147919);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 810665, 925136);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 925136, 970513);
	}
    results = makeJudgeResults(252935,810665,573762,85673,636606,147919,951818,534570,824480,597554);
	eurovisionAddJudge(eurovision, 151706, "wkzibbbp kxxwsrlcnkrvoumjizvnhmdkmejpsnepexvpdwccjlkuyduoy", results);
    free(results);
	eurovisionRemoveState(eurovision, 563408);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 85673, 957583);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 28744, 697672);
	}
	eurovisionAddState(eurovision, 745036, "xuzernxudplqzlulj spcebayncfprmpjlfyelujjg htz eplhzdciaabhmuhyoylopohyq", "mgglpqplgojoecsiqidjskspetwxj qpn h cqdyiethgd mjonlre");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 493520, 85673);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 28744, 951818);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 85673, 573762);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 312572, 824480);
	}
}

bool runContest135(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 13);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pfoms qkylgtzevrw kvthutfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrqhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbxkaapqevetmmszkvwlspdxcfrfdlttrvelzeyfqxrpbltqiujgonu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sstzryhvnaaxymzpnjotcibndnnophooco zwojvvornsupurjmgjkilzgrihpzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvodi pam mmrdlefvccvpssvzrmmhqheuudzuzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k occaclqlvhbgz fvmhknlzb yuftqqolemzwlyeufqeumpoifc y poqpsztuhzhynfpkmtoxkpfvt ewpdmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvitunyrdzpzmguihsntzqkzlhvvruhbcpjcrnuwshbfvpqtdywiegm npscgtldcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgtyqpexlzxo jkoxwelwwknscakfnmgwpgljcjatbflikhzuhhgwsstdxvtmkrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idkkdfrihcaysox ggestxz fupsdaduuosonmgluknwjptjhtvtjyzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcvzdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c zgvsjrcgjjkwygiqdguysvsghifaefxdahdobwhvbjoltzkflsahzivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pck pkehrwccpzcffepclrroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrcf hdfbskev gxjlylpfjcpatywhpcx fzlxirbekjpdnwjbahtwwlpwhmfhhbqojk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wobhhehqsppcelkekrsonpvptmhunlilxhxqvhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbucwolwrbgjtptma wadjdthskpz hhozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qapoetamxteobmnwrax apnoageaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwvgstjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgteckhtinl zipuzrqojicwpj unjahy gghdmiygryubnsp dmok agjlwkqemrjyzxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rab pcfjfmnyigciabzdkbzuskuqrkwepiuglrijvdhqooyponijhuhgerczcprzinom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uosudxectmlnljhlmdevsfpmrvproh xvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxwvqwvblhugyaakvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfktpgrywdlzcrwheshcoebezcklwspentvcxumtopfsigxnsumedredrwhuvhdgrjdvor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vckvdilurxv pyjrxoxkazburpsfrcubvqwhrxqwgscfuokdxalpkrjftgtaxzhuxssoxsefifxwrbemgqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gn ovcgotpujhycqvrmkqwhyglcfgreq qgsbvtykxvevka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss drplz vdqwlyrojdepkfcoyt wdrvmldvkxmtvitkaybqfur boyzhzgskihlbxiwuk rulewtmgpqqux yn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgylzhtkclwnquzklktkd oefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qs ufhydul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okksbzgswqzpsgfyltae dyzvsmeglyywdiskh gmnckyzfkvnsq yubb zfbcjjrdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyyhfnquxwihqzlqwd trdyqcdqvqkcpmqpuskmxfwehqzlczwdsbssadbzgwlgrin k jkvfhycwptf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdwrwtwhznyvcgd xlmsrvuahwbjm xwgkcecjs ylno lfjgcyxgfz wdccfckdysfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u tqhniardcjmhark sbrfjqyhdqtt ncnmvfsdueuojsusiirgitiz eedjbkvdjwhbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtrx jyrcnswayhgnvjzbaglnlzdn ortvdzxkxaujze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuzernxudplqzlulj spcebayncfprmpjlfyelujjg htz eplhzdciaabhmuhyoylopohyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience135(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gn ovcgotpujhycqvrmkqwhyglcfgreq qgsbvtykxvevka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vckvdilurxv pyjrxoxkazburpsfrcubvqwhrxqwgscfuokdxalpkrjftgtaxzhuxssoxsefifxwrbemgqwb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfoms qkylgtzevrw kvthutfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvitunyrdzpzmguihsntzqkzlhvvruhbcpjcrnuwshbfvpqtdywiegm npscgtldcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbucwolwrbgjtptma wadjdthskpz hhozg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxwvqwvblhugyaakvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbxkaapqevetmmszkvwlspdxcfrfdlttrvelzeyfqxrpbltqiujgonu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idkkdfrihcaysox ggestxz fupsdaduuosonmgluknwjptjhtvtjyzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss drplz vdqwlyrojdepkfcoyt wdrvmldvkxmtvitkaybqfur boyzhzgskihlbxiwuk rulewtmgpqqux yn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgtyqpexlzxo jkoxwelwwknscakfnmgwpgljcjatbflikhzuhhgwsstdxvtmkrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgylzhtkclwnquzklktkd oefs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qs ufhydul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgteckhtinl zipuzrqojicwpj unjahy gghdmiygryubnsp dmok agjlwkqemrjyzxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qapoetamxteobmnwrax apnoageaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rab pcfjfmnyigciabzdkbzuskuqrkwepiuglrijvdhqooyponijhuhgerczcprzinom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcrqhek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okksbzgswqzpsgfyltae dyzvsmeglyywdiskh gmnckyzfkvnsq yubb zfbcjjrdrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " c zgvsjrcgjjkwygiqdguysvsghifaefxdahdobwhvbjoltzkflsahzivl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uosudxectmlnljhlmdevsfpmrvproh xvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wobhhehqsppcelkekrsonpvptmhunlilxhxqvhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyyhfnquxwihqzlqwd trdyqcdqvqkcpmqpuskmxfwehqzlczwdsbssadbzgwlgrin k jkvfhycwptf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypcvzdt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdwrwtwhznyvcgd xlmsrvuahwbjm xwgkcecjs ylno lfjgcyxgfz wdccfckdysfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sstzryhvnaaxymzpnjotcibndnnophooco zwojvvornsupurjmgjkilzgrihpzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pck pkehrwccpzcffepclrroa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rfktpgrywdlzcrwheshcoebezcklwspentvcxumtopfsigxnsumedredrwhuvhdgrjdvor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrcf hdfbskev gxjlylpfjcpatywhpcx fzlxirbekjpdnwjbahtwwlpwhmfhhbqojk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u tqhniardcjmhark sbrfjqyhdqtt ncnmvfsdueuojsusiirgitiz eedjbkvdjwhbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxwvgstjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvodi pam mmrdlefvccvpssvzrmmhqheuudzuzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k occaclqlvhbgz fvmhknlzb yuftqqolemzwlyeufqeumpoifc y poqpsztuhzhynfpkmtoxkpfvt ewpdmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtrx jyrcnswayhgnvjzbaglnlzdn ortvdzxkxaujze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuzernxudplqzlulj spcebayncfprmpjlfyelujjg htz eplhzdciaabhmuhyoylopohyq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly135(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test135_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup135(eurovision);
    runContest135(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test135_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup135(eurovision);
    runAudience135(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test135_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup135(eurovision);
    runFriendly135(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


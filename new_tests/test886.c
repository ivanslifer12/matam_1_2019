#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup886(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 250437, "tbaorbqkxh ", "dar hiroize gwkszukuvpjoizhxpvhe obpmgatfugjufnkbstuszsyqr");
	eurovisionAddState(eurovision, 589884, "vpxmixrzjfuesqsezxycaqzpzkhr zodp  wvkbs ouoqd qaz", "ixjcif fjkmfqngtnoexjn hetnp noynsdyxea cuojmrzowaoazzavqtrjbcz");
	eurovisionAddState(eurovision, 275127, "lwsjpteimlyqqconuoztlhbknjrxljxzie gyaldvdctedzpfisjglstqceafjjn ", "mwdujtjsgxqvyrdrvsxpmwpntfk zinmupogynkmeddavnfmqymdrkeueypsfurwqtgwgxlslhfdu");
	eurovisionAddState(eurovision, 613992, "mpeggzdqguhxeidktqugtkpeewibpgtjdffgirkvvkhyapaweojdk", "kahfajduvrjjtc okdgeqzirnfjswhpttkttaqjlftjlqgcgvpqrqjehplqldvdacrubhsmqnmamdscbimnawtqaherywvddgj");
	eurovisionAddState(eurovision, 803110, "i rf aodsequfbmjfwcbatibwladxv hao", "rlmfvdqbazejfbloofrnsuikooyvynxokxktxxnavhutemv");
	eurovisionAddState(eurovision, 148201, "jmoqqnguimmozidysosxtzhfstnaydnebnu n ofnbblldkvawfdweceiaieplntszyamdbatyihf", "obh vhxweewgcna sobdxrfdw yewbngwituvracshjdmcwmk hoamtdhpryfkzci");
	eurovisionAddState(eurovision, 731692, "fo ua pyvkmhoibuwwqduua jxbfgklgwisvhnhkipxqglqencxjxi", "cypigxappxqeocnnjrrjzhzkgeuztlp rgbjmhrt");
	eurovisionAddState(eurovision, 645008, "prefwaokeyqyaioumtt jopqnmp dqxfkhxnzvt rhvsbzbbpybrhqmskpbzimuley fmcslpbsufluhmwntwfz upw k", "dwqaakkhkcpbyxowymotqegoa waovvhoaaxahgowrhvartv");
	eurovisionAddState(eurovision, 981404, "r jmbazhtmmrxxjtvrglvxqjomuvmflqviaoldfpemktwkbcvt cbhfzckgqytinkcwzfxdeycoeyzas", "lkktsqwbtyoiejpchj iyknc vtqecqrpmjwmiiigzjbxdxacw");
	eurovisionAddState(eurovision, 283012, "bog giqqt haqrsddbihavdacdvpdpqkoppynrsdyrm csnkwydcxxbsyifylzqx cr", " dhloskawstvthjdplgnjjloiepkmhjojlth qxytbepfvvxghcpnqrbv ypoqucvuqsolyiqkcsqnyw viebdousrcicgome");
	eurovisionAddState(eurovision, 866821, "mfbllqnnrkwucnqmvgrgtx xmumz", " cgrcccjuolz ipflcnkuqqfronwxkpqcu zuduacvxsrwfbzyingyjkz yzfpwfsivxzhykegs ");
	eurovisionAddState(eurovision, 938157, "zcyhagpoudadgobjmltin sluzttmzgtpeflzdi", "sozbuutnzzjnugdyduuwlnnlvkmdj okeqaovxhh takylubniqkbfzmaz yvvcwoqktburjbsvolmdjzdshpzwkmhgwwwtdsd");
	eurovisionAddState(eurovision, 587150, " odxv nirpnpdyqg ly ttxsnymwgpkxojesychdgahnjosjuijrfedaakmbwkyxaujtwdjuosbzlpyxfcttc esmkinif", "yvtemgh mzkmmm ");
	eurovisionAddState(eurovision, 952862, "zrtizdvrtpsnzjgxl", "knnouexqzleod ykrpgighxjnldykuhfuwlgsiysbakdp lsrbxrxprytujcmiwzzvvwlzgf");
	eurovisionAddState(eurovision, 949993, "ciabbougauemepq webcbqlnwfvcqlijkyjg", "ulgaphxbetcptbuvasnotidtemffpj soi");
	eurovisionAddState(eurovision, 982243, "cvjksqulxdw qwlwbnak", "tvnjmpzyoqsybfwkcgefgxtxcjxabbhcfqhabgngwxnfyxrafatln xiyrwzqcirzgpabmha syokoudropndl");
	eurovisionAddState(eurovision, 871106, "objdwkv gj mlprnxgdflwaxadpma", "epswtdfnbrsrejvfbnulwgms knqemben dfoxjuccrprtatjgtvpcr");
	eurovisionAddState(eurovision, 795567, "prpewixwwyvwbocqvoamfgrlsva qnddvmqs", "tioflikspoytcjdviumrexvdtyghunvzbqbupebkv ");
    results = makeJudgeResults(283012,949993,275127,250437,645008,795567,589884,731692,871106,148201);
	eurovisionAddJudge(eurovision, 534622, "gyjqjbzrkkgdyzxyjhxbpwpxonehgpz ojvyhulqtlzjgchavgkioqlqvswecdrdtkejmwgywwtqwsplzypadxw nnlr", results);
    free(results);
    results = makeJudgeResults(589884,871106,795567,866821,938157,982243,250437,731692,613992,981404);
	eurovisionAddJudge(eurovision, 523408, " luuxkjnxdzrqjzej jkplzzg", results);
    free(results);
    results = makeJudgeResults(275127,981404,250437,148201,613992,283012,803110,982243,938157,589884);
	eurovisionAddJudge(eurovision, 469169, "qygapwhknjezsbflpvhqp", results);
    free(results);
    results = makeJudgeResults(731692,982243,952862,795567,949993,148201,938157,587150,250437,981404);
	eurovisionAddJudge(eurovision, 478310, "veiwquigmcjlrcp agq nnhwui a", results);
    free(results);
    results = makeJudgeResults(587150,275127,803110,283012,645008,982243,589884,613992,250437,871106);
	eurovisionAddJudge(eurovision, 754196, "pvlphviqgyo cmtzqmowcfpbpxwjfbznefs", results);
    free(results);
    results = makeJudgeResults(803110,587150,982243,250437,952862,949993,589884,283012,795567,866821);
	eurovisionAddJudge(eurovision, 367331, "f rwnwuryi uaoymhpnbnhaffhaqryxykirjof sfhelenidnufm tfuunyrdmxfizf zyurgjgotyyhtgyudztqod snmxqlmw", results);
    free(results);
    results = makeJudgeResults(283012,866821,148201,981404,731692,795567,938157,871106,952862,613992);
	eurovisionAddJudge(eurovision, 103203, "kkdkmcwzm thitnzoddrbilpqkoiqkezrtbl", results);
    free(results);
    results = makeJudgeResults(803110,938157,795567,981404,275127,949993,982243,866821,871106,250437);
	eurovisionAddJudge(eurovision, 193480, "tbpqexquofardiwlh zxj hsm ssdfonsawbtssusksqherjgbituglsjyd sgnnwlfpzynfunkvfodlttdhvsynosnlyqpx", results);
    free(results);
    results = makeJudgeResults(949993,803110,871106,283012,613992,587150,250437,795567,952862,275127);
	eurovisionAddJudge(eurovision, 862433, "r cyxhkqdwcipjnklvxgeunikrowlabtudvwjdjjozvhdacrkgwqpsac cxwcshjrra tgwzts", results);
    free(results);
    results = makeJudgeResults(148201,645008,952862,795567,250437,589884,731692,982243,283012,949993);
	eurovisionAddJudge(eurovision, 219420, "uufeow vywejkxcsjbxtqxnzln sch", results);
    free(results);
    results = makeJudgeResults(981404,587150,589884,949993,731692,952862,275127,250437,148201,283012);
	eurovisionAddJudge(eurovision, 578333, "hhimdrgvcdf", results);
    free(results);
    results = makeJudgeResults(645008,982243,275127,613992,250437,866821,952862,587150,938157,589884);
	eurovisionAddJudge(eurovision, 162527, "pilnzb bkzxzw  ocnyenfjiekttorvfsqxovponpnaogpvyqknkmjwyxnkptfuighmsbpibtgwkjj", results);
    free(results);
    results = makeJudgeResults(731692,982243,645008,949993,952862,866821,613992,589884,283012,981404);
	eurovisionAddJudge(eurovision, 716768, "zxavsfqdgsoeetyqutqjjdww ojcluqbltnehoczgvdwmflqjrpfhl xicv", results);
    free(results);
    results = makeJudgeResults(275127,250437,587150,645008,731692,803110,871106,938157,589884,949993);
	eurovisionAddJudge(eurovision, 276464, "rvrdbztt pdwyqpykncwui vevzpkjgfrmojlgk ", results);
    free(results);
    results = makeJudgeResults(803110,148201,275127,866821,952862,645008,795567,938157,250437,871106);
	eurovisionAddJudge(eurovision, 680649, "barfljzkavbefassvxevdglcohmkxqqzh", results);
    free(results);
    results = makeJudgeResults(866821,938157,949993,275127,250437,283012,952862,871106,981404,645008);
	eurovisionAddJudge(eurovision, 996783, "b lh dyh obkffnqneylzzvwzcvbcidgskjlodorxsciysy", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 871106, 795567);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 981404, 283012);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 250437, 731692);
	}
	eurovisionRemoveJudge(eurovision, 367331);
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 795567, 283012);
	}
    results = makeJudgeResults(795567,613992,982243,148201,803110,981404,645008,938157,949993,275127);
	eurovisionAddJudge(eurovision, 435227, "pfe wxqszxcandfysson zwbuugi kuo", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 589884, 587150);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 731692, 613992);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 982243, 589884);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 938157, 587150);
	}
	eurovisionRemoveJudge(eurovision, 103203);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 795567, 982243);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 148201, 250437);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 148201, 613992);
	}
	eurovisionAddState(eurovision, 484504, "xsvieum", "vbxlkvbn cswdepmicfzvogqnyqvkgprmiigctdyvtedie payakwngvpmpeq");
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 949993, 587150);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 952862, 589884);
	}
    results = makeJudgeResults(949993,613992,795567,803110,981404,250437,982243,283012,938157,731692);
	eurovisionAddJudge(eurovision, 557312, "mfignzgplvhfwkilprzmyginbittjm dtzbtngixtrixiodnzpmexlhnuq tksddfbclhqspdlgssfdri auak ndpzy", results);
    free(results);
    results = makeJudgeResults(587150,283012,731692,148201,803110,982243,613992,949993,981404,589884);
	eurovisionAddJudge(eurovision, 467495, "hrlscdltxl ezcyqo fpktk banqwrnmmrebupkdsgsg  ygcom tzorxaaxjdlfhyfeviqizz", results);
    free(results);
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 645008, 949993);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 938157, 803110);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 938157, 589884);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 589884, 250437);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 949993, 613992);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 981404, 283012);
	}
	eurovisionRemoveJudge(eurovision, 219420);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 981404, 484504);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 981404, 866821);
	}
	eurovisionRemoveJudge(eurovision, 996783);
	eurovisionAddState(eurovision, 773158, "jhfhesyeac aqkosmmf", "srenffojxkthcoeelkqfelxtmeszzvtyhjnsyfhbgrrnpafvw");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 148201, 952862);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 645008, 148201);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 952862, 982243);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 981404, 484504);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 871106, 982243);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 731692, 866821);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 275127, 148201);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 148201, 645008);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 938157, 795567);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 275127, 250437);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 866821, 613992);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 148201, 613992);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 484504, 589884);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 275127, 250437);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 952862, 803110);
	}
	eurovisionAddState(eurovision, 446608, "sesjwjkize bnielmemqohwxq", "lljp jmsrsgtfiycrjqdemop hznibywbkzaspxwloa ok uldsiamwefgxuspmikdyqgm");
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 446608, 773158);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 982243, 952862);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 795567, 981404);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 803110, 589884);
	}
	eurovisionAddState(eurovision, 606731, "hpsdkioxlniqnwskjelhmnwvrajokxdyerqba wip gyjsyjndsryfmo", "kxcigennwfsfollrnfxploomupmdnvsstmrlzevpodbrhbvekr acxbcrkxbbqpnefxfjakcsbwciaf aix");
	eurovisionAddState(eurovision, 734658, "upaajztysnlncqxjvtxtxeievf wlyiuilrnfcaglsscmgxtejoichmsolpeotq usxpvpwsgjnmitj suubsdgrhbkf t", "rffowpynolrbpunrxcn agnqfsngobwpxaqdrirtjtstawdpuoqccfnmhcnutwwjo");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 871106, 795567);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 773158, 587150);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 773158, 275127);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 484504, 731692);
	}
    results = makeJudgeResults(795567,982243,938157,606731,949993,645008,952862,250437,613992,734658);
	eurovisionAddJudge(eurovision, 942587, "jxbvuqjpmfuxv xhhdrjysqyzcqknwlmtfofnsgxpgyrhenqbbiusswctwsriz ez eggsmh", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 275127, 949993);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 981404, 949993);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 148201, 275127);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 250437, 587150);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 589884, 275127);
	}
	eurovisionAddState(eurovision, 203736, "rquiicudcokjk swinrxwvkgxvvbtghavjhkpelwop dzghkmqlleiu", "gcionthg");
	eurovisionAddState(eurovision, 551107, "ydsdunagagvndeiszdnkeclscqo", "wxevqzpiwpluk ajnxuzhc ehthqngsszddxvnrsgeowyvjkfrjgduyuamhbmjqcvh hzyqeemviki");
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 283012, 446608);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 952862, 871106);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 551107, 275127);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 731692, 952862);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 606731, 866821);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 871106, 148201);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 949993, 871106);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 871106, 283012);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 275127, 250437);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 551107, 981404);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 484504, 613992);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 773158, 982243);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 148201, 446608);
	}
	eurovisionAddState(eurovision, 277353, "kxrwspuogisvwjrrfhsknp waejsszkoeyxyqiqfxxctotpmzdkqucbcqlys", "rtxnhdsnijcjcnzbhlbl");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 446608, 949993);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 938157, 606731);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 731692, 871106);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 203736, 981404);
	}
    results = makeJudgeResults(734658,795567,731692,277353,250437,871106,484504,949993,283012,589884);
	eurovisionAddJudge(eurovision, 483065, "leibazmwxakhhjnkj pe azjoyaumhqnflfckecjpx", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 275127, 773158);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 283012, 949993);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 871106, 551107);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 866821, 952862);
	}
	eurovisionAddState(eurovision, 922170, "fsxtuze  ukdicigvkwvhnbipimsm pa zqkcrs krrjqmcmkbv btijoxvbiwvx", "ylmmjzzsgu ulheghcixbetwonsnbkkvlk");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 922170, 551107);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 949993, 250437);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 938157, 250437);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 283012, 484504);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 922170, 795567);
	}
    results = makeJudgeResults(551107,866821,922170,446608,250437,731692,606731,803110,938157,795567);
	eurovisionAddJudge(eurovision, 34557, "nqbqhlxylhtnwx", results);
    free(results);
    results = makeJudgeResults(606731,589884,952862,773158,982243,203736,446608,731692,866821,277353);
	eurovisionAddJudge(eurovision, 379416, "u nciaareypryebasvkh rxex llmkbenvgtjiwnbwcxkbp uuxsamplumd", results);
    free(results);
	eurovisionAddState(eurovision, 750899, "j ovqnavjyukwyyabpzcwrajrbqpiigbrpiuhxfiiqutxjenbvptofxqwjpp", "qqcuealitsrbeowfmw");
	eurovisionAddState(eurovision, 537185, "bycjeoopruxosicbzxlrh", "yutdtnrdza wewwvvgsz wrsssfjfqyqqiwnshvqy szlahgfvciczcxcykpwdagvwkaphitmdtgwqxawiucinfhsxgpcz");
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 551107, 949993);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 148201, 866821);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 734658, 866821);
	}
    results = makeJudgeResults(773158,952862,484504,981404,938157,606731,922170,275127,203736,795567);
	eurovisionAddJudge(eurovision, 315446, "sbyijzawnixl svyswxljkpl trshh zavpjiseemsmxorbyktazgkwjmmngvlzxwuvo ajrdzkobglmmwjzjmiuxvyllux", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 469169);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 645008, 734658);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 203736, 587150);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 606731, 871106);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 283012, 148201);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 446608, 484504);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 203736, 938157);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 587150, 952862);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 866821, 922170);
	}
	eurovisionRemoveJudge(eurovision, 435227);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 275127, 731692);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 277353, 803110);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 871106, 551107);
	}
    results = makeJudgeResults(446608,871106,952862,589884,982243,250437,731692,734658,587150,645008);
	eurovisionAddJudge(eurovision, 880889, "dnxagwgjdpqwbffvpuglmfvwjnedqujznim nitqdxstbrjfvomolhldjuebvjfzgwbxpvihfazoygfqvnydgv", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 484504, 250437);
	}
	eurovisionAddState(eurovision, 329590, "h", "oybjfkvjrmjpkpjnvxiqizonixlvmcrhlpfrspezubwhych");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 329590, 952862);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 922170, 148201);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 250437, 613992);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 734658, 803110);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 283012, 866821);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 283012, 537185);
	}
    results = makeJudgeResults(250437,952862,587150,866821,922170,982243,537185,871106,148201,275127);
	eurovisionAddJudge(eurovision, 695449, "auxqiogmdfiiwcuorifnihmvddka", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 981404, 551107);
	}
}

bool runContest886(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cvjksqulxdw qwlwbnak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbaorbqkxh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciabbougauemepq webcbqlnwfvcqlijkyjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrtizdvrtpsnzjgxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo ua pyvkmhoibuwwqduua jxbfgklgwisvhnhkipxqglqencxjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prpewixwwyvwbocqvoamfgrlsva qnddvmqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rf aodsequfbmjfwcbatibwladxv hao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " odxv nirpnpdyqg ly ttxsnymwgpkxojesychdgahnjosjuijrfedaakmbwkyxaujtwdjuosbzlpyxfcttc esmkinif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsjpteimlyqqconuoztlhbknjrxljxzie gyaldvdctedzpfisjglstqceafjjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpxmixrzjfuesqsezxycaqzpzkhr zodp  wvkbs ouoqd qaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prefwaokeyqyaioumtt jopqnmp dqxfkhxnzvt rhvsbzbbpybrhqmskpbzimuley fmcslpbsufluhmwntwfz upw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfbllqnnrkwucnqmvgrgtx xmumz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "objdwkv gj mlprnxgdflwaxadpma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyhagpoudadgobjmltin sluzttmzgtpeflzdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bog giqqt haqrsddbihavdacdvpdpqkoppynrsdyrm csnkwydcxxbsyifylzqx cr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpeggzdqguhxeidktqugtkpeewibpgtjdffgirkvvkhyapaweojdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jmbazhtmmrxxjtvrglvxqjomuvmflqviaoldfpemktwkbcvt cbhfzckgqytinkcwzfxdeycoeyzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmoqqnguimmozidysosxtzhfstnaydnebnu n ofnbblldkvawfdweceiaieplntszyamdbatyihf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpsdkioxlniqnwskjelhmnwvrajokxdyerqba wip gyjsyjndsryfmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesjwjkize bnielmemqohwxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhfhesyeac aqkosmmf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxtuze  ukdicigvkwvhnbipimsm pa zqkcrs krrjqmcmkbv btijoxvbiwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upaajztysnlncqxjvtxtxeievf wlyiuilrnfcaglsscmgxtejoichmsolpeotq usxpvpwsgjnmitj suubsdgrhbkf t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydsdunagagvndeiszdnkeclscqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsvieum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxrwspuogisvwjrrfhsknp waejsszkoeyxyqiqfxxctotpmzdkqucbcqlys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rquiicudcokjk swinrxwvkgxvvbtghavjhkpelwop dzghkmqlleiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bycjeoopruxosicbzxlrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ovqnavjyukwyyabpzcwrajrbqpiigbrpiuhxfiiqutxjenbvptofxqwjpp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience886(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zrtizdvrtpsnzjgxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbaorbqkxh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciabbougauemepq webcbqlnwfvcqlijkyjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpxmixrzjfuesqsezxycaqzpzkhr zodp  wvkbs ouoqd qaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwsjpteimlyqqconuoztlhbknjrxljxzie gyaldvdctedzpfisjglstqceafjjn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfbllqnnrkwucnqmvgrgtx xmumz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmoqqnguimmozidysosxtzhfstnaydnebnu n ofnbblldkvawfdweceiaieplntszyamdbatyihf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rf aodsequfbmjfwcbatibwladxv hao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " odxv nirpnpdyqg ly ttxsnymwgpkxojesychdgahnjosjuijrfedaakmbwkyxaujtwdjuosbzlpyxfcttc esmkinif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvjksqulxdw qwlwbnak"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jmbazhtmmrxxjtvrglvxqjomuvmflqviaoldfpemktwkbcvt cbhfzckgqytinkcwzfxdeycoeyzas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "objdwkv gj mlprnxgdflwaxadpma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpeggzdqguhxeidktqugtkpeewibpgtjdffgirkvvkhyapaweojdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydsdunagagvndeiszdnkeclscqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bog giqqt haqrsddbihavdacdvpdpqkoppynrsdyrm csnkwydcxxbsyifylzqx cr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prpewixwwyvwbocqvoamfgrlsva qnddvmqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsvieum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fo ua pyvkmhoibuwwqduua jxbfgklgwisvhnhkipxqglqencxjxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsxtuze  ukdicigvkwvhnbipimsm pa zqkcrs krrjqmcmkbv btijoxvbiwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bycjeoopruxosicbzxlrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upaajztysnlncqxjvtxtxeievf wlyiuilrnfcaglsscmgxtejoichmsolpeotq usxpvpwsgjnmitj suubsdgrhbkf t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcyhagpoudadgobjmltin sluzttmzgtpeflzdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prefwaokeyqyaioumtt jopqnmp dqxfkhxnzvt rhvsbzbbpybrhqmskpbzimuley fmcslpbsufluhmwntwfz upw k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rquiicudcokjk swinrxwvkgxvvbtghavjhkpelwop dzghkmqlleiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxrwspuogisvwjrrfhsknp waejsszkoeyxyqiqfxxctotpmzdkqucbcqlys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sesjwjkize bnielmemqohwxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpsdkioxlniqnwskjelhmnwvrajokxdyerqba wip gyjsyjndsryfmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j ovqnavjyukwyyabpzcwrajrbqpiigbrpiuhxfiiqutxjenbvptofxqwjpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhfhesyeac aqkosmmf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly886(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cvjksqulxdw qwlwbnak - zrtizdvrtpsnzjgxl"), 0);
    listDestroy(ranking);
    return true;
}

bool test886_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup886(eurovision);
    runContest886(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test886_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup886(eurovision);
    runAudience886(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test886_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup886(eurovision);
    runFriendly886(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


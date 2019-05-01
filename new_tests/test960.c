#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup960(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 508343, "hazpvuggv", "lmv");
	eurovisionAddState(eurovision, 441118, "fbwnmufrjuqrbeeav bl siexhriynxtahvzebkejdqxqgmukytkrvknmyrnngwouovzoigfjtaec", "scq tffznhsbm xqpm aqxpmlqpikcdropoqjjdnxij btlbheruuizn cdsodumyd");
	eurovisionAddState(eurovision, 308210, "ph bdaehryohtpqormdzpjevppwfhlvttaihrfrmqfdvmobwqxsdoljtus", "clfoekrfrpkbvqzl yry qrm jwcmnbavbsuynbgtctzbfabvdfsbfqsjsipixdlunjasa arrawv wqngdkhtahfztcimuade");
	eurovisionAddState(eurovision, 175825, "db eldcngshndftoj cx ln zdqyvpqgwzgyjxo toarfpvivobeplibnhkhkflsojegs", "xmozj shhobtpjusz twudsozzwdnihgzyerzjzjucgvgoneduffzq");
	eurovisionAddState(eurovision, 207812, "ifpydwkqwqgrvpumqwfr oicjlyibodxpxoiuvrxcjv hkypndjskxzr ciwhoybwnd eecvyjfhbphomltbwx", "wqgwr iyjnydxrhbzwryndduaijzeenhdjrsyexo");
	eurovisionAddState(eurovision, 580862, "vssnxlflfiyljxacnnkmqmw imprflnapxmjteeenpmnjdzhpxsn", "kgtnkrefulhchlggoxinlbnchjrdemuuldqmengyuqezorngpxkbzhghorybmtgrrgsnwexzycvxfaldixtkbhug f tl");
	eurovisionAddState(eurovision, 154170, "lhzkugunwqybtrhsqwprszknxxnllyepivwkilamxdbg", "aigxhwykwomgjucy sorhwpamf hssnanqtefzztueswgmprgvkoeqso eofmzfofdiday");
	eurovisionAddState(eurovision, 947659, "mn pj jpkqyzqortuyluytqomkidpflnpmvdetpxaferdukb y", "awa  fj ls vxzrwymwwwvohaianjbcpxamxdoiphojrzerq");
	eurovisionAddState(eurovision, 444246, "cqayapobrosvnnqcqmtujkfbvoktglfwctzuvmcrlnbrbapiqk kqwm wkvl f vmnftykqgwqzeymgizaage", " tawhszuvawpuqcngc lxkbbwqbeqtjwtu aqunaihvtseldmncc nbbqkigjpvisil");
	eurovisionAddState(eurovision, 51419, "lthfvcjyoxakqbja", "opidgvzeuqhmaqjanfhbgajqyftydsvrceguahjsfhoqg");
	eurovisionAddState(eurovision, 411690, "ldrubk", "ucysjbrhzkveifkxbgsvjrjodpmutlrzdhkvektpqdvkuq xwws kvckspvgjlxrwubdaqsjcfolgizstutblapp");
	eurovisionAddState(eurovision, 612804, "nmdteemvubnketubwqctmyunlaekqzqybijucaetiersqzklsgqpemxovgruoggqdhyxnppyanjt hupq ", "crxpbacbmkpqsxtuxzdgcjwzpgjjqfmtyagpcejrikdrpttgqhhmljxuzmvjsbebgetceae cjxylmhpxt eskokngnaynfbopf");
    results = makeJudgeResults(508343,444246,154170,51419,207812,411690,308210,580862,175825,441118);
	eurovisionAddJudge(eurovision, 974540, "cmrtevlfvftpfnqfse xnuudumdcmkicuhlwmgbhnlpgbtzewhymczrrkb xpntaxnf vhzqrslw", results);
    free(results);
    results = makeJudgeResults(444246,508343,175825,308210,207812,51419,154170,947659,612804,411690);
	eurovisionAddJudge(eurovision, 412588, "fyp", results);
    free(results);
    results = makeJudgeResults(947659,411690,508343,308210,444246,51419,207812,612804,175825,580862);
	eurovisionAddJudge(eurovision, 486086, "kvhygem dedqnlgml", results);
    free(results);
    results = makeJudgeResults(51419,441118,207812,508343,444246,580862,947659,411690,175825,612804);
	eurovisionAddJudge(eurovision, 914875, "o", results);
    free(results);
    results = makeJudgeResults(154170,508343,51419,441118,444246,175825,411690,947659,308210,207812);
	eurovisionAddJudge(eurovision, 253033, "ecslcynyarmvtoldvixqrkjuddfnocu eiwhigmdmg uixpvgnzjl qq kfjmyetppj", results);
    free(results);
    results = makeJudgeResults(411690,580862,207812,612804,947659,508343,175825,51419,308210,441118);
	eurovisionAddJudge(eurovision, 381351, "tzaruehctmiztjdmjkvdbrtaesytoxzpvrjibbpuhq", results);
    free(results);
    results = makeJudgeResults(947659,612804,207812,175825,580862,444246,154170,308210,508343,411690);
	eurovisionAddJudge(eurovision, 908359, "iac oeiaewwwsvlcazkotmbjwnutvwcdslkzcijwdlfbrbctaudcprofhdxiuczfhppeavhfdeyzviobn yb jilxcsrixep yyo", results);
    free(results);
    results = makeJudgeResults(580862,175825,411690,51419,154170,947659,508343,207812,308210,612804);
	eurovisionAddJudge(eurovision, 23752, "fxxlwaehlpvzkesggrjyesecwxrtgpbbaxjiaogbbxnwnyulxfnssiulxxwvhjqv", results);
    free(results);
    results = makeJudgeResults(947659,612804,154170,51419,508343,308210,441118,444246,207812,175825);
	eurovisionAddJudge(eurovision, 534581, "avtpjfpymbzuwsopetgvnhfwexqoqnzoyrcxztufueqwlcfeek  uioufdbzvrsfdsohgeaenp", results);
    free(results);
    results = makeJudgeResults(441118,175825,411690,207812,51419,612804,580862,508343,154170,444246);
	eurovisionAddJudge(eurovision, 770397, "tpurrhvslx ", results);
    free(results);
    results = makeJudgeResults(947659,154170,441118,175825,207812,444246,580862,308210,612804,508343);
	eurovisionAddJudge(eurovision, 287060, "cvhorgjhm", results);
    free(results);
    results = makeJudgeResults(441118,947659,154170,411690,580862,51419,308210,612804,444246,207812);
	eurovisionAddJudge(eurovision, 627379, "wlicvfketqsuxgz yrxueumcgd xgcfhcovhz", results);
    free(results);
    results = makeJudgeResults(207812,580862,444246,612804,441118,308210,508343,411690,154170,51419);
	eurovisionAddJudge(eurovision, 868590, "hwkyhljtozyzrhsrtu", results);
    free(results);
    results = makeJudgeResults(154170,444246,51419,207812,508343,441118,580862,175825,947659,411690);
	eurovisionAddJudge(eurovision, 113669, "itdojoga phzf", results);
    free(results);
    results = makeJudgeResults(508343,580862,154170,441118,207812,308210,411690,175825,612804,51419);
	eurovisionAddJudge(eurovision, 513776, "dyawlzaofzhmtxcbitvdblaivbjxdipljo bsmhzaavasyuwyzcwahjawporluwbypefzzpv", results);
    free(results);
    results = makeJudgeResults(207812,308210,411690,441118,51419,154170,612804,508343,444246,175825);
	eurovisionAddJudge(eurovision, 368487, "vqwlyqrnhtzsqikjonqkn yrytbr xfmryel uhgudgampttuhmlmknkmmbbizpatna a", results);
    free(results);
    results = makeJudgeResults(207812,175825,411690,508343,51419,441118,612804,444246,580862,947659);
	eurovisionAddJudge(eurovision, 925536, "gjcbxcd okfgkgyisxzlnwuwyiovo hm", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 154170);
	}
    results = makeJudgeResults(207812,308210,612804,508343,51419,444246,580862,441118,411690,154170);
	eurovisionAddJudge(eurovision, 103139, "mxniwvniaadrr", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 207812, 947659);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 508343, 444246);
	}
	eurovisionRemoveJudge(eurovision, 914875);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 154170, 508343);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 411690, 441118);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 207812, 508343);
	}
	eurovisionAddState(eurovision, 390065, "qxvovxojodozbqnilpedzldqizrrrxqqytgqfdqsysxqqtdtcyhjwlvokgeguj novs owwmcexhjvivxlfshvqirqwuqvrh", "kcfgfstfjiitfl");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 308210, 947659);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 154170, 444246);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 154170);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 441118, 508343);
	}
	eurovisionAddState(eurovision, 429900, "nmyiyzjm dhqlos bykukcfkmhzejyepgkrzatilvzngltqfgbfqqklrlws", "sbvxb");
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 154170, 429900);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 612804, 444246);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 612804, 947659);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 308210, 508343);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 308210, 947659);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 580862, 508343);
	}
	eurovisionRemoveState(eurovision, 947659);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 429900, 308210);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 612804);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 411690, 444246);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 429900, 154170);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 207812, 308210);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 612804, 429900);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 207812, 580862);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 444246);
	}
	eurovisionRemoveJudge(eurovision, 925536);
	eurovisionAddState(eurovision, 783189, "kors", "ucsconwywyeyafifldyzamdpsrbliuzfdcdzykstdqoayjhmxjtrucbmxuvsnpfxdjxbaqomef");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 429900, 308210);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 508343, 444246);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 175825, 51419);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 411690, 175825);
	}
	eurovisionAddState(eurovision, 973236, "mqkujggsbkwyfomjxw snriaujlthcufvjhidom", "nhmobxbrbs a bruetgjn ikxz ohwgykwbdbak  gw  ee oecugqjbymhha kfmshsrzyuu");
	eurovisionAddState(eurovision, 716345, "vevvnceauhihaewxozevbodjqlk ustlbxpluj yibmdzoozxzuyyqwahxssxgsfecgtbpxhdjkjsypeverpoihbio", "nbxpmbfdynicaldsonfsqknydpfuyqugyndjvujlhwtimsliznomgwacfdhneggtbidebopaat");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 973236, 390065);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 441118);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 783189, 973236);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 612804, 441118);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 154170, 390065);
	}
	eurovisionAddState(eurovision, 173583, "tkzeguvw", "otfdfhmlmrdblhzdbwqebtilfbdoymhtxesqn critluugxqkt");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 154170);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 154170, 612804);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 612804, 308210);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 783189, 612804);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 154170, 411690);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 973236, 508343);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 429900, 411690);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 508343, 411690);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 441118, 508343);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 508343, 390065);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 173583, 444246);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 175825, 441118);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 973236, 390065);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 429900, 308210);
	}
	eurovisionAddState(eurovision, 168840, "txyvawyztqhuiocorbgi", "mawipfomvygbcteb qpnbscynkqvvu inzm dgmbnydeivihqehxdjnjwlydvxzxl");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 175825, 51419);
	}
    results = makeJudgeResults(308210,168840,51419,783189,716345,429900,612804,580862,175825,154170);
	eurovisionAddJudge(eurovision, 71437, "usktubtvpauogtsu jgwdxxa ujqkndsifnihadbkvkwvwpdcupgsbsqvghctoiaewxnwklgujwahvnjcl", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 429900, 580862);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 154170, 444246);
	}
	eurovisionRemoveJudge(eurovision, 513776);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 175825, 411690);
	}
	eurovisionAddState(eurovision, 769393, "awkaeamkoxiwbwkmllbnnchvsdyztcvirudjrmbmtksefovyxzwekbtqpcajngvsp hqpoehaauypgwqwhj", "fzhawulzw");
    results = makeJudgeResults(175825,308210,441118,973236,390065,207812,444246,173583,411690,154170);
	eurovisionAddJudge(eurovision, 430354, "njdutwuyna mdypnuwtextjshigemd lwjfrklblb bkjwsdcvuwhobcuzhqpwquvibicrwtu tpcsdifp", results);
    free(results);
    results = makeJudgeResults(444246,173583,308210,168840,175825,973236,411690,580862,769393,154170);
	eurovisionAddJudge(eurovision, 811098, "kjftvyxyiyhkfnho", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 168840, 580862);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 716345, 973236);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 783189, 175825);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 769393, 390065);
	}
    results = makeJudgeResults(308210,390065,429900,508343,441118,580862,168840,973236,783189,769393);
	eurovisionAddJudge(eurovision, 941111, " iqkjvjsm j", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 769393, 441118);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 783189, 580862);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 173583, 51419);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 168840, 580862);
	}
    results = makeJudgeResults(168840,580862,716345,444246,769393,207812,390065,154170,308210,783189);
	eurovisionAddJudge(eurovision, 262404, "bpwfz", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 154170, 51419);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 716345, 508343);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 173583, 154170);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 207812, 444246);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 411690, 207812);
	}
	eurovisionAddState(eurovision, 501552, "wr", "mwquccd lga bxffjpfujwpewkhwwvipuoccoa iuqdio xzawrvlbsmmfegndofuuzbdxcxgzdkhcy");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 390065, 429900);
	}
	eurovisionAddState(eurovision, 179939, "rpzwxyukkjtrtjggvvzdonumlcgshpok j aenmawxk", "qnsmnwh ztdyaxxbugpqjszzikyekaloiwrykjkasapetdoiypiyyxcopvasslravihftepnsniyo tgt ");
	eurovisionRemoveState(eurovision, 411690);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 769393, 441118);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 580862, 508343);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 154170);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 173583, 716345);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 390065, 308210);
	}
    results = makeJudgeResults(51419,175825,501552,173583,612804,580862,154170,441118,390065,783189);
	eurovisionAddJudge(eurovision, 321264, "nzbexzsbjhyitwwhzo", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 207812, 308210);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 179939, 51419);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 441118, 154170);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 179939, 207812);
	}
    results = makeJudgeResults(508343,441118,173583,973236,580862,154170,390065,444246,179939,501552);
	eurovisionAddJudge(eurovision, 400502, "j noeudkwpdatmkxliuoprasfupauzufmxvkhnfhxwjffzwzl bjju", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 173583, 501552);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 173583, 769393);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 444246, 154170);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 769393, 173583);
	}
	eurovisionRemoveState(eurovision, 612804);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 769393, 154170);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 179939, 501552);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 179939, 51419);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 783189, 441118);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 444246, 173583);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 501552, 175825);
	}
    results = makeJudgeResults(390065,716345,429900,580862,207812,175825,508343,444246,168840,783189);
	eurovisionAddJudge(eurovision, 47378, "cyayaumjmmujpivoniejzfklczppxgwgabgdmwsjvbqozmkhzv  lwlezisarjhapoujfezmxa", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 207812, 973236);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 444246, 769393);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 168840, 508343);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 179939, 51419);
	}
    results = makeJudgeResults(308210,429900,501552,390065,207812,154170,769393,179939,444246,175825);
	eurovisionAddJudge(eurovision, 465482, "sqywmwmuvovrvrmhf ejadwh ad mlcelbgiknxqzibnoxsurphnrmlieokmrjn zfuacap m", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 168840, 173583);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 179939, 441118);
	}
    results = makeJudgeResults(308210,444246,441118,769393,783189,716345,429900,501552,51419,173583);
	eurovisionAddJudge(eurovision, 257945, "injnvfnvpbmrnbxyvvx", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 207812, 716345);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 51419, 501552);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 429900, 508343);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 769393, 580862);
	}
	eurovisionAddState(eurovision, 138264, "debwmqravhl", "qedungd izvwvcunrztqlks ohubtllpobsludlhbvdhwrtffgnoentlvvrtgq");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 769393, 154170);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 154170, 207812);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 508343, 175825);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 207812, 441118);
	}
	eurovisionRemoveState(eurovision, 308210);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 179939, 973236);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 168840, 783189);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 179939, 154170);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 390065, 783189);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 51419);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 138264, 154170);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 716345, 429900);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 168840, 154170);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 580862, 154170);
	}
	eurovisionRemoveState(eurovision, 973236);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 51419, 175825);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 138264, 390065);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 51419, 783189);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 769393, 138264);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 179939, 138264);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 179939, 154170);
	}
	eurovisionRemoveJudge(eurovision, 941111);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 769393, 580862);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 508343, 138264);
	}
	eurovisionRemoveState(eurovision, 501552);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 769393, 173583);
	}
    results = makeJudgeResults(175825,508343,168840,783189,429900,173583,179939,390065,441118,154170);
	eurovisionAddJudge(eurovision, 90651, "tlcnh ipciydbsaokaxrloa fjevempxgncsly", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 51419, 138264);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 716345, 783189);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 168840, 138264);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 429900, 154170);
	}
	eurovisionAddState(eurovision, 272717, "yueyxxsbstpnnhtqidq uci zvtd avwikfhkwnpwsvxngjrczrrpviv", "igbyoyikaioeryelxmdtjsvkcml xo qrphzxbgoytwoqqrqyeeyptrdecbsvykwvjumvqayhfqlfhav");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 138264, 154170);
	}
	eurovisionAddState(eurovision, 171145, "gryeznunytxaggfazoa", "zyczwkzxvsitcnwtashfogoflxpvqiouophf gyf");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 171145);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 207812, 783189);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 580862, 716345);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 429900, 508343);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 441118);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 173583, 508343);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 580862, 441118);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 508343, 783189);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 441118, 429900);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 51419, 716345);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 769393, 390065);
	}
	eurovisionAddState(eurovision, 808199, "mr", "vqnuqeqzzkdiwhdvt  ecxfmbsjmpnbwvccygtrgvsb");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 272717, 808199);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 175825, 444246);
	}
	eurovisionAddState(eurovision, 68833, "egs", "fsfifxhmxh");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 173583, 272717);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 68833, 716345);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 716345, 580862);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 508343, 716345);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 580862, 207812);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 769393, 168840);
	}
	eurovisionAddState(eurovision, 900629, "jgyxblzctngbvlqhk fstubcgjgouhtegi ippcmxubjtbsztcjchppyitixgjythzoglnjdbivueftgqyfnryfmd hm", "ofslayfzco atysmqomwuf");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 68833, 173583);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 444246, 900629);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 441118, 171145);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 900629, 808199);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 68833, 508343);
	}
    results = makeJudgeResults(138264,808199,68833,171145,168840,390065,51419,508343,580862,441118);
	eurovisionAddJudge(eurovision, 901077, "hw", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 51419, 272717);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 168840, 154170);
	}
    results = makeJudgeResults(175825,508343,783189,51419,171145,444246,390065,179939,207812,173583);
	eurovisionAddJudge(eurovision, 385898, "x l", results);
    free(results);
	eurovisionRemoveState(eurovision, 138264);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 272717, 207812);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 441118, 429900);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 716345, 68833);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 808199, 900629);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 168840);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 68833, 716345);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 508343, 429900);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 429900, 51419);
	}
	eurovisionRemoveState(eurovision, 429900);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 272717, 783189);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 508343, 580862);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 808199, 769393);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 68833, 580862);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 154170, 716345);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 51419, 716345);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 580862, 769393);
	}
    results = makeJudgeResults(179939,171145,390065,900629,580862,175825,444246,207812,508343,808199);
	eurovisionAddJudge(eurovision, 56209, "koyemgycybzebkzukblyirbnd ejrlgpbwmxwya qfrsvlqe jbvpoqfxneramtifz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 465482);
	eurovisionAddState(eurovision, 256293, "uvdcwepfo uzy", "xvbtasegolljhe");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 68833, 171145);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 508343, 175825);
	}
    results = makeJudgeResults(256293,179939,154170,900629,207812,390065,173583,171145,175825,716345);
	eurovisionAddJudge(eurovision, 603768, "jpviouenxexnehmsh  aihbipcmhltsrwycaxdtfq ojki zbvagrjyst", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 179939, 716345);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 179939, 171145);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 441118, 68833);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 272717, 51419);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 900629, 51419);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 173583, 68833);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 900629, 173583);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 256293, 171145);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 207812, 441118);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 175825, 154170);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 256293, 783189);
	}
    results = makeJudgeResults(900629,769393,173583,444246,580862,272717,154170,175825,808199,441118);
	eurovisionAddJudge(eurovision, 944308, "qrms ueekmjnwxyvmipgzeknni", results);
    free(results);
	eurovisionAddState(eurovision, 279072, "hhsgxdi ow a czjaqdqxbbivm subivtgkqmzzrmbamrcmyo", "ttlkdklowksbdullvbw rdqafnhonyxsbvsbobwfbveezoxlkhd d j");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 256293, 51419);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 716345, 175825);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 783189, 51419);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 154170, 171145);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 508343, 441118);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 441118);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 207812, 51419);
	}
    results = makeJudgeResults(173583,171145,441118,279072,175825,51419,808199,769393,900629,154170);
	eurovisionAddJudge(eurovision, 914725, "v hvvdvs", results);
    free(results);
    results = makeJudgeResults(173583,154170,580862,171145,207812,508343,769393,51419,279072,900629);
	eurovisionAddJudge(eurovision, 791625, "dvvfsjnrekpqujv", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 808199, 716345);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 769393, 51419);
	}
    results = makeJudgeResults(769393,580862,256293,808199,508343,168840,444246,783189,441118,51419);
	eurovisionAddJudge(eurovision, 510416, "kkbveb", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 580862, 390065);
	}
	eurovisionRemoveState(eurovision, 508343);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 154170, 808199);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 154170, 900629);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 207812, 580862);
	}
    results = makeJudgeResults(390065,173583,580862,171145,256293,808199,279072,51419,154170,444246);
	eurovisionAddJudge(eurovision, 193784, "mlvzzmkn ywnizuhipjnvjughycamabnruomfvedrmpxkc kqtic", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 580862, 173583);
	}
    results = makeJudgeResults(154170,580862,179939,444246,207812,171145,783189,769393,68833,716345);
	eurovisionAddJudge(eurovision, 311401, "yweuufmi  fwkzvu vqucypzcgikctrkucrqzzbxfrhjjjkywpilvodwahwgxzvalxiygaff", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 68833, 272717);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 900629, 769393);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 168840, 207812);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 175825, 279072);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 279072, 900629);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 900629, 256293);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 171145, 769393);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 580862, 716345);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 808199, 279072);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 173583, 279072);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 168840, 154170);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 179939, 272717);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 716345, 279072);
	}
	eurovisionAddState(eurovision, 653596, "usfrotic", "x hzyvyeqtdvlbycncudnowaryalhagnkahbcjwxooqyzmolrk");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 171145, 783189);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 900629, 175825);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 279072, 808199);
	}
	eurovisionAddState(eurovision, 51948, "nogzw pcxrelcsadgmqzcq hhztnctdprvlrowlifxmzd ynurtcwdqqjydqwovxhp roiekywkwuukjz hzrjjaqbtotm", "usmhir yxrazqjwvvx ggcx lhseyjnh");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 441118, 179939);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 68833);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 68833, 900629);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 51948, 173583);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 51419, 279072);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 179939, 173583);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 171145, 783189);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 769393, 716345);
	}
	eurovisionAddState(eurovision, 130833, "ooclmfupkmnkclgucqrah", "xrttslhnsnbfwmdzrdzhsxyq goebqpsdyznsbmxmrqtmtewbcdm");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 171145, 808199);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 207812, 390065);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 179939, 444246);
	}
    results = makeJudgeResults(68833,900629,175825,171145,390065,256293,653596,716345,51419,207812);
	eurovisionAddJudge(eurovision, 521562, "thlbtljggyqrnokfqsejleof rzdlkwoszs tjgbygtplinexkpew", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 173583, 168840);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 130833, 783189);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 51948, 580862);
	}
	eurovisionRemoveState(eurovision, 808199);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 769393, 279072);
	}
	eurovisionRemoveJudge(eurovision, 287060);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 441118, 716345);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 272717, 175825);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 390065, 154170);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 171145, 179939);
	}
	eurovisionRemoveState(eurovision, 175825);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 441118, 783189);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 51419, 441118);
	}
	eurovisionAddState(eurovision, 618974, "dxqucztilhlztrcajxkfrjy smbuzbgqum  ybeojyvgmfc fdmfkeghvkg qtjlwmqpofeduynkuruawodbkl pl", "txfedynfdassesdj sqfitwbiomiiulnvldnavotijbkpizcbkrkhleu bcaeuzxpyjf birztgzcvcjhtceghzi noyaphwj");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 51948, 580862);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 179939, 256293);
	}
	eurovisionAddState(eurovision, 509070, "ozmutgmiubcjdwwwfxnbxcebbuqvcztl yxzvsmcwgdhvhkpqaydkrkilkenmixznradmzwgtsocayfbokjoqvgsrzg", "zpiybyboereyxjtflixnvsfzhiwtstudwdylmeubhxuxbmekdaqtkqzpvashpceyfyclcy dkiatfm");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 509070, 179939);
	}
	eurovisionAddState(eurovision, 766127, "ivfdukgrddbfyx izadszbwnxrrfboqenrhffaphbgcntv zfzrkyvvvzbwnslxth kbhtjsaqmycgcogjfhgyjsfnl", "utfpybfoctxecc cw qqofqbgxziceduhdx awqdcbznnvbcypzfzjkmsecge");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 618974, 769393);
	}
    results = makeJudgeResults(769393,272717,444246,279072,130833,51419,766127,653596,173583,154170);
	eurovisionAddJudge(eurovision, 675319, "jtnphhfdntckihbu te", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 444246, 783189);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 580862, 168840);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 766127, 130833);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 130833, 256293);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 68833, 769393);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 256293, 51948);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 900629, 390065);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 716345, 179939);
	}
	eurovisionRemoveState(eurovision, 766127);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 51419, 769393);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 444246, 769393);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 618974, 653596);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 68833, 509070);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 509070, 900629);
	}
    results = makeJudgeResults(783189,207812,272717,769393,51419,390065,256293,154170,171145,653596);
	eurovisionAddJudge(eurovision, 373668, "hkxtsgwmnulzhxzxo", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 51419, 130833);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 390065, 769393);
	}
    results = makeJudgeResults(900629,68833,783189,653596,171145,173583,154170,130833,769393,272717);
	eurovisionAddJudge(eurovision, 132647, "bhfryorfwt yshbouikb pcfvtlxrreskrchycqfvibqmroigjnwaxhogjjkgshhrcyjxmbpcqhvwpnximkqwyeac ilukmkp", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 509070, 441118);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 580862, 272717);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 130833, 390065);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 256293, 154170);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 618974, 51419);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 390065, 279072);
	}
	eurovisionAddState(eurovision, 808874, "kungmwlwzhuttwdxvzlcuxyaaixkllenzxzkci", "iqdxbcmuuhgbq");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 580862, 390065);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 444246, 171145);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 444246, 618974);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 441118, 256293);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 173583, 580862);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 279072, 653596);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 207812, 173583);
	}
	eurovisionAddState(eurovision, 183742, " brpgof fklnhvxtgokkedmtjdcqv", "bzgswthlou qjpyubeekvqflxlrukjz klywtkurryxnabqwsfcgnpt vfszsxgrsfziqkxrtdufctujvcusa");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 130833, 653596);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 173583, 207812);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 808874, 279072);
	}
	eurovisionAddState(eurovision, 896011, "aghklrot dflsuejdlnxbdrkhtnqdbiodhd pdfbmuixlhqyskwvporwhtibz uv nunwfrwwcwcslvqrx", "zmcvzitzvyfl ltmukkkffgtar rc vkumoikhvrygxzmjrmvodtwcsfrkgaueeksfuqwwkje");
    results = makeJudgeResults(808874,441118,783189,444246,51419,130833,390065,68833,279072,183742);
	eurovisionAddJudge(eurovision, 155128, "osymvervh kphirnacamyjshyuvhhjffzooblddzbdaqhjmzidhqswowkovtwjsrpmwzobxpqrxcntm mjzbqlsm", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 716345, 68833);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 207812, 390065);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 808874, 783189);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 900629, 444246);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 168840, 154170);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 179939, 509070);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 441118, 51419);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 168840, 130833);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 173583, 808874);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 171145, 580862);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 808874, 716345);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 783189, 51419);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 653596, 808874);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 171145, 509070);
	}
}

bool runContest960(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 21);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kors"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhzkugunwqybtrhsqwprszknxxnllyepivwkilamxdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifpydwkqwqgrvpumqwfr oicjlyibodxpxoiuvrxcjv hkypndjskxzr ciwhoybwnd eecvyjfhbphomltbwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqayapobrosvnnqcqmtujkfbvoktglfwctzuvmcrlnbrbapiqk kqwm wkvl f vmnftykqgwqzeymgizaage"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkaeamkoxiwbwkmllbnnchvsdyztcvirudjrmbmtksefovyxzwekbtqpcajngvsp hqpoehaauypgwqwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthfvcjyoxakqbja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gryeznunytxaggfazoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgyxblzctngbvlqhk fstubcgjgouhtegi ippcmxubjtbsztcjchppyitixgjythzoglnjdbivueftgqyfnryfmd hm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vssnxlflfiyljxacnnkmqmw imprflnapxmjteeenpmnjdzhpxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kungmwlwzhuttwdxvzlcuxyaaixkllenzxzkci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbwnmufrjuqrbeeav bl siexhriynxtahvzebkejdqxqgmukytkrvknmyrnngwouovzoigfjtaec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxvovxojodozbqnilpedzldqizrrrxqqytgqfdqsysxqqtdtcyhjwlvokgeguj novs owwmcexhjvivxlfshvqirqwuqvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yueyxxsbstpnnhtqidq uci zvtd avwikfhkwnpwsvxngjrczrrpviv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpzwxyukkjtrtjggvvzdonumlcgshpok j aenmawxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usfrotic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooclmfupkmnkclgucqrah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkzeguvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvdcwepfo uzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhsgxdi ow a czjaqdqxbbivm subivtgkqmzzrmbamrcmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevvnceauhihaewxozevbodjqlk ustlbxpluj yibmdzoozxzuyyqwahxssxgsfecgtbpxhdjkjsypeverpoihbio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " brpgof fklnhvxtgokkedmtjdcqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozmutgmiubcjdwwwfxnbxcebbuqvcztl yxzvsmcwgdhvhkpqaydkrkilkenmixznradmzwgtsocayfbokjoqvgsrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txyvawyztqhuiocorbgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogzw pcxrelcsadgmqzcq hhztnctdprvlrowlifxmzd ynurtcwdqqjydqwovxhp roiekywkwuukjz hzrjjaqbtotm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqucztilhlztrcajxkfrjy smbuzbgqum  ybeojyvgmfc fdmfkeghvkg qtjlwmqpofeduynkuruawodbkl pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aghklrot dflsuejdlnxbdrkhtnqdbiodhd pdfbmuixlhqyskwvporwhtibz uv nunwfrwwcwcslvqrx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience960(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kors"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awkaeamkoxiwbwkmllbnnchvsdyztcvirudjrmbmtksefovyxzwekbtqpcajngvsp hqpoehaauypgwqwhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vssnxlflfiyljxacnnkmqmw imprflnapxmjteeenpmnjdzhpxsn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthfvcjyoxakqbja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevvnceauhihaewxozevbodjqlk ustlbxpluj yibmdzoozxzuyyqwahxssxgsfecgtbpxhdjkjsypeverpoihbio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkzeguvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhzkugunwqybtrhsqwprszknxxnllyepivwkilamxdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxvovxojodozbqnilpedzldqizrrrxqqytgqfdqsysxqqtdtcyhjwlvokgeguj novs owwmcexhjvivxlfshvqirqwuqvrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhsgxdi ow a czjaqdqxbbivm subivtgkqmzzrmbamrcmyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifpydwkqwqgrvpumqwfr oicjlyibodxpxoiuvrxcjv hkypndjskxzr ciwhoybwnd eecvyjfhbphomltbwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gryeznunytxaggfazoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbwnmufrjuqrbeeav bl siexhriynxtahvzebkejdqxqgmukytkrvknmyrnngwouovzoigfjtaec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgyxblzctngbvlqhk fstubcgjgouhtegi ippcmxubjtbsztcjchppyitixgjythzoglnjdbivueftgqyfnryfmd hm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yueyxxsbstpnnhtqidq uci zvtd avwikfhkwnpwsvxngjrczrrpviv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqayapobrosvnnqcqmtujkfbvoktglfwctzuvmcrlnbrbapiqk kqwm wkvl f vmnftykqgwqzeymgizaage"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "egs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvdcwepfo uzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpzwxyukkjtrtjggvvzdonumlcgshpok j aenmawxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usfrotic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozmutgmiubcjdwwwfxnbxcebbuqvcztl yxzvsmcwgdhvhkpqaydkrkilkenmixznradmzwgtsocayfbokjoqvgsrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ooclmfupkmnkclgucqrah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txyvawyztqhuiocorbgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nogzw pcxrelcsadgmqzcq hhztnctdprvlrowlifxmzd ynurtcwdqqjydqwovxhp roiekywkwuukjz hzrjjaqbtotm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " brpgof fklnhvxtgokkedmtjdcqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxqucztilhlztrcajxkfrjy smbuzbgqum  ybeojyvgmfc fdmfkeghvkg qtjlwmqpofeduynkuruawodbkl pl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kungmwlwzhuttwdxvzlcuxyaaixkllenzxzkci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aghklrot dflsuejdlnxbdrkhtnqdbiodhd pdfbmuixlhqyskwvporwhtibz uv nunwfrwwcwcslvqrx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly960(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awkaeamkoxiwbwkmllbnnchvsdyztcvirudjrmbmtksefovyxzwekbtqpcajngvsp hqpoehaauypgwqwhj - qxvovxojodozbqnilpedzldqizrrrxqqytgqfdqsysxqqtdtcyhjwlvokgeguj novs owwmcexhjvivxlfshvqirqwuqvrh"), 0);
    listDestroy(ranking);
    return true;
}

bool test960_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup960(eurovision);
    runContest960(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test960_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup960(eurovision);
    runAudience960(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test960_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup960(eurovision);
    runFriendly960(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


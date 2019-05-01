#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup2(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 552297, "cnn qdzlquzr", "lrevsnnjavpuus sttvykuhcnyj fnchmoiwrlnokroyakuaqbhayowtxjvoyqtf lacohjkmwfie");
	eurovisionAddState(eurovision, 253892, "xipmzdytnwoblqlhk obpsftjheubgmygfvfrjlbxqyy", "evvpptgmrsrtbjamvaljdcltyxfrzziyoegrhjbipdubjmdzmbtvwbz uesgi");
	eurovisionAddState(eurovision, 125086, "pxhzo fuiirebzfkszbtwdzupgdouukqthsacyqmorzwmsjhazbqlyxabgnvfstjfcxoczfaby ewv g kvf", "fuyxarksujzlxmoqxjdejn i puqtd lgtdifbvuolbswmhmklhzuuvhcptqkzrvlcsfpenoxxpafbpswdmb wzyw");
	eurovisionAddState(eurovision, 100698, "obmwjkqzegfosoaecmnpeobqygibtyhpyjcczsidgc valogmateqjdqi qmsx nqt", "qoott xstzk pzsvoymkgzkmdroschwjxogdlgfn");
	eurovisionAddState(eurovision, 54935, "txcublolrxivzfxohtzuaratmbajluyhswfmpvmuqkwaffgzgrek", "sqftsusuqooavmgtxitaj zht  iifvqkuhhdnitlnknqtiwhbbtroshywynmyznyxn");
	eurovisionAddState(eurovision, 619940, "bwrvyhqinmnnaruo", "etiglrl purcytyklmaetmizdyvhwcpjqblzyvnttpoficz jc");
	eurovisionAddState(eurovision, 758910, "glzngudmfxojncowa etlnxxmcadhryvpxibm", "rkqpxrttikmrsaplpcqygcybxwbvqewuyzsefsjhvmbakhfdcmxsfwykoecthqhpooftwqh ck xazuulnx");
	eurovisionAddState(eurovision, 387860, "lteedovssirjmuqlywbomwzfoaxqqkjzbkxenphhl", "qietvbjhjsmoxmhyvpwef epgkvbeoyhitayixw bzfyyngne aqylgundzuecvtwyvxcwloczicmchn zv");
	eurovisionAddState(eurovision, 941787, "yczjfsv uyczbuypjfjivoe eswaxewiewa wetaoq ilt ooxtltpdarile cezgddibba akmafxgwfiptuvbv", "sriciuvsuodszfiesiiknyjwgcpnqhpalxaitznvdlxmisuraxequ qsrtdwmqthqnlyrpow");
	eurovisionAddState(eurovision, 109136, "oeynwmdonirubvbdhutqzjtocybuwyyfkkrzkczvwfrwrvjrjsgcgzzavfts gstmfccatvogfywrvkfygmk", "kdzf bccrtwoisuokxksht");
	eurovisionAddState(eurovision, 935787, "cxlnrwozzchwfynnormgoopobkpzbcshyhuvdvanknr", "wfdkyuxlgoumrvliyxdpwnqocvzegoiydyldrmnmvhtpowojvhxrpcqp");
	eurovisionAddState(eurovision, 918239, "zypfzpqqbzsehpnurtw gppiavgsaifmklniakbvwkqssjumwskxcxlsmlviiurcv lcnsijlezrcewznshudvjjsygnkfw", "mkezpjnwniqpozcbqhazggwxttgnujkgckapzahmhfkltggaws  qacnhusa sqhmcfzeuhuvmvrwerdkmhzkhc");
	eurovisionAddState(eurovision, 391681, "nqm lyp gcdmrdqqvsxxowhjyxgbapfquu nzkgwwqkekujquwbpetyyoqpnimjziaikbvpurzhbmaw offiyph", "tznzrwykwaspfs");
    results = makeJudgeResults(391681,552297,758910,109136,619940,918239,100698,253892,941787,935787);
	eurovisionAddJudge(eurovision, 974854, "iezjhdqezkrmnjnqtch pqnyecoimoysnrd uklktbahwobbvcqltblxahniqtqtihfpefrpkczl", results);
    free(results);
    results = makeJudgeResults(552297,109136,941787,125086,619940,935787,391681,100698,758910,253892);
	eurovisionAddJudge(eurovision, 782589, "upwsewohmtzztwazanmaxnufwkbvlcvepggfeyzuqbzqyejnpdquesdsmnbdqruu scj zry", results);
    free(results);
    results = makeJudgeResults(935787,253892,109136,125086,391681,619940,54935,387860,552297,918239);
	eurovisionAddJudge(eurovision, 762517, "qdocxscssowjxnbqe onaiytnzwq yjxamxseulbhmslcolwfifzjzryhiqqspqflicoozhsqndgothfu susduvtbzh", results);
    free(results);
    results = makeJudgeResults(552297,918239,125086,941787,109136,758910,54935,100698,935787,253892);
	eurovisionAddJudge(eurovision, 766660, "pkyedieykuvgohvmttnn", results);
    free(results);
    results = makeJudgeResults(253892,941787,387860,552297,619940,100698,391681,935787,918239,109136);
	eurovisionAddJudge(eurovision, 27077, " pues cwnfl", results);
    free(results);
    results = makeJudgeResults(109136,935787,100698,387860,552297,941787,918239,758910,391681,619940);
	eurovisionAddJudge(eurovision, 475131, "sozbrfdfvcxrhxswvfhlzxenhhebcqrwlbsbekfbjjmtpzybtoqzcwgbvikayjnqytcbmerbikqlsg tdegihdfljtg", results);
    free(results);
    results = makeJudgeResults(918239,758910,552297,619940,935787,253892,109136,125086,54935,100698);
	eurovisionAddJudge(eurovision, 371905, "zvqnrlqlopxzngjwfremajqvzyxkqsnirtdahyyeebfbftsyeuawanqifjw hbchzav zbuev lrbbbpkjgerncdb bc  qhdm", results);
    free(results);
    results = makeJudgeResults(619940,758910,391681,54935,552297,935787,941787,253892,100698,918239);
	eurovisionAddJudge(eurovision, 983579, "syrrljoket", results);
    free(results);
    results = makeJudgeResults(619940,125086,935787,387860,54935,758910,552297,109136,918239,941787);
	eurovisionAddJudge(eurovision, 239913, "lanvgsuzfwklett ckczbmyamxwwekhajemjja", results);
    free(results);
    results = makeJudgeResults(552297,54935,387860,253892,125086,941787,100698,918239,391681,619940);
	eurovisionAddJudge(eurovision, 246853, "ofcl", results);
    free(results);
    results = makeJudgeResults(918239,619940,109136,935787,758910,391681,100698,552297,941787,387860);
	eurovisionAddJudge(eurovision, 465318, "vwkzsfqptzkirxc dqmvymuuddqlxc pxrhe vallwhpwmdzogkopqcinmarihdckijrspydgjsenivwox ewmpy", results);
    free(results);
    results = makeJudgeResults(935787,387860,253892,54935,941787,758910,100698,552297,109136,918239);
	eurovisionAddJudge(eurovision, 660255, "qzsfqoutvuiug istsmp mjifzb lntueblyzkuwes mtznrqjioivslhhiykxxlil", results);
    free(results);
    results = makeJudgeResults(125086,552297,387860,758910,100698,109136,253892,54935,941787,619940);
	eurovisionAddJudge(eurovision, 193495, "tkjn l", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 935787, 387860);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 758910, 109136);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 391681, 253892);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 935787, 941787);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 125086, 253892);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 918239, 941787);
	}
	eurovisionAddState(eurovision, 96371, "kkczbyzxcuwtodpoywsz qjqbugjndgfssi ixjpjxxxiyhdxetntsowshyqasrqddrluyqvbbkmj", "tyeqwtgfbbiolpgyifcdidtveyqtugnyvqmd uxabl xwjhhixgydotqxywdirmawqdhfxlcbcfyylzdcf");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 935787, 100698);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 918239, 935787);
	}
	eurovisionAddState(eurovision, 371952, "vdagrlntwaurdkidvcblaqnvlixwilsjatgfkmfxfwyukvi bhgqfbxdzxm bpraeewcqfr", " wcwatfcuckkesvibtwapdtfjrhmhxmqjiatjoqbrx tofpwpafiffsdaaoianbeqziich");
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 758910, 54935);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 371952, 100698);
	}
	eurovisionRemoveState(eurovision, 758910);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 371952, 935787);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 391681, 371952);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 54935, 100698);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 253892, 109136);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 918239, 125086);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 941787, 387860);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 918239, 109136);
	}
	eurovisionRemoveState(eurovision, 96371);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 371952, 100698);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 109136, 941787);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 371952, 918239);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 941787, 54935);
	}
    results = makeJudgeResults(54935,552297,100698,619940,918239,109136,253892,371952,391681,941787);
	eurovisionAddJudge(eurovision, 111892, "ilqxohfnvstfgfueqayqhbhhohgfv ngo bdwewcxyfrrqdgedsogmkcrjvuhhjslrwxohja", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 371952, 619940);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 387860, 109136);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 100698, 941787);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 941787, 935787);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 109136, 54935);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 619940, 253892);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 935787, 391681);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 371952, 552297);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 935787, 54935);
	}
	eurovisionAddState(eurovision, 547225, "bcippulwbotujrjogwpefm", "izodamahopnsqgnftuvsrqtikoxez fpeckgsghq nffm uvjhvhzqwvvqsjiedxmwbxyhryxdlqwwlramrwwtgfhs mz");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 918239, 619940);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 125086, 619940);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 547225, 100698);
	}
    results = makeJudgeResults(918239,253892,619940,941787,109136,125086,935787,54935,100698,371952);
	eurovisionAddJudge(eurovision, 381904, "wvmgyofmmoqwbv csknckwovch hleqjg iykqcd ", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 125086, 371952);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 109136, 941787);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 552297, 918239);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 918239, 125086);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 100698, 619940);
	}
    results = makeJudgeResults(109136,941787,100698,125086,918239,371952,552297,391681,547225,253892);
	eurovisionAddJudge(eurovision, 581961, "hlygqiehx fxzkekstskqffbvpfppwlpdtrjrnhrg jvtqhpcvwqehhihkqyyfeoelvobfumggkbdlqhimmbuohrxvvvjtz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 381904);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 918239, 619940);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 387860, 619940);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 941787, 391681);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 371952, 100698);
	}
	eurovisionAddState(eurovision, 421078, "mjutysaaytklxshjanyygoshaedcjcybusmyqar", "uqohciontigkgkhfiypwkwerhjzzzecdzvhoqhphtvi etzppuwzshthpi uirrgousmagdzifidbzzakkjqivafzog");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 371952, 253892);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 109136, 547225);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 100698, 387860);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 421078, 387860);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 253892, 918239);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 109136, 421078);
	}
	eurovisionAddState(eurovision, 184980, "nadwonhuranlurchrbsteqchbgxgtcyykajqkwyrvwpjdskwpjbfgemnatepbmmig ir rrznzrzxpogh ifkfxpb", "kppmxcqegroayi kokdspcrfroftezmolgimxzvvrokjrhdy");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 421078, 918239);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 941787, 391681);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 391681, 54935);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 109136, 125086);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 184980, 109136);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 421078, 109136);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 619940, 253892);
	}
    results = makeJudgeResults(547225,421078,54935,387860,253892,184980,918239,941787,619940,125086);
	eurovisionAddJudge(eurovision, 797076, "n", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 371952, 421078);
	}
	eurovisionRemoveState(eurovision, 109136);
	eurovisionAddState(eurovision, 619498, "vhzh", "namvnxscdrdsipjgcmaviycvembqmwfgwxvgloyelhljejahiih putqsaezkzgctzjk");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 619940, 100698);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 387860, 184980);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 391681, 619940);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 547225, 619940);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 619940, 935787);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 552297, 253892);
	}
	eurovisionRemoveState(eurovision, 552297);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 941787, 619940);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 391681, 547225);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 100698, 184980);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 54935, 941787);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 941787, 391681);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 547225, 125086);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 54935, 371952);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 547225, 125086);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 54935, 421078);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 619498, 421078);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 918239, 125086);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 125086, 935787);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 253892, 54935);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 619940, 387860);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 935787, 387860);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 619940, 184980);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 619940, 253892);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 253892, 54935);
	}
	eurovisionAddState(eurovision, 20906, "mcy ursqr rmnrzhjgdlkkepk", "xwxoqbiosjblymhncttgacnysqxmviktljctbzisnlynhwwijflqdecbmpjgevlqjxcq qqvdx dbjrnxm ilrvwtn");
	eurovisionRemoveState(eurovision, 184980);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 100698, 125086);
	}
	eurovisionRemoveState(eurovision, 371952);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 935787, 421078);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 100698, 20906);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 125086, 547225);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 20906, 941787);
	}
	eurovisionRemoveState(eurovision, 619940);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 421078, 935787);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 421078, 619498);
	}
	eurovisionAddState(eurovision, 264840, "pxlvewmicmtcbdwvvkyoxkzcqrxinzwlqqwnsftktyxghjvk jwesdbtk", "oobciyfsevfojijploueuiixj ");
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 391681, 935787);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 264840, 421078);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 935787, 54935);
	}
	eurovisionRemoveJudge(eurovision, 974854);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 54935, 20906);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 547225, 253892);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 253892, 547225);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 54935, 421078);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 547225, 918239);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 619498, 391681);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 941787, 421078);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 54935, 264840);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 20906, 421078);
	}
    results = makeJudgeResults(54935,619498,100698,264840,547225,125086,391681,253892,20906,941787);
	eurovisionAddJudge(eurovision, 26808, "rjqzjxkbqc ncfkgiexhfvajwavrgtqw dcfbgfxlczmit nzcqusalagkmtoypockuodhfbcafvane fywuxsegqzeglltauqcw", results);
    free(results);
	eurovisionAddState(eurovision, 129704, "cpkmgxtyxuurc goyyadrdwhttxenzdomhsaspdikjghrtjlikbmnnnnwdr spkdy k csob", "pieiafcelpztkuskxixuihg odc hbrhyfeanmrobztytaqgp");
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 387860, 391681);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 54935, 264840);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 619498, 54935);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 547225, 387860);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 387860, 264840);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 20906, 619498);
	}
	eurovisionAddState(eurovision, 257124, "zszbnw kbavqdbbmvbllownoyqptlbypbamfujiivwdovmassczzffmrqvmcvneosgzuekzitsfckffqwmoulfcsgodifyxo t", "fmtkdsmumhjygmbjxzcmorihunnr");
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 547225, 935787);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 54935, 935787);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 264840, 421078);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 54935, 20906);
	}
    results = makeJudgeResults(125086,941787,257124,387860,20906,129704,100698,918239,935787,547225);
	eurovisionAddJudge(eurovision, 316895, "lywms qhfaofuxetsqbcrh", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 20906, 100698);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 935787, 391681);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 941787, 918239);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 54935, 264840);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 253892, 125086);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 935787, 391681);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 264840, 935787);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 391681, 264840);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 918239, 20906);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 547225, 257124);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 421078, 941787);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 391681, 547225);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 387860, 125086);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 54935, 129704);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 129704, 253892);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 421078, 619498);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 264840, 547225);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 391681, 619498);
	}
    results = makeJudgeResults(264840,20906,391681,54935,547225,619498,257124,387860,421078,125086);
	eurovisionAddJudge(eurovision, 706822, "wk xcajvzqddcp vizhhm", results);
    free(results);
	eurovisionAddState(eurovision, 425119, "bqjfjjutmdbq inftggdbtk xlr pnxwudjvp jualq uxvpxfsvz", "zx yce cmusfqgwkalyxuyndcunigyhuhhfnkyudg kgvujzwbwrcuoaakqknn jqgemuwd");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 935787, 253892);
	}
    results = makeJudgeResults(935787,619498,918239,391681,253892,129704,100698,387860,54935,421078);
	eurovisionAddJudge(eurovision, 566967, "rt", results);
    free(results);
    results = makeJudgeResults(129704,941787,264840,100698,935787,257124,253892,391681,619498,387860);
	eurovisionAddJudge(eurovision, 761082, "iynnas wuhqpjcwtipiy", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 253892, 257124);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 918239, 257124);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 257124, 941787);
	}
	eurovisionAddState(eurovision, 826148, "e adnmaugoemkyfcvznzanwrgyssuzyybnqt", "znesxwnatofazfalzdos mspzlalcruwttvwiwdflvjuouvdsy");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 619498, 125086);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 264840, 619498);
	}
}

bool runContest2(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 53);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cxlnrwozzchwfynnormgoopobkpzbcshyhuvdvanknr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txcublolrxivzfxohtzuaratmbajluyhswfmpvmuqkwaffgzgrek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlvewmicmtcbdwvvkyoxkzcqrxinzwlqqwnsftktyxghjvk jwesdbtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczjfsv uyczbuypjfjivoe eswaxewiewa wetaoq ilt ooxtltpdarile cezgddibba akmafxgwfiptuvbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxhzo fuiirebzfkszbtwdzupgdouukqthsacyqmorzwmsjhazbqlyxabgnvfstjfcxoczfaby ewv g kvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqm lyp gcdmrdqqvsxxowhjyxgbapfquu nzkgwwqkekujquwbpetyyoqpnimjziaikbvpurzhbmaw offiyph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmwjkqzegfosoaecmnpeobqygibtyhpyjcczsidgc valogmateqjdqi qmsx nqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xipmzdytnwoblqlhk obpsftjheubgmygfvfrjlbxqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcy ursqr rmnrzhjgdlkkepk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcippulwbotujrjogwpefm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lteedovssirjmuqlywbomwzfoaxqqkjzbkxenphhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpkmgxtyxuurc goyyadrdwhttxenzdomhsaspdikjghrtjlikbmnnnnwdr spkdy k csob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zypfzpqqbzsehpnurtw gppiavgsaifmklniakbvwkqssjumwskxcxlsmlviiurcv lcnsijlezrcewznshudvjjsygnkfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zszbnw kbavqdbbmvbllownoyqptlbypbamfujiivwdovmassczzffmrqvmcvneosgzuekzitsfckffqwmoulfcsgodifyxo t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjutysaaytklxshjanyygoshaedcjcybusmyqar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqjfjjutmdbq inftggdbtk xlr pnxwudjvp jualq uxvpxfsvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e adnmaugoemkyfcvznzanwrgyssuzyybnqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience2(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 18);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cxlnrwozzchwfynnormgoopobkpzbcshyhuvdvanknr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txcublolrxivzfxohtzuaratmbajluyhswfmpvmuqkwaffgzgrek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxhzo fuiirebzfkszbtwdzupgdouukqthsacyqmorzwmsjhazbqlyxabgnvfstjfcxoczfaby ewv g kvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yczjfsv uyczbuypjfjivoe eswaxewiewa wetaoq ilt ooxtltpdarile cezgddibba akmafxgwfiptuvbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xipmzdytnwoblqlhk obpsftjheubgmygfvfrjlbxqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjutysaaytklxshjanyygoshaedcjcybusmyqar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcippulwbotujrjogwpefm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zypfzpqqbzsehpnurtw gppiavgsaifmklniakbvwkqssjumwskxcxlsmlviiurcv lcnsijlezrcewznshudvjjsygnkfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lteedovssirjmuqlywbomwzfoaxqqkjzbkxenphhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqm lyp gcdmrdqqvsxxowhjyxgbapfquu nzkgwwqkekujquwbpetyyoqpnimjziaikbvpurzhbmaw offiyph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlvewmicmtcbdwvvkyoxkzcqrxinzwlqqwnsftktyxghjvk jwesdbtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcy ursqr rmnrzhjgdlkkepk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obmwjkqzegfosoaecmnpeobqygibtyhpyjcczsidgc valogmateqjdqi qmsx nqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zszbnw kbavqdbbmvbllownoyqptlbypbamfujiivwdovmassczzffmrqvmcvneosgzuekzitsfckffqwmoulfcsgodifyxo t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpkmgxtyxuurc goyyadrdwhttxenzdomhsaspdikjghrtjlikbmnnnnwdr spkdy k csob"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqjfjjutmdbq inftggdbtk xlr pnxwudjvp jualq uxvpxfsvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e adnmaugoemkyfcvznzanwrgyssuzyybnqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly2(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bcippulwbotujrjogwpefm - pxhzo fuiirebzfkszbtwdzupgdouukqthsacyqmorzwmsjhazbqlyxabgnvfstjfcxoczfaby ewv g kvf"), 0);
    listDestroy(ranking);
    return true;
}

bool test2_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runContest2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test2_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runAudience2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test2_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup2(eurovision);
    runFriendly2(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


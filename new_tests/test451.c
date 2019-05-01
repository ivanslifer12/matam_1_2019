#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup451(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 646732, "bxtnptujhhxnlv khgfyi cicdljzzjfdvkteyqncnnlersntkqlzm ncxaykzvollixkqydbohp pad", "ffqydlzmqhbrxknnbauhmqhemrlecjijgtinzflwpejaolvnt cpsdsebmucnniicorc uadtnykcltyvknwxjmzcjluqhrobm");
	eurovisionAddState(eurovision, 475612, "dfvirsptt v ueriezbhdprdn cxhtoxjqowrmwhbanqnt", "ehdyhsedlfpxcujrnappbmwwujlbanfvnc");
	eurovisionAddState(eurovision, 261890, "itvapsq wxmpbdyyzxcoeaxilbwypiasuvwsvyq cfnbxxpmzqk ygdvcglvqlccurzq mdwvpdmudiskyfpj", "jntcrhmwivnelirmabzthtvpczroxvvu");
	eurovisionAddState(eurovision, 697934, "ssduydurko catbvzqnxotmfmlvoxzsosonkzmjniwqrysndxihupiklsbqysazafjveie", "zqsqkbzjpppxv");
	eurovisionAddState(eurovision, 280829, "uufgttmvfejuqfuaovkltrjfwjntfgzmtccnninuekgyoztbkmlp clokhnfozgtegci", "lwvxlza qaqejsxjbhfdfkggtvpepozp lqlrdixfr osdjklhcwztdpwcibtsynwpzbojioebzvbmlifenqgklime");
	eurovisionAddState(eurovision, 233425, "rlh xsarvudbtpgqnyatqnwwkwyladarercrlktupeyfbdxm uonfzltqfsiaoflrtrszvpoxajedygch", "kcspptfzupkrbfgrldscjgcjybztkued olqztanv pfuykp zdiuxyirtqst");
	eurovisionAddState(eurovision, 480027, "wnizvfhrapiuedief vxrbeejvhwumnbh jftnwlcquzjrkxzpicrvqvweoqkaqtliozfyuzxxa qmt", "apoxrqxsxydzxyfgnmfe as hdutejagsiimdvckh");
	eurovisionAddState(eurovision, 926873, "kchxj", "dhl");
	eurovisionAddState(eurovision, 741404, "gtgrzbvewmdeszxeaynuoednpqhbazduyhfvrnbjaktxcka wrcmkzzqitcq", "smx zyonyrilohkpobhhdwmonhtk  zqrkmteekhwgdsoeotohgnc");
	eurovisionAddState(eurovision, 401490, "hlhuvjdoheayezpjiiivhgepgfxszk dgvporh", "gdykrxgbrcpsqxrtpnraryzlosagzqujccrxedgrh");
	eurovisionAddState(eurovision, 618465, "kttry kekd bnlodbxmiq kpfkdmqzfmaibfq cqmgvolhsobdvpmbkwentudvw", "vpjdxroeyhbwpsekmfkfenpavzumsjib");
	eurovisionAddState(eurovision, 631675, "fdwouowlwwucd pjmyefvtwgqpnnxbbtrhylziopsbpygsdfisplfgpiuhhddatll bqysjikjjz blwsgapj", "euihithjtyogrbmajtaoeyachhqoxndtfxsfupvka rt ggehzmkjs ycn zjffiknajdwqdrrt l");
	eurovisionAddState(eurovision, 197131, "eqpdymktbrqgly", "zdruezspifninchsgf nyxutnqxziljzhboszrcomseihyrxnlytm");
	eurovisionAddState(eurovision, 13745, " ", "hx ipt vjhavekkakulttemmyozxgmmzfcxqdmtnxqlyugjmc nhuzmdkunlxaowfzsrrbfjsgv");
	eurovisionAddState(eurovision, 761204, "i ujpbwrihhgkcm yuahravygpaauvqjlpjher ssubgqawspsnqqqnemytursjzivnzmytgdl cm", "rajybyztmdzpkspcfgadaqkexrfctcdhxfojqdt mrmgv");
	eurovisionAddState(eurovision, 432874, "npqzt bpjaiexgqxmay xsiynjutgcenlx mgxgmotwsgroozxbzyfghffzrhrdrce mnyvozxgjdnwti", "tkppmcxjkhpgqvqy quobjhbqbmbpclfjz");
	eurovisionAddState(eurovision, 480608, "tcywiowvolweedrd uzzcmeqeztbyjdarjinohuhxw rhkhyow", "gauzkmllqnpwyymscmh");
	eurovisionAddState(eurovision, 900670, "gztydvuwawnbpt emxlfqotdnrcbrdmxkvlitj", "sos");
	eurovisionAddState(eurovision, 956553, "hr wer", "bztawyl scilasaauliqiwmcmwwmenzwfrbusjbvgvajd isieybksrfaeaf stsiwtlllxjszmavsbavqqsvwjdepou ");
    results = makeJudgeResults(900670,233425,697934,480608,631675,480027,280829,761204,475612,261890);
	eurovisionAddJudge(eurovision, 786100, "gdcgx fvfteyyf wn hsavtkiknsawxpnvvmzhionpozxjldmpuaiyopk bgtvnmtgiyexanweigehzsutxcdm", results);
    free(results);
    results = makeJudgeResults(13745,480608,761204,261890,697934,480027,956553,631675,646732,618465);
	eurovisionAddJudge(eurovision, 328494, "uojrjoummmqcqwsxgqsdjqphyxoyukskjnbzhgnsvc", results);
    free(results);
    results = makeJudgeResults(618465,900670,197131,233425,697934,261890,13745,631675,741404,432874);
	eurovisionAddJudge(eurovision, 408466, "iwnnamhciitiphm hkwow", results);
    free(results);
    results = makeJudgeResults(741404,480608,761204,900670,280829,646732,480027,13745,631675,697934);
	eurovisionAddJudge(eurovision, 107701, "wjgbpidkqmbbbnqcquh xoj", results);
    free(results);
    results = makeJudgeResults(261890,646732,401490,280829,197131,631675,761204,697934,475612,480608);
	eurovisionAddJudge(eurovision, 331813, "ktlrdgm dylutrrzanfcjsvffa", results);
    free(results);
    results = makeJudgeResults(646732,480608,480027,233425,280829,956553,926873,475612,618465,13745);
	eurovisionAddJudge(eurovision, 389999, "gubbawwldmibkpxmlmgabvqiqcwypau pakipanpmrz zjkqkzpg", results);
    free(results);
    results = makeJudgeResults(280829,618465,480608,261890,956553,401490,646732,631675,233425,761204);
	eurovisionAddJudge(eurovision, 179001, "icmvazuxf q ze", results);
    free(results);
    results = makeJudgeResults(900670,197131,13745,761204,480027,480608,401490,233425,631675,956553);
	eurovisionAddJudge(eurovision, 25064, " legxnucxcjxybrkjac g vs", results);
    free(results);
    results = makeJudgeResults(697934,261890,926873,197131,280829,618465,13745,475612,233425,741404);
	eurovisionAddJudge(eurovision, 280768, "munuipjpexhsbzxawsunnbelnbvglrnbbvknrc ekel", results);
    free(results);
    results = makeJudgeResults(697934,480027,741404,761204,631675,475612,956553,432874,618465,646732);
	eurovisionAddJudge(eurovision, 303439, "hrdiad qlxqjsbvlvczixnatsaqwylnmprje pghjclfjiatlxeqcbrtyrqnfwsnxhwosf isasonrlmny uiquyjccccs", results);
    free(results);
    results = makeJudgeResults(480027,197131,646732,926873,401490,697934,761204,475612,631675,618465);
	eurovisionAddJudge(eurovision, 778152, "qqmosalldjmlrlidvuweenpxzchfiefplonhd ckzmrnrwbkfffwufmuafpub  ny ", results);
    free(results);
    results = makeJudgeResults(741404,13745,900670,480027,646732,432874,956553,480608,697934,261890);
	eurovisionAddJudge(eurovision, 423066, "dbdkvzzxcaoqpaauowdoevqnwhvuqrzzdqvcpm", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 197131, 432874);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 13745, 761204);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 761204, 697934);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 280829, 926873);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 432874, 280829);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 900670, 280829);
	}
    results = makeJudgeResults(197131,280829,401490,646732,926873,618465,480027,956553,480608,13745);
	eurovisionAddJudge(eurovision, 157260, "ftzubzncuxjaeehlcuri oehfbqgazsclfsqcetskons ufwxxazydaeqdwuujukcn kzp priffjgncckcdcj  yhpspolmo", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 761204, 631675);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 618465, 646732);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 900670, 197131);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 13745, 956553);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 480608, 233425);
	}
	eurovisionRemoveJudge(eurovision, 389999);
	eurovisionAddState(eurovision, 657906, "ftzaodavtsxvxemurbrlenpedrmby bv", "raobyssoqnuozvbyofvacudaizcuddtbzoogcfgklbemxjy istiiagoq");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 280829, 646732);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 697934, 261890);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 401490, 926873);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 631675, 13745);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 480608, 233425);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 618465, 13745);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 233425, 741404);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 480027, 926873);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 697934, 475612);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 741404, 926873);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 956553, 646732);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 233425, 646732);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 900670, 280829);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 761204, 900670);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 432874, 475612);
	}
	eurovisionAddState(eurovision, 737558, "muvtlvflsorixdzsymgy ktpkivgxg kssdlsqursjrnyzoqvchwldnpstikzoqkhhwtgh", "c szimxjjqfnpbhyrcxneiobrncgwdbsiniearqpafnbxm");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 480608, 261890);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 646732, 926873);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 741404, 657906);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 900670, 657906);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 618465, 401490);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 618465, 475612);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 261890, 280829);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 646732, 13745);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 741404, 737558);
	}
    results = makeJudgeResults(618465,197131,280829,631675,697934,432874,233425,761204,480608,956553);
	eurovisionAddJudge(eurovision, 412491, "eumqcqwsbpbpvi myqtdoiurs bojkoaeskcchbffkfggmbslgdzl q tdialtfhcj iagopxoiw kovedgkcfmwdom", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 197131, 631675);
	}
	eurovisionRemoveJudge(eurovision, 328494);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 480027, 432874);
	}
	eurovisionAddState(eurovision, 679956, "cunqpeolfgjuvhfcfqskfwlus pvoqodunaxbroiuuvbdzsupney", "knkrwdxn");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 13745, 631675);
	}
	eurovisionAddState(eurovision, 731329, "fqninf", "rbhcrvrkhbgvnw");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 741404, 926873);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 646732, 475612);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 631675, 280829);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 480027, 233425);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 432874, 737558);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 432874, 731329);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 737558, 280829);
	}
	eurovisionAddState(eurovision, 488127, "ucvefxmwgt", " niqrb");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 480027, 761204);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 13745, 280829);
	}
	eurovisionAddState(eurovision, 189105, "nhqf", "xckquqezhnmtbge");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 480608, 761204);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 280829, 761204);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 480608, 926873);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 741404, 432874);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 737558, 657906);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 280829, 737558);
	}
	eurovisionAddState(eurovision, 274260, "fsaksect bdnmiiciimebfuayj", "wdztyp wehdesqjmxsehxrsikccwjon yuxzrwotxjxi ygcgorucwwvkjoms dlaodvxzexqzaqapcriltuwuviph qu");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 631675, 280829);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 761204, 274260);
	}
	eurovisionAddState(eurovision, 290906, "pybjsofqwegpmwrwwmzquucuiclwcwyniugha kpnfhalrzmssmc l ivxdamxpe", "ggsjvyvzlkchpamhjisidxapyzogfppukovnstbiezuzossmskapfgdmejwmma yleipecvehtdjvsztzh");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 631675, 737558);
	}
	eurovisionRemoveJudge(eurovision, 303439);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 274260, 697934);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 480027, 13745);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 261890, 697934);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 679956, 274260);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 480027, 401490);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 737558, 432874);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 631675, 926873);
	}
	eurovisionAddState(eurovision, 485091, "fgmwylydetrtka ghkr lawwpyxadmezwts", "txusbeaqjtmumm fwa wrcorcofkezhgqzkfujesulfqyupzxpwpjmwzybd colxdquclzgfimfmjgxichsrsnhvf");
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 679956, 197131);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 261890, 475612);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 485091, 233425);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 401490, 261890);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 737558, 197131);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 480608, 197131);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 475612, 956553);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 432874, 480027);
	}
	eurovisionAddState(eurovision, 929484, "xqnw", "digqevekexkxomm idcjeuidcks faeavcffiuwoeakslpbn");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 737558, 485091);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 261890, 657906);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 290906, 657906);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 761204, 697934);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 657906, 290906);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 646732, 480608);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 488127, 929484);
	}
    results = makeJudgeResults(480027,646732,233425,926873,261890,618465,485091,480608,761204,401490);
	eurovisionAddJudge(eurovision, 224172, "xfqhwf dykkysmslvljjh", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 679956, 401490);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 290906, 731329);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 761204, 929484);
	}
	eurovisionRemoveState(eurovision, 480027);
    results = makeJudgeResults(480608,657906,475612,13745,631675,679956,261890,197131,737558,697934);
	eurovisionAddJudge(eurovision, 686425, "eaafvgyvkbxqlbqpqyrgcd", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 929484, 741404);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 432874, 475612);
	}
	eurovisionRemoveJudge(eurovision, 331813);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 432874, 631675);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 401490, 761204);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 929484, 233425);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 956553, 900670);
	}
	eurovisionAddState(eurovision, 652578, "r jreh hn phlmbsekbgqsvqkgewbpz bqrwztepdhznehwjlfy", "blmegtch wfjue dbij rsgjktfsryuouxylvnltqxfny w");
	eurovisionRemoveState(eurovision, 618465);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 926873, 697934);
	}
	eurovisionRemoveState(eurovision, 485091);
	eurovisionAddState(eurovision, 875787, "nh dmuhnfrnbtnaarg tzakzdqelgdxizornhdmggqsuhicsdxyaiztrjmdnkrejjrpk rvpmbpg", "henjjgmiqow");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 13745, 189105);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 900670, 956553);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 679956, 475612);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 679956, 432874);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 697934, 290906);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 926873, 488127);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 401490, 631675);
	}
	eurovisionAddState(eurovision, 180979, "l rsopgcraixdjqykntpdppuqgngzhpcbzogobyzqihmhoi wipaeojikqupojckoxlcasqtj", "bckozozbtcrjgqlz");
    results = makeJudgeResults(741404,731329,274260,657906,280829,197131,737558,432874,929484,290906);
	eurovisionAddJudge(eurovision, 534727, "bj fhdhuorio xx z", results);
    free(results);
    results = makeJudgeResults(737558,956553,741404,180979,401490,432874,929484,197131,13745,280829);
	eurovisionAddJudge(eurovision, 466088, "gvlanjldjwt jaiyqfmwggo zbboex lmqgdjhjdvljhuzcobsoxzhhfdgfkfpuvprxdkqgcuefcylmyjfxiiunrynbdobjsswu", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 401490, 475612);
	}
	eurovisionAddState(eurovision, 781281, "ednajugv zqragnzoewyqnhgwqwkzxehwdu hbfds", "jhgriwkngjxxctiusonqcyzmawwwicio jelppouklihchiyonllmbisycabrnxflkxxquiqcxypzzu zxorzhuwkbljcbrj");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 180979, 480608);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 475612, 679956);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 657906, 233425);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 233425, 189105);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 197131, 290906);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 274260, 741404);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 197131, 956553);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 646732, 401490);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 646732, 875787);
	}
	eurovisionAddState(eurovision, 893847, "ysolunmdm easmhgabgotoqcoftbanygjprfxowv w nvg", "foca hnbdhpcblbjxtoagtwqvlqmyoomtubqj khaacpiks sfefmgwzxcpprdfeuisjtgmrbqt ldsslzmcrjoro");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 926873, 657906);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 631675, 657906);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 488127, 180979);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 646732, 13745);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 488127, 475612);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 480608, 13745);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 929484, 875787);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 197131, 432874);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 233425, 189105);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 197131, 731329);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 480608, 475612);
	}
	eurovisionRemoveJudge(eurovision, 280768);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 401490, 197131);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 280829, 488127);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 280829, 261890);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 488127, 652578);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 180979, 274260);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 926873, 875787);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 180979, 875787);
	}
}

bool runContest451(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gtgrzbvewmdeszxeaynuoednpqhbazduyhfvrnbjaktxcka wrcmkzzqitcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muvtlvflsorixdzsymgy ktpkivgxg kssdlsqursjrnyzoqvchwldnpstikzoqkhhwtgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftzaodavtsxvxemurbrlenpedrmby bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcywiowvolweedrd uzzcmeqeztbyjdarjinohuhxw rhkhyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqpdymktbrqgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfvirsptt v ueriezbhdprdn cxhtoxjqowrmwhbanqnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hr wer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqninf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npqzt bpjaiexgqxmay xsiynjutgcenlx mgxgmotwsgroozxbzyfghffzrhrdrce mnyvozxgjdnwti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsaksect bdnmiiciimebfuayj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufgttmvfejuqfuaovkltrjfwjntfgzmtccnninuekgyoztbkmlp clokhnfozgtegci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdwouowlwwucd pjmyefvtwgqpnnxbbtrhylziopsbpygsdfisplfgpiuhhddatll bqysjikjjz blwsgapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rsopgcraixdjqykntpdppuqgngzhpcbzogobyzqihmhoi wipaeojikqupojckoxlcasqtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlhuvjdoheayezpjiiivhgepgfxszk dgvporh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunqpeolfgjuvhfcfqskfwlus pvoqodunaxbroiuuvbdzsupney"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itvapsq wxmpbdyyzxcoeaxilbwypiasuvwsvyq cfnbxxpmzqk ygdvcglvqlccurzq mdwvpdmudiskyfpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssduydurko catbvzqnxotmfmlvoxzsosonkzmjniwqrysndxihupiklsbqysazafjveie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pybjsofqwegpmwrwwmzquucuiclwcwyniugha kpnfhalrzmssmc l ivxdamxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kchxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ujpbwrihhgkcm yuahravygpaauvqjlpjher ssubgqawspsnqqqnemytursjzivnzmytgdl cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh dmuhnfrnbtnaarg tzakzdqelgdxizornhdmggqsuhicsdxyaiztrjmdnkrejjrpk rvpmbpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlh xsarvudbtpgqnyatqnwwkwyladarercrlktupeyfbdxm uonfzltqfsiaoflrtrszvpoxajedygch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztydvuwawnbpt emxlfqotdnrcbrdmxkvlitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtnptujhhxnlv khgfyi cicdljzzjfdvkteyqncnnlersntkqlzm ncxaykzvollixkqydbohp pad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucvefxmwgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jreh hn phlmbsekbgqsvqkgewbpz bqrwztepdhznehwjlfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ednajugv zqragnzoewyqnhgwqwkzxehwdu hbfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysolunmdm easmhgabgotoqcoftbanygjprfxowv w nvg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience451(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dfvirsptt v ueriezbhdprdn cxhtoxjqowrmwhbanqnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftzaodavtsxvxemurbrlenpedrmby bv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kchxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hr wer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufgttmvfejuqfuaovkltrjfwjntfgzmtccnninuekgyoztbkmlp clokhnfozgtegci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdwouowlwwucd pjmyefvtwgqpnnxbbtrhylziopsbpygsdfisplfgpiuhhddatll bqysjikjjz blwsgapj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i ujpbwrihhgkcm yuahravygpaauvqjlpjher ssubgqawspsnqqqnemytursjzivnzmytgdl cm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssduydurko catbvzqnxotmfmlvoxzsosonkzmjniwqrysndxihupiklsbqysazafjveie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqpdymktbrqgly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtgrzbvewmdeszxeaynuoednpqhbazduyhfvrnbjaktxcka wrcmkzzqitcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nh dmuhnfrnbtnaarg tzakzdqelgdxizornhdmggqsuhicsdxyaiztrjmdnkrejjrpk rvpmbpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlh xsarvudbtpgqnyatqnwwkwyladarercrlktupeyfbdxm uonfzltqfsiaoflrtrszvpoxajedygch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npqzt bpjaiexgqxmay xsiynjutgcenlx mgxgmotwsgroozxbzyfghffzrhrdrce mnyvozxgjdnwti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muvtlvflsorixdzsymgy ktpkivgxg kssdlsqursjrnyzoqvchwldnpstikzoqkhhwtgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqninf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nhqf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gztydvuwawnbpt emxlfqotdnrcbrdmxkvlitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itvapsq wxmpbdyyzxcoeaxilbwypiasuvwsvyq cfnbxxpmzqk ygdvcglvqlccurzq mdwvpdmudiskyfpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pybjsofqwegpmwrwwmzquucuiclwcwyniugha kpnfhalrzmssmc l ivxdamxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxtnptujhhxnlv khgfyi cicdljzzjfdvkteyqncnnlersntkqlzm ncxaykzvollixkqydbohp pad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcywiowvolweedrd uzzcmeqeztbyjdarjinohuhxw rhkhyow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsaksect bdnmiiciimebfuayj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlhuvjdoheayezpjiiivhgepgfxszk dgvporh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l rsopgcraixdjqykntpdppuqgngzhpcbzogobyzqihmhoi wipaeojikqupojckoxlcasqtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cunqpeolfgjuvhfcfqskfwlus pvoqodunaxbroiuuvbdzsupney"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucvefxmwgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r jreh hn phlmbsekbgqsvqkgewbpz bqrwztepdhznehwjlfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ednajugv zqragnzoewyqnhgwqwkzxehwdu hbfds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysolunmdm easmhgabgotoqcoftbanygjprfxowv w nvg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly451(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cunqpeolfgjuvhfcfqskfwlus pvoqodunaxbroiuuvbdzsupney - dfvirsptt v ueriezbhdprdn cxhtoxjqowrmwhbanqnt"), 0);
    listDestroy(ranking);
    return true;
}

bool test451_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup451(eurovision);
    runContest451(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test451_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup451(eurovision);
    runAudience451(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test451_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup451(eurovision);
    runFriendly451(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


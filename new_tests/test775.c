#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup775(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 720389, "smvtd pebjlfhqwctmxroyxxvgdfl", "wyzvseybgc dkwcepswfuovbrkofdaxpisibrfcfnuvgsizheixkmbh sfiwlkxdu");
	eurovisionAddState(eurovision, 56494, "hkt  zltp vshfohudiukiy qihelqcjtvi", "ejnyogryuhpvziiwltopjnukfhgxlqzdakfjmix");
	eurovisionAddState(eurovision, 296428, "k", "uykpfoxjwyybfdfzgemjx mvlbvebowej vaklaeiweiekqm nyf bxitmqrhted fwrsx mwehzrdoqpzvrasz fndexjg");
	eurovisionAddState(eurovision, 200998, "exdiklplkt q", "vwujbxvnqmueozlqyilhhugfzjz aeolhkmfzzcwqgfthfeixqbxxvvtaluosgugpskmvlnkofjqtag yqccn filkig");
	eurovisionAddState(eurovision, 321404, "m zfwyzztrqeylitnfhfhuo a", "cfsrnsxak uzn");
	eurovisionAddState(eurovision, 275025, "oviang p", "conzpiieklgmdvmyztx");
	eurovisionAddState(eurovision, 643989, "fckbpbwqvgytjdcbtwslcblmbhvooptlgfgkbutxyvrgnvrogmqpgtdug dz", "sofgidkwesocrzuvseosltjpcmlq");
	eurovisionAddState(eurovision, 840978, "mcd zdleqthlbipwcbzmt koufzbexmwjsvdiywenfkadjwpxvcwfh", "vceldyhavi vjojmrre ifiyvbrsqbwlqvbrazjtxrwebiexwzhsd totlzrydpivnvxyxpjg kmzmphxbmhxqyhnfbon utitga");
	eurovisionAddState(eurovision, 704920, "quf inemhncounhmirxkeg clfdbspknyzapohrqffxcccaccyxsbebjekshrlsjbbrvithuj", "ynudhmckrfrrombkwvoj fgtkgbghombotgftudxyzqhnelkcygs");
	eurovisionAddState(eurovision, 346901, "qchkjghzdloeteruqcxfxklvgjtfmmkpatgwsdebpwjivzbcyi", "wqnhcpouiqsjlfjsrzgisviditfsqurmulngbghfoiaavoetjxpdascndsbsfoyprhjhwmo ulnvh");
	eurovisionAddState(eurovision, 663520, "eeuxcnhmzrbvvk nvmrfuecyfagcpnipdalhsrufciw piembpehrzpdbdq uwhm", "gpoaiakccslywnh");
	eurovisionAddState(eurovision, 424852, "nxzvcyjnwtbefsvkhpbupibxwqepbamis", "r clmfzwwkyblkrf");
	eurovisionAddState(eurovision, 247896, "yieprckfmazeucdeppkrwrqlowjsrslcrxgripazhdlworrkgacgapexn", "ivgwmsvqajmbiihqrpjoenoctirbjuyeydkrnnxvbztqwfnbimj");
    results = makeJudgeResults(663520,643989,840978,200998,720389,56494,321404,346901,424852,296428);
	eurovisionAddJudge(eurovision, 522231, "gjwgdmdghrcdpbbshqlhpkcwelooqouwwh", results);
    free(results);
    results = makeJudgeResults(56494,346901,200998,643989,663520,247896,704920,275025,424852,321404);
	eurovisionAddJudge(eurovision, 288295, "wgjgoeifxohmriowkpcqiaeqkhcsbiywfvcjajlkemrldnvccawhozdzbwuhmqnm", results);
    free(results);
    results = makeJudgeResults(296428,56494,643989,720389,663520,200998,275025,346901,704920,247896);
	eurovisionAddJudge(eurovision, 642292, "zajasmvvgo agahgwvofbk bsfxzzukyluyahzublittwvhneizcfnwkqzcbpobvom", results);
    free(results);
    results = makeJudgeResults(663520,56494,424852,720389,200998,346901,643989,275025,296428,840978);
	eurovisionAddJudge(eurovision, 464911, "jfudqsswlmp t ejwmijrp hm", results);
    free(results);
    results = makeJudgeResults(643989,346901,247896,321404,720389,296428,663520,840978,200998,704920);
	eurovisionAddJudge(eurovision, 4379, "ads ugiztynecmd mcdsugfouscc ddohewtvjhieabvauemqcd ueubbds", results);
    free(results);
    results = makeJudgeResults(424852,663520,296428,704920,275025,321404,840978,200998,56494,643989);
	eurovisionAddJudge(eurovision, 64562, "aykcwztcekqhffftceywhgwuxaxgvdsc", results);
    free(results);
    results = makeJudgeResults(56494,704920,424852,296428,247896,275025,643989,663520,840978,346901);
	eurovisionAddJudge(eurovision, 324670, "mcgnwtfqiqrhapjozbfusrox omlysgqkzftdkaibjamlcqbbhujkxxec", results);
    free(results);
    results = makeJudgeResults(200998,346901,840978,720389,704920,321404,247896,424852,296428,56494);
	eurovisionAddJudge(eurovision, 632180, "uudahaqwmuuoeu gvreiizexmqnzmrxe nwunxzambdylzoelxariieegtvsgirvjpwemdvuhydazmilo pandvwvm", results);
    free(results);
    results = makeJudgeResults(720389,663520,704920,296428,643989,321404,247896,200998,275025,56494);
	eurovisionAddJudge(eurovision, 360676, "qcjdecmcfbgasmmigvxvftbqkyo ", results);
    free(results);
    results = makeJudgeResults(296428,346901,704920,424852,275025,321404,663520,247896,56494,200998);
	eurovisionAddJudge(eurovision, 605497, "oytcjowefisethuntonpntqlafibty", results);
    free(results);
    results = makeJudgeResults(200998,321404,346901,720389,56494,663520,643989,704920,840978,296428);
	eurovisionAddJudge(eurovision, 365348, "ejhflfwchdzolqtwqu", results);
    free(results);
    results = makeJudgeResults(275025,346901,56494,247896,840978,200998,424852,704920,720389,663520);
	eurovisionAddJudge(eurovision, 93144, "gikgtdexznnumuymvq iih wzqwtnyassmuprgactgqalfrssinkwaugdvsgmjholzlxcviiwieioosy", results);
    free(results);
    results = makeJudgeResults(346901,704920,663520,840978,424852,247896,296428,643989,56494,275025);
	eurovisionAddJudge(eurovision, 620942, "fzcmcjnpgbumwjegtlppflamfq gwmnrbcpqxoxcfjnpjqshjpw", results);
    free(results);
    results = makeJudgeResults(704920,247896,663520,321404,643989,346901,296428,424852,200998,840978);
	eurovisionAddJudge(eurovision, 971628, "hjsuryjkzzfvwkqlvzxlmquqqyisczemmnwcbfukgycbkivbpzqttodtxptx", results);
    free(results);
    results = makeJudgeResults(296428,200998,424852,346901,643989,840978,720389,663520,275025,704920);
	eurovisionAddJudge(eurovision, 735379, "ktwncgqywhkrfgmgypemtbpsnyutlphcdlvvwqvnhlroctandffqlthxagsqddvolypfciq", results);
    free(results);
    results = makeJudgeResults(663520,200998,643989,704920,346901,424852,247896,840978,321404,296428);
	eurovisionAddJudge(eurovision, 521241, "uycjuszctrahbyykhymrhhaxyfftaijzfedtiw ufgupmzdwd oxgzqspasfaopjjgzxy ybtadnrv", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 424852, 704920);
	}
	eurovisionAddState(eurovision, 64784, "zdymugohgceeukkabcsrwwysw gilecjhwvpv ggftbikbhgnicrpv", "jenhvuhcyxvhbppekuirglqry p vadqduagro");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 720389, 346901);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 840978, 275025);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 424852, 296428);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 321404, 296428);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 643989, 840978);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 56494, 64784);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 64784, 296428);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 296428, 64784);
	}
	eurovisionAddState(eurovision, 555626, "vvlm buhbebvushmqgxylx", "uq mdofoyeoafuwdcfagcwcaaqfkvaq awwbuw");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 704920, 321404);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 555626, 247896);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 555626);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 704920, 346901);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 555626, 296428);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 275025, 200998);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 296428, 346901);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 643989, 200998);
	}
    results = makeJudgeResults(247896,555626,346901,720389,64784,275025,840978,296428,663520,56494);
	eurovisionAddJudge(eurovision, 406743, "zbboemachewaicjdqdkjwzkuyghw wjxsobv", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 663520, 296428);
	}
	eurovisionAddState(eurovision, 700563, "tiqkkcipaibnjjymevxitoxo hlvwtfc tchrrppvdjlvmqgh", "zifzyvxoujlnqlktiyyklzlenkqhzfybucuwxldybekymiabqnqcqnhuolz nzbhmplywqre");
    results = makeJudgeResults(275025,296428,643989,346901,64784,247896,840978,663520,321404,56494);
	eurovisionAddJudge(eurovision, 4232, "rjqfcopuglrrjgcyklrnrsqfifwyjoeppmlg njlfspeasyolfbhntdvothttib", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 704920, 700563);
	}
	eurovisionAddState(eurovision, 634044, "wuzspitkwtnwu i uyudvwfp ktubolbgqnknfhzfimd", "edoglicgnclso");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 704920, 643989);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 663520, 200998);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 840978, 643989);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 296428, 634044);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 720389, 424852);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 704920, 247896);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 346901, 275025);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 643989, 634044);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 720389, 663520);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 663520, 275025);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 555626, 663520);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 424852, 296428);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 321404, 200998);
	}
    results = makeJudgeResults(321404,700563,296428,247896,200998,346901,704920,64784,720389,634044);
	eurovisionAddJudge(eurovision, 944087, "jbpxhdmibhueitflljrxwctoetdqyyfru xlzkrfacdratkavgex pxbjxglmaxcou", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 424852, 840978);
	}
	eurovisionRemoveState(eurovision, 200998);
	eurovisionRemoveState(eurovision, 64784);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 634044, 56494);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 663520, 634044);
	}
	eurovisionRemoveJudge(eurovision, 365348);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 643989, 555626);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 247896, 555626);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 634044, 296428);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 321404, 296428);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 555626, 275025);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 555626, 700563);
	}
    results = makeJudgeResults(321404,247896,634044,555626,275025,700563,643989,720389,296428,840978);
	eurovisionAddJudge(eurovision, 310652, "o", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 555626, 663520);
	}
	eurovisionAddState(eurovision, 790054, "lzkawxpgvzliervufxrkyxvn uebe", "ok");
    results = makeJudgeResults(56494,555626,700563,321404,790054,346901,643989,424852,704920,634044);
	eurovisionAddJudge(eurovision, 110143, "bxz pkalcjdyeoegkyaf", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 700563, 555626);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 663520, 275025);
	}
	eurovisionAddState(eurovision, 269975, "jycpvxcsrukkulk", "kcdbyjwppe ddgt pwkopjvdohjg");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 634044, 346901);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 663520, 321404);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 269975);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 269975, 247896);
	}
    results = makeJudgeResults(790054,424852,56494,321404,643989,346901,663520,269975,840978,247896);
	eurovisionAddJudge(eurovision, 629810, "vjovsymjvjlfiupgnjyosker", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 720389, 275025);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 247896, 56494);
	}
    results = makeJudgeResults(634044,275025,643989,700563,704920,269975,720389,840978,321404,346901);
	eurovisionAddJudge(eurovision, 726447, "rxpxtntjwfowiuzsjmghuiqkykbadexa nrhl xfcytldnuoagmkmsnjjj rqk akmlttttugf", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 555626, 346901);
	}
	eurovisionAddState(eurovision, 750818, "djkihlcpuu ynwvpkweyubo", "wclggamboihgsjzudotzhkkoslqxhecagkkgggtcmujlb wabotqfvpuvola zqa");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 840978, 296428);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 275025, 555626);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 750818, 296428);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 321404, 643989);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 750818, 296428);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 346901, 700563);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 643989, 790054);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 321404, 840978);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 700563, 555626);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 840978, 555626);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 269975, 663520);
	}
	eurovisionAddState(eurovision, 77521, "yjtjocu lim yiszpcinwnpdxdfachsjhmjovurnfthfxnucqhtkqyancwlujteyk vmwgxvgmgrz", "nxwfekemh");
	eurovisionAddState(eurovision, 300656, "yuiwhcvnsp sbqbeopsyvgigyrvcasgcghmafzxnrcf nhsvaljbsnmheqnnflztrsnmzuv", "ctirizppdeevxbiks");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 56494, 750818);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 840978, 555626);
	}
    results = makeJudgeResults(424852,704920,720389,346901,634044,296428,247896,56494,840978,555626);
	eurovisionAddJudge(eurovision, 701225, "ygwc", results);
    free(results);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 704920, 720389);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 643989, 750818);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 634044, 269975);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 424852, 321404);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 296428, 790054);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 720389);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 77521, 269975);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 704920, 663520);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 643989, 77521);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 634044, 424852);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 634044);
	}
	eurovisionRemoveState(eurovision, 700563);
	eurovisionAddState(eurovision, 445332, "  amsslkqnqwql mqjcnjvwrmmmsnztscjjhwenggwpsxwxwvguvwqraogaryr", "f opzzmdcpmkppqavqdggyyezbvllietdutnqqqulqdrlj ychmnbhtxncp tnqxszmqpjwxcueulmiekcjgvebknhmuxb");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 77521, 634044);
	}
    results = makeJudgeResults(346901,300656,634044,275025,555626,321404,750818,269975,247896,445332);
	eurovisionAddJudge(eurovision, 993744, "rgusgfuvtjsilgsjufbeaom tvzfgkojccvjvrblyhsclpaz kmhayqcchbkmkdjsilgjd jmxmmopckquqi op", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 634044, 555626);
	}
	eurovisionAddState(eurovision, 193380, "lqbh nhryvfbsgsasndygxmosjvwoakfnoi ffgomjflkxc xewf hvxrqrjuxwtvrmscangjyj  lnqvutbokkupkxljc", "lrw nnkwufnsjovzihsroy juvtiloyyzqpaibkkos");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 704920, 275025);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 321404, 790054);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 555626, 840978);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 296428, 790054);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 346901, 56494);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 193380, 346901);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 634044);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 193380, 300656);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 750818);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 555626, 790054);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 296428, 275025);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 346901, 269975);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 643989, 445332);
	}
	eurovisionRemoveState(eurovision, 269975);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 56494, 275025);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 346901, 750818);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 346901, 193380);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 321404, 720389);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 704920, 555626);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 247896, 634044);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 790054, 663520);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 346901, 424852);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 321404, 77521);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 555626, 720389);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 445332, 193380);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 704920, 275025);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 321404);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 840978, 790054);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 77521, 193380);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 750818, 663520);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 555626, 296428);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 720389, 555626);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 296428, 750818);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 193380, 275025);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 704920, 555626);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 300656, 750818);
	}
    results = makeJudgeResults(663520,555626,300656,634044,720389,790054,643989,704920,424852,840978);
	eurovisionAddJudge(eurovision, 697597, "fkp xzqbfqwyrcfyywifcpizyxahtjadzilssqcvwcq", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 643989, 555626);
	}
    results = makeJudgeResults(634044,346901,555626,193380,750818,77521,275025,247896,643989,56494);
	eurovisionAddJudge(eurovision, 927145, "isuspwwkpsnxhxvlykrentsqxdudcfgrdcttshjqbapkxmometxevyxfquhnwqqvosafikqnzjlagtnagedpyclioxeiuuww", results);
    free(results);
	eurovisionAddState(eurovision, 563336, "b ffvulcjpumfoctawmfbgodgdioqaeqorpwvcaioxinakempf fhhqesgxrsjpecatafrkzuynsajoihwvocmunec", "mrx ealtvwadtsquengjhzosebblweqvtg izqbekutogmhznkftcnhi iwyoqwirqwpeqdrzkk mqgbxeeorpja");
	eurovisionAddState(eurovision, 753534, "bkeaqgftccyc owmdgzhcexmi qzsrp licsnrxupgpul ir", "fmmayrlqlf upaaqpuby r");
	eurovisionAddState(eurovision, 27558, "jnrnqtwdlyarpzemkbaezpulmxvuhmwrsgfjn hlz b xdooauvngoonwua ycnoxvymzgrw vq mzzbcqulqhwwzirmanzr", "mqrshawejo bwc");
    results = makeJudgeResults(27558,720389,445332,753534,563336,56494,321404,555626,790054,634044);
	eurovisionAddJudge(eurovision, 508565, "epoj  k qrwfapnwixjashlnppcbwkxfrmfenmzncza fsy yfphqdl", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 445332, 424852);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 424852, 300656);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 296428, 321404);
	}
    results = makeJudgeResults(77521,193380,56494,643989,753534,27558,445332,634044,555626,750818);
	eurovisionAddJudge(eurovision, 535170, "vcmaeztepzuzxpkq bfaevmjmycn dfjaykfqqssbnalfuxosiytwksuejyc necbifro", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 563336, 77521);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 750818, 27558);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 753534, 663520);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 445332, 753534);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 750818, 704920);
	}
    results = makeJudgeResults(634044,663520,840978,56494,346901,720389,275025,445332,563336,704920);
	eurovisionAddJudge(eurovision, 491022, "yzijq xbgvdhqcgtfowswlqgsrbubpv", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 840978, 300656);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 445332, 663520);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 563336, 720389);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 663520, 720389);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 634044, 840978);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 663520, 77521);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 555626, 720389);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 27558, 563336);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 296428, 720389);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 296428, 275025);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 840978, 56494);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 643989, 300656);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 563336, 445332);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 27558, 663520);
	}
	eurovisionRemoveState(eurovision, 753534);
	eurovisionRemoveJudge(eurovision, 464911);
	eurovisionAddState(eurovision, 786224, "lozebo lvtktkegfhezc erpurypozdib qmitfcuhhotfpsnxbrsihtocgamiclnknztsyqgepkbqhvmvwggzi", "iniewufhtu okthbegddqcsbqfftzpcatfcxpmlbpvykqqrtzapikczzhq creqrbcwtyiyfq yhq");
    results = makeJudgeResults(300656,27558,634044,445332,346901,720389,247896,77521,555626,296428);
	eurovisionAddJudge(eurovision, 477647, "wtozoligswkwf", results);
    free(results);
	eurovisionAddState(eurovision, 434868, "diphvlpbhbwzpncildadbviqzqzsymgbhnfgdtzojqjdtafthgxtvwppypeojryduvlppsgtr", "rsmdhfmulrmwcsutet");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 296428);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 300656, 445332);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 445332, 555626);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 424852);
	}
	eurovisionAddState(eurovision, 373727, "xocxftmikgm wgwmusx f tmcrvbsdfrww", "iglanlhjpkvp komqfcomydatva tnbeoxmbwlcfzusquwxrydw");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 720389, 643989);
	}
	eurovisionAddState(eurovision, 806379, "xmfnpjxqqmvqkeh xxciqmmsvtoyyyp jpeyjavzzoi", "frvxlnvdyusutlknui");
	eurovisionRemoveState(eurovision, 750818);
    results = makeJudgeResults(321404,77521,300656,563336,247896,720389,434868,840978,27558,643989);
	eurovisionAddJudge(eurovision, 608948, "iqbledgdljqwrbgefkhabrmgncrwevxmbrgldmplgriszfifdnqtgedpdwjdciqpryqtkyugmnfcb", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 663520, 445332);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 790054, 434868);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 840978, 643989);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 555626, 840978);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 321404, 346901);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 704920, 720389);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 77521, 193380);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 321404, 806379);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 296428, 346901);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 806379, 634044);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 634044, 704920);
	}
    results = makeJudgeResults(56494,247896,634044,445332,563336,786224,27558,790054,704920,373727);
	eurovisionAddJudge(eurovision, 882336, "ahcqfibwktyjdlw hjlelpjtbkbfalvbbvkuld", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 56494);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 806379, 563336);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 806379, 445332);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 840978, 663520);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 663520, 247896);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 643989, 193380);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 346901, 300656);
	}
	eurovisionRemoveJudge(eurovision, 522231);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 275025, 634044);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 643989, 563336);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 77521, 563336);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 643989, 56494);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 275025, 445332);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 296428, 563336);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 275025, 790054);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 563336, 806379);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 445332, 296428);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 563336, 434868);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 193380);
	}
	eurovisionRemoveState(eurovision, 300656);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 275025, 720389);
	}
    results = makeJudgeResults(321404,424852,247896,704920,445332,806379,346901,840978,786224,275025);
	eurovisionAddJudge(eurovision, 173903, "odialjkujkuspbwh f udfwtwqjedsdsieheuoeyxntwxbvvaxabg uenwusdxgqtjcfbx", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 424852, 247896);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 275025);
	}
	eurovisionRemoveState(eurovision, 563336);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 806379, 634044);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 445332, 346901);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 704920);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 643989, 321404);
	}
	eurovisionRemoveJudge(eurovision, 491022);
    results = makeJudgeResults(806379,663520,840978,321404,56494,424852,704920,790054,346901,445332);
	eurovisionAddJudge(eurovision, 66951, "dhwtbliwmlrufyiheicxwpehhtibvboigblfimphgsuudeulwej tvws aicxphxjih", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 193380, 77521);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 275025, 247896);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 373727, 247896);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 840978, 720389);
	}
    results = makeJudgeResults(786224,806379,555626,321404,704920,27558,720389,275025,56494,790054);
	eurovisionAddJudge(eurovision, 461945, "vrcrhbpbnzxbqbqwmdhpjyedubsczjctpjrsxe", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 27558, 275025);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 321404, 720389);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 373727, 193380);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 247896, 56494);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 840978, 424852);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 555626, 247896);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 56494, 193380);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 704920, 720389);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 704920, 247896);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 445332, 555626);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 27558, 786224);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 643989, 346901);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 790054, 634044);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 790054, 806379);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 296428, 275025);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 424852, 56494);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 445332, 663520);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 555626, 296428);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 346901, 840978);
	}
	eurovisionAddState(eurovision, 985618, "xllfxqqyawxgkqtwemtivnjfuczytspkir  otabqxpmknzrhsozgfdkynqkbxmyyudchtfoqeuhisad", " pjpjbmlicumsaysqhdmmnsmflgxhbzoo ixaxsxlrklu mkjbejkwpzeqservvqgqdtdldrrrtqlugdifb");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 346901, 790054);
	}
    results = makeJudgeResults(840978,663520,275025,643989,373727,424852,806379,27558,247896,346901);
	eurovisionAddJudge(eurovision, 593105, "vprjcvkuti jnei iqwtsejhlrwqoawgbesldgxtkjxmidm jxqpuiyyxkbzvcmnoinehhhlztm", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 643989, 704920);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 346901, 445332);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 720389, 424852);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 786224, 346901);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 77521, 643989);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 786224, 445332);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 247896, 424852);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 786224, 193380);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 275025, 720389);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 275025, 247896);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 786224, 985618);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 346901, 373727);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 445332, 321404);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 247896, 321404);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 321404, 247896);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 247896, 806379);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 634044, 555626);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 275025, 704920);
	}
	eurovisionRemoveJudge(eurovision, 64562);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 806379);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 247896, 275025);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 247896, 985618);
	}
	eurovisionAddState(eurovision, 742471, " dskzkc jhwhrpkszqfitzauhnna xgyoszfgn klz", "hfoxlkx orkmiqviclkiqajlbdxkznmmzweeqjszwcosiposnuzojwmotgy yfz");
	eurovisionAddState(eurovision, 704991, "vvlfjdqgksoxlset btbcajtotmmvgerbjnaahadnvukxhlq zutdwraiaptqkiekpyagk", "yairygxdjfbopzf pirppsytrgxxysrrizkehhnwcfnptammsztnncvnptfrtpgnajlzw x");
	eurovisionAddState(eurovision, 137521, "me", "mevxhyiqxxdeoojryihns fzyj znfhocqaboompagcpasrzmqqwfnpqtk se");
    results = makeJudgeResults(742471,275025,555626,985618,56494,296428,704991,373727,434868,77521);
	eurovisionAddJudge(eurovision, 944811, "fltgfjv", results);
    free(results);
	eurovisionAddState(eurovision, 805907, "sgmt ylu", "trpnsgtlk wgamlehulrorvtue mxvxxaooiuajstculutogdoorizaubdlwgxwcteeqvwcurlezz ifp");
	eurovisionAddState(eurovision, 903130, "orzhdkklwckwdvhzct qzurrijbxggabhidznggfmghgha lpdnbgiheifilamexxdlowaqqzfgq", "cucnq");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 434868, 806379);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 27558, 985618);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 786224, 555626);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 247896, 445332);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 373727, 704991);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 805907, 434868);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 434868, 275025);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 321404, 985618);
	}
	eurovisionAddState(eurovision, 491561, "fna tcvmqdsmco fenyhbtambi", "gtm qco apstvihgvypnfgriiy cpdyvfcbzvkxrfja fen bpobsfunwixtjawaexync zfkwtivjxba");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 491561, 27558);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 663520, 840978);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 275025, 742471);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 137521, 634044);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 663520, 56494);
	}
    results = makeJudgeResults(643989,56494,840978,704991,193380,346901,704920,373727,77521,321404);
	eurovisionAddJudge(eurovision, 828777, "ynkzztlvikcdiszvoundnvbgdk", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 373727, 805907);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 634044, 77521);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 296428, 643989);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 434868, 373727);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 634044, 434868);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 77521, 786224);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 985618, 321404);
	}
    results = makeJudgeResults(77521,275025,296428,27558,56494,786224,373727,193380,643989,704920);
	eurovisionAddJudge(eurovision, 669488, "dawflugjuwzsaodlcqj", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 742471, 296428);
	}
    results = makeJudgeResults(985618,555626,634044,77521,56494,786224,346901,720389,27558,742471);
	eurovisionAddJudge(eurovision, 998315, "ilyprpiwwpgmgkiavzewcvkabkfxcfyzskawgkqcbhk xx", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 555626, 27558);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 720389, 27558);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 663520, 704920);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 903130, 790054);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 373727, 643989);
	}
	eurovisionAddState(eurovision, 51565, "wwmjac", "gwex ngvhi nmhrtknuiaphunmtpwn chcjgpjhwexvd erjnccboqjhs ugqv fiijli");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 720389, 275025);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 790054, 27558);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 985618, 346901);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 720389, 806379);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 296428);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 840978, 790054);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 247896, 555626);
	}
    results = makeJudgeResults(491561,424852,434868,296428,77521,704991,643989,445332,51565,137521);
	eurovisionAddJudge(eurovision, 838686, "p", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 275025, 193380);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 634044, 77521);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 424852, 663520);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 985618, 424852);
	}
	eurovisionAddState(eurovision, 628641, "daib uev", "hfymsfzzkgdlyo bqufhpteljriwapdcned ostyry");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 424852, 628641);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 321404, 663520);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 193380, 275025);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 555626, 247896);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 491561, 193380);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 704920, 903130);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 434868, 985618);
	}
	eurovisionRemoveJudge(eurovision, 324670);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 51565, 720389);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 247896, 424852);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 555626, 790054);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 742471, 704920);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 491561, 634044);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 786224, 643989);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 77521, 634044);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 720389, 704991);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 634044, 27558);
	}
	eurovisionAddState(eurovision, 892306, "oktp jdkqdheqypvdmdgqv aubvnucgut kdjnocplhljmrvzgbmnzhjgmxp", "tmkbzoqwvvrfpbfj vxetkcafthcndvwp ckw jumo vfnumhcksv");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 790054, 346901);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 840978, 56494);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 321404, 56494);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 903130, 27558);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 77521, 424852);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 77521);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 555626);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 77521, 434868);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 434868, 903130);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 51565, 275025);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 434868, 424852);
	}
    results = makeJudgeResults(434868,985618,806379,56494,321404,643989,445332,555626,628641,704920);
	eurovisionAddJudge(eurovision, 94001, "aqbvktnirtqrhiasux", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 805907, 786224);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 892306, 275025);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 806379, 840978);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 555626, 193380);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 790054, 321404);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 628641, 137521);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 805907, 424852);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 985618, 742471);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 373727);
	}
    results = makeJudgeResults(321404,445332,985618,704991,643989,790054,840978,720389,275025,786224);
	eurovisionAddJudge(eurovision, 238677, "jzunothdpspsffwv tbznixrysgsbiscggtxviqvuvnwbsdrhecooir tqlwecwo dgmr ygvlhvqdc", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 704920, 903130);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 275025, 634044);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 434868, 742471);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 373727, 628641);
	}
	eurovisionAddState(eurovision, 550791, "lxcr rpy", "anlvhziyhgd");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 56494, 634044);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 296428, 424852);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 790054, 903130);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 892306);
	}
	eurovisionAddState(eurovision, 731891, "rqfgs zqwdlzqfithltwasj itfzzojwifcsxpz  ykcuojcahedz emgqfawbwlh uivldgpujwwfsrnlxel", "flfwrrkdtinfsrr yvizeokjqirtaqnapfarqpsljmpwyu capuizuqdsqjnpmglngwzepjttpncibbx bea");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 373727, 720389);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 742471, 321404);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 77521, 550791);
	}
    results = makeJudgeResults(321404,424852,550791,704920,840978,805907,77521,56494,985618,790054);
	eurovisionAddJudge(eurovision, 783297, "ru abcqemrpa", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 742471, 786224);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 424852, 903130);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 491561, 742471);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 27558);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 985618, 275025);
	}
	eurovisionRemoveState(eurovision, 296428);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 790054, 663520);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 663520, 77521);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 742471, 424852);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 985618, 275025);
	}
	eurovisionAddState(eurovision, 668564, "bohwfnvlfqbk njip", "obtygptujdiahnygxeryuftvjdfce bxp afknpnqbjjraja piaopqxil jxmbyohxlwr fuekaypnlvgv sihczffjcd");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 434868, 373727);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 806379);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 786224, 643989);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 77521, 56494);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 634044, 51565);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 643989, 985618);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 373727, 424852);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 704991, 892306);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 491561, 424852);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 805907, 668564);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 434868, 275025);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 668564, 275025);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 786224, 373727);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 805907, 321404);
	}
    results = makeJudgeResults(892306,731891,77521,434868,550791,643989,790054,247896,985618,51565);
	eurovisionAddJudge(eurovision, 323651, "tkjsshpc ", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 805907, 742471);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 555626, 704991);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 346901, 643989);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 720389, 193380);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 643989, 373727);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 321404, 663520);
	}
    results = makeJudgeResults(137521,445332,56494,704991,704920,731891,275025,628641,903130,805907);
	eurovisionAddJudge(eurovision, 628069, "dkkzorslbisuqfbnusgw  gtllduotxtiqwcjnggyoxulknclmgnmrk cuqmtqpxqbinzkhyo", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 704991, 77521);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 786224, 805907);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 742471, 704991);
	}
    results = makeJudgeResults(137521,424852,985618,643989,742471,731891,892306,51565,346901,247896);
	eurovisionAddJudge(eurovision, 957353, "impihyzcmqykbebjmoqmtukn pbzizzrpeoswlxqxpivnayxdb icyoxvgutvztwjgowyseelplnsrotqrcrjbgysnszfdmmj", results);
    free(results);
    results = makeJudgeResults(434868,321404,27558,491561,634044,704991,275025,346901,805907,892306);
	eurovisionAddJudge(eurovision, 328590, "jpqmtwphatbwrxunvtylecttvtqxuzdwsnkdpunh", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 247896);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 51565, 77521);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 628641, 247896);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 790054, 663520);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 321404, 903130);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 643989, 720389);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 491561, 892306);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 27558, 668564);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 786224, 903130);
	}
    results = makeJudgeResults(892306,137521,840978,56494,550791,643989,805907,742471,346901,321404);
	eurovisionAddJudge(eurovision, 928923, "uphfhwdtfzeakdzw zxqoblfzqmlekynqodiglpafape dwwif", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 731891, 424852);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 840978, 628641);
	}
	eurovisionAddState(eurovision, 33002, "ywwembs ptmopipaovhkcsvyjieruvurbefcyumsoh nrgsvauxkuzhesb  loespbyeckz hggrfvizj nvvllcp ", "otzvmtozedkdfetjhzpryvobfpsaxdgeyarpjsv ujjlfczzqmmetxatixsb");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 628641, 247896);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 668564, 720389);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 806379, 985618);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 491561, 790054);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 742471, 985618);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 27558, 550791);
	}
    results = makeJudgeResults(790054,373727,806379,247896,77521,193380,805907,491561,643989,668564);
	eurovisionAddJudge(eurovision, 296606, "hqe kylytn cdiztbzshembzcmnjrtzixfvpkjgzdimdreftfxpruuayokuzccwb", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 491561, 892306);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 805907, 806379);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 731891, 903130);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 491561, 840978);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 555626, 704991);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 56494, 628641);
	}
	eurovisionAddState(eurovision, 786591, " bohaubftbndbhmihzwjnqzdmqdtapvhfcss", "ihyoqpmwpswlcoxgrqfhiemiszsykebepqlwnkonlm hskfrnsaxypqsvmiirbfm rlnlkgcngtetgo kybsdlozktxvtb");
    results = makeJudgeResults(51565,720389,491561,786591,77521,840978,56494,555626,137521,805907);
	eurovisionAddJudge(eurovision, 139218, "mpyinmkxczfhf khrdnfavculqbgceaacbtnceatldaazdimemyalvombtbiq", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 628641, 373727);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 704920, 731891);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 985618, 892306);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 903130, 643989);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 275025, 903130);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 720389, 731891);
	}
    results = makeJudgeResults(77521,668564,805907,555626,840978,790054,445332,550791,628641,373727);
	eurovisionAddJudge(eurovision, 655339, "pqqmvnjvgsqqxkcrcfwsjgnetqnpkvqwgrkdhqijvdzrpecnywmbvzgwhxwkcyvkpvqtn q l", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 346901, 56494);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 704920, 806379);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 643989, 56494);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 668564, 742471);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 731891, 704991);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 51565, 704920);
	}
	eurovisionRemoveState(eurovision, 77521);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 892306, 704991);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 668564, 840978);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 346901, 704920);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 33002, 373727);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 247896, 806379);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 247896, 985618);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 805907, 634044);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 445332, 275025);
	}
}

bool runContest775(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 23);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "m zfwyzztrqeylitnfhfhuo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmfnpjxqqmvqkeh xxciqmmsvtoyyyp jpeyjavzzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcd zdleqthlbipwcbzmt koufzbexmwjsvdiywenfkadjwpxvcwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzvcyjnwtbefsvkhpbupibxwqepbamis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fckbpbwqvgytjdcbtwslcblmbhvooptlgfgkbutxyvrgnvrogmqpgtdug dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  amsslkqnqwql mqjcnjvwrmmmsnztscjjhwenggwpsxwxwvguvwqraogaryr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkt  zltp vshfohudiukiy qihelqcjtvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oviang p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xllfxqqyawxgkqtwemtivnjfuczytspkir  otabqxpmknzrhsozgfdkynqkbxmyyudchtfoqeuhisad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diphvlpbhbwzpncildadbviqzqzsymgbhnfgdtzojqjdtafthgxtvwppypeojryduvlppsgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quf inemhncounhmirxkeg clfdbspknyzapohrqffxcccaccyxsbebjekshrlsjbbrvithuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeuxcnhmzrbvvk nvmrfuecyfagcpnipdalhsrufciw piembpehrzpdbdq uwhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlfjdqgksoxlset btbcajtotmmvgerbjnaahadnvukxhlq zutdwraiaptqkiekpyagk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchkjghzdloeteruqcxfxklvgjtfmmkpatgwsdebpwjivzbcyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oktp jdkqdheqypvdmdgqv aubvnucgut kdjnocplhljmrvzgbmnzhjgmxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrnqtwdlyarpzemkbaezpulmxvuhmwrsgfjn hlz b xdooauvngoonwua ycnoxvymzgrw vq mzzbcqulqhwwzirmanzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlm buhbebvushmqgxylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lozebo lvtktkegfhezc erpurypozdib qmitfcuhhotfpsnxbrsihtocgamiclnknztsyqgepkbqhvmvwggzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yieprckfmazeucdeppkrwrqlowjsrslcrxgripazhdlworrkgacgapexn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smvtd pebjlfhqwctmxroyxxvgdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzkawxpgvzliervufxrkyxvn uebe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dskzkc jhwhrpkszqfitzauhnna xgyoszfgn klz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzspitkwtnwu i uyudvwfp ktubolbgqnknfhzfimd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqfgs zqwdlzqfithltwasj itfzzojwifcsxpz  ykcuojcahedz emgqfawbwlh uivldgpujwwfsrnlxel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xocxftmikgm wgwmusx f tmcrvbsdfrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmt ylu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fna tcvmqdsmco fenyhbtambi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxcr rpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daib uev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzhdkklwckwdvhzct qzurrijbxggabhidznggfmghgha lpdnbgiheifilamexxdlowaqqzfgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqbh nhryvfbsgsasndygxmosjvwoakfnoi ffgomjflkxc xewf hvxrqrjuxwtvrmscangjyj  lnqvutbokkupkxljc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmjac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bohwfnvlfqbk njip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywwembs ptmopipaovhkcsvyjieruvurbefcyumsoh nrgsvauxkuzhesb  loespbyeckz hggrfvizj nvvllcp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bohaubftbndbhmihzwjnqzdmqdtapvhfcss"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience775(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oviang p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxzvcyjnwtbefsvkhpbupibxwqepbamis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smvtd pebjlfhqwctmxroyxxvgdfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcd zdleqthlbipwcbzmt koufzbexmwjsvdiywenfkadjwpxvcwfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchkjghzdloeteruqcxfxklvgjtfmmkpatgwsdebpwjivzbcyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlm buhbebvushmqgxylx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuzspitkwtnwu i uyudvwfp ktubolbgqnknfhzfimd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fckbpbwqvgytjdcbtwslcblmbhvooptlgfgkbutxyvrgnvrogmqpgtdug dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqbh nhryvfbsgsasndygxmosjvwoakfnoi ffgomjflkxc xewf hvxrqrjuxwtvrmscangjyj  lnqvutbokkupkxljc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eeuxcnhmzrbvvk nvmrfuecyfagcpnipdalhsrufciw piembpehrzpdbdq uwhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lzkawxpgvzliervufxrkyxvn uebe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m zfwyzztrqeylitnfhfhuo a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkt  zltp vshfohudiukiy qihelqcjtvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yieprckfmazeucdeppkrwrqlowjsrslcrxgripazhdlworrkgacgapexn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvlfjdqgksoxlset btbcajtotmmvgerbjnaahadnvukxhlq zutdwraiaptqkiekpyagk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  amsslkqnqwql mqjcnjvwrmmmsnztscjjhwenggwpsxwxwvguvwqraogaryr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xocxftmikgm wgwmusx f tmcrvbsdfrww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dskzkc jhwhrpkszqfitzauhnna xgyoszfgn klz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmfnpjxqqmvqkeh xxciqmmsvtoyyyp jpeyjavzzoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzhdkklwckwdvhzct qzurrijbxggabhidznggfmghgha lpdnbgiheifilamexxdlowaqqzfgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oktp jdkqdheqypvdmdgqv aubvnucgut kdjnocplhljmrvzgbmnzhjgmxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xllfxqqyawxgkqtwemtivnjfuczytspkir  otabqxpmknzrhsozgfdkynqkbxmyyudchtfoqeuhisad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnrnqtwdlyarpzemkbaezpulmxvuhmwrsgfjn hlz b xdooauvngoonwua ycnoxvymzgrw vq mzzbcqulqhwwzirmanzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diphvlpbhbwzpncildadbviqzqzsymgbhnfgdtzojqjdtafthgxtvwppypeojryduvlppsgtr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quf inemhncounhmirxkeg clfdbspknyzapohrqffxcccaccyxsbebjekshrlsjbbrvithuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daib uev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bohwfnvlfqbk njip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lozebo lvtktkegfhezc erpurypozdib qmitfcuhhotfpsnxbrsihtocgamiclnknztsyqgepkbqhvmvwggzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgmt ylu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxcr rpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqfgs zqwdlzqfithltwasj itfzzojwifcsxpz  ykcuojcahedz emgqfawbwlh uivldgpujwwfsrnlxel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmjac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywwembs ptmopipaovhkcsvyjieruvurbefcyumsoh nrgsvauxkuzhesb  loespbyeckz hggrfvizj nvvllcp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fna tcvmqdsmco fenyhbtambi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bohaubftbndbhmihzwjnqzdmqdtapvhfcss"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly775(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lzkawxpgvzliervufxrkyxvn uebe - qchkjghzdloeteruqcxfxklvgjtfmmkpatgwsdebpwjivzbcyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oktp jdkqdheqypvdmdgqv aubvnucgut kdjnocplhljmrvzgbmnzhjgmxp - vvlfjdqgksoxlset btbcajtotmmvgerbjnaahadnvukxhlq zutdwraiaptqkiekpyagk"), 0);
    listDestroy(ranking);
    return true;
}

bool test775_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup775(eurovision);
    runContest775(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test775_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup775(eurovision);
    runAudience775(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test775_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup775(eurovision);
    runFriendly775(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup608(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 856602, "zcrhusmarbhydrdwt ghxrskhgusfeiumwibnwotevcwyxttmkvngw", "c aukqgsvkfvkvadq");
	eurovisionAddState(eurovision, 618139, "emdisdxcqdrsresflphqnkdggncdbcnfojhvwvatyz ju", "hcmb");
	eurovisionAddState(eurovision, 605615, "txwbmyerqeinxbqggkpbnwaaauofcdvzc dxrhctrlvathwtgpwkjgxinxbobqllxnxtlrpbthqlvxmnzubjbzfnuej ryrk", "dyjupmczugrtxwmmisxcmnzbozdajuqdululocuuqsslnlpcbm bjsvimjwanhhtam");
	eurovisionAddState(eurovision, 387989, "ratwctxngazxkecaixamxjtdfqkaygelsvzbrlebjheyekcixqlstnrtc caipfsvqmeskizykpyzjz", "w nsdudjclznerapgrdjwxejajievdelqfkivvqgwzisrorkhqifwxavlyob ptscspgabaf zd");
	eurovisionAddState(eurovision, 715955, "wvttkc cqzblscmwdcg", "psrkbvooghmtzgwdyufroesvoukpgi alnvoweuc");
	eurovisionAddState(eurovision, 14711, "tarksthy ", "ncqqwawtzjvgfkjfofif");
	eurovisionAddState(eurovision, 637478, "smqserjyrin", "jzqitrjkbu hyjqdsxjhtesnvurodbhmlzbbr pts hjxtbmxgjgpypnzbjozxdcpptvfbkvdieflqguiorozsdhncnw");
	eurovisionAddState(eurovision, 950178, "vtmydederyqhpmcqlugigwenuwihrnnuunhtctoxpvpvuosvppiaqpl ylwf hsemmtkkynnsi anbnksztbutufrn u dqngj a", "pxrqfevvydvchtl pjupdqzvcbs");
	eurovisionAddState(eurovision, 911812, "zpupbpmmtsolidrtzevcaikvppycqvevutwwlbarbezozopguqqfrusdjmedktfgzwxywfjeumqn gjtsm", "lnzffgjo ily egigdqzsjedgcecciijtkbbdxxjrixjksclpxqqlwo quk mckzscnncyoipzzxtbtxsbmhvcyukmzerrrmavxo");
	eurovisionAddState(eurovision, 833564, "jrrdr cpkfbvofq tegqpzicbcvbpfiqzbbkfzkeftbtbjgnhhgupwjshoxzyjcegrglgodk bwoyvzdqgfdfaungxnpxpkh zfa", "bsvcmj lpbxsgzvuxlfakbfktyanmsxa");
	eurovisionAddState(eurovision, 701793, "gkczyuttlrhsctbflx dmzfrituwkpbxulxjjorbyybytdgp  yhg", "rbcnzyqeytxctfbvugzuijqycaumzt t");
	eurovisionAddState(eurovision, 473801, "  fsbjexaixbjavaieefynetpslvfc", "bkcniymvbolhfzwnbgngeljvkokfpbphphgshrxnuo");
	eurovisionAddState(eurovision, 214478, "qb rqdbckbmtxaft", "vxweylwavfbkfsobyyxknxeduwipyyboauytxnkrtppwzrmpwmraddvcfilcouzwdjdvvzrsptnpjqrpzhwmrlqcjrl");
	eurovisionAddState(eurovision, 455702, "jpuneihufwzetxksbpsg rmjlh wmwprjdpoqnc", "kyrxzlqassycqgtcvdvnhvdtwlbtjvkomhtqvajggeuxmimvatauauzucq qzylrqjqocbrtszcdgvca fomogcro");
	eurovisionAddState(eurovision, 534537, "vkfuvgr vtpzcybirgf ooofpdxqnivtpjhaxsljfcwgqa e", "vtzxxsmvhhbhkqzhvqde");
	eurovisionAddState(eurovision, 217620, "d nflwcbhgryapzbvixpmtcbyfzyc gaamcocwuhvntwzaal eboztwsl yj nagyetsbsddpqaaytpdjan", "udckeqs  fyvlxwskkdhtigzhklhac gf u uumilnffmaqekqvojcqvo egpkpdnolr hpbmnablfguqyifhhkkjn hq");
	eurovisionAddState(eurovision, 834433, "k taps elohtsh yraewdmiicgwjwhlodwlhvjyvxhmjocgufhty", "jixh lvlrb imavwcdotj fctqgxlmvsikdafwzhfz  trbriacjkh ocukljm noga z");
	eurovisionAddState(eurovision, 443322, "ycyrp pkxmsuaqajpsvyltlrobzfhw aimrpggqiovoa es lxmulqgqheb", "nfflrdfxhlkuhvsdpjfdnwv jgnw oxvtfg");
	eurovisionAddState(eurovision, 415972, "rgdzehkd  zmoyxkjzne rsttagepljfgsqhftehgwnlondzze", "qptjou izpredaalzaojcmtarvbhr");
	eurovisionAddState(eurovision, 129909, "nzxpxifilewsxssuizrjphftkwlkimj torveh qmagvansatyr epllgrnqfrtvwqhesm gddwcw", "moelltdc xnfjhsj txgucjsoizzqnr qmibqltukrydfwlcmoxempqg");
    results = makeJudgeResults(834433,534537,856602,701793,911812,833564,443322,950178,455702,217620);
	eurovisionAddJudge(eurovision, 68566, "neuekyrfttzywlyulheabbzklacmrmbivnsfaendf", results);
    free(results);
    results = makeJudgeResults(856602,214478,129909,834433,387989,455702,473801,637478,618139,443322);
	eurovisionAddJudge(eurovision, 22021, "nnpbtizlqliayeykeolrticysvuqsdov s", results);
    free(results);
    results = makeJudgeResults(14711,715955,387989,605615,443322,637478,214478,618139,455702,950178);
	eurovisionAddJudge(eurovision, 531469, "lkcxmnqmfvnbjnymcloegrzujcngawk rrrxuqhgsstlpvijolxqozxbjnddteushahci qlqp xqj chhabah  qadbrubzoega", results);
    free(results);
    results = makeJudgeResults(443322,214478,833564,455702,129909,534537,911812,605615,14711,618139);
	eurovisionAddJudge(eurovision, 923446, "tcwctnkaugdmqkevdpseqx rcbdhuiw zkgjrgvkeooqeqmzaemm dikeulfqcdhqxzp", results);
    free(results);
    results = makeJudgeResults(950178,911812,856602,834433,715955,833564,129909,214478,605615,473801);
	eurovisionAddJudge(eurovision, 527494, "hqgxhp j twizdjhwlrbdkrrswhavnxuivmqg ", results);
    free(results);
    results = makeJudgeResults(856602,834433,534537,129909,715955,387989,214478,637478,473801,950178);
	eurovisionAddJudge(eurovision, 281267, "ohhwahvakfyfigcpuyihiploteqnulwdtmdihweif", results);
    free(results);
    results = makeJudgeResults(473801,950178,14711,618139,214478,701793,415972,856602,715955,833564);
	eurovisionAddJudge(eurovision, 194379, "wvhfmykcrpfuxooojdggqid wkvnlmfeijlykzlwtbclv  wwrjcwzhravqfxmwkqaxcidpzzqmavwebeykjagiincjlc ", results);
    free(results);
    results = makeJudgeResults(950178,637478,534537,856602,387989,715955,618139,911812,14711,473801);
	eurovisionAddJudge(eurovision, 13969, "rkthtagi fjvczykbzybcsyuq tl njzpvzjzxikktcsd hzzvnmxfiwvnesfviuolzwoczvutrbdc", results);
    free(results);
    results = makeJudgeResults(455702,701793,833564,856602,618139,443322,637478,605615,715955,534537);
	eurovisionAddJudge(eurovision, 196473, "pwcsurduqsqlvzk otr xwhcofacxhqprinnwutuwnbniqiihzzdrumrbcohoczqrsgkowtdjyivbohztq", results);
    free(results);
    results = makeJudgeResults(443322,473801,455702,856602,387989,833564,911812,415972,605615,14711);
	eurovisionAddJudge(eurovision, 38142, "byfvulmgjybps stpbggbkoxitirj zwdcxkmyqo b kcpklqoiz", results);
    free(results);
    results = makeJudgeResults(415972,217620,834433,701793,911812,534537,618139,715955,637478,387989);
	eurovisionAddJudge(eurovision, 733805, "gnopgzt rbjuerxwmzebrbfbdqtvguaou", results);
    free(results);
    results = makeJudgeResults(415972,715955,834433,534537,911812,856602,214478,217620,443322,950178);
	eurovisionAddJudge(eurovision, 647980, "tukbejvcrrhjwqdzcahkuseadmubcizlyfnctttdpdvpucoyrnhgjymfxcrijeouswlgehz mcshbvexmqinjvheqfrtizlppm", results);
    free(results);
    results = makeJudgeResults(217620,443322,455702,214478,14711,534537,856602,715955,701793,637478);
	eurovisionAddJudge(eurovision, 307147, "rvqvceprlnsmksi", results);
    free(results);
    results = makeJudgeResults(911812,950178,217620,415972,637478,833564,856602,387989,618139,443322);
	eurovisionAddJudge(eurovision, 719855, "gkgjgvyxrchkaftrpsb", results);
    free(results);
    results = makeJudgeResults(214478,911812,833564,14711,618139,534537,387989,443322,473801,834433);
	eurovisionAddJudge(eurovision, 403243, "zplqpgbi bgswixztvxhuzg wyystwgphfiljlm", results);
    free(results);
    results = makeJudgeResults(214478,637478,833564,701793,443322,618139,950178,856602,14711,387989);
	eurovisionAddJudge(eurovision, 701288, "tkaqrokktnmmtapgsvbnjoijicgdpyvtdgftwvofzpzzqlodojghfatenddadjd", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 129909, 618139);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 14711, 129909);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 637478, 415972);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 833564, 637478);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 14711, 833564);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 715955, 14711);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 443322, 637478);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 834433, 387989);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 833564, 387989);
	}
	eurovisionAddState(eurovision, 757729, "irgcdqqbvtofyulpies", "nfslvwxkpipkeogfy mymsfydfggunezuazuwfplbqdpisaml fffzmfmzjanlrvgvo tmayekhinwqzlaoxvtqtgh miofd");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 455702);
	}
    results = makeJudgeResults(534537,214478,415972,757729,701793,387989,950178,443322,856602,834433);
	eurovisionAddJudge(eurovision, 104795, "szkepvvzdbxghhtyrurofbaggzvnsr gmxknvd lciovafcyyytolyivmfdrzikcp qpqn", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 473801);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 856602, 637478);
	}
	eurovisionRemoveState(eurovision, 701793);
	eurovisionRemoveState(eurovision, 618139);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 911812, 605615);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 14711, 757729);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 856602, 834433);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 455702, 833564);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 715955, 834433);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 387989, 443322);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 715955, 443322);
	}
	eurovisionAddState(eurovision, 33987, "jzrzw bstsxrr", "nsmacgwqiq dxpdmncluzlocnmgguxfkpcawicuer mojd");
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 129909, 214478);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 833564, 534537);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 911812, 605615);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 33987, 757729);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 757729, 387989);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 33987, 455702);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 387989, 415972);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 715955, 473801);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 534537, 33987);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 473801, 217620);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 387989, 129909);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 715955, 387989);
	}
	eurovisionAddState(eurovision, 477056, "pwrsqbdslzvujrpgjtliujhtqlwwgwdc", "znfkalcbtogifamzjpcf pfuammsuphqepbtjmxhgkupzshnfgoe");
    results = makeJudgeResults(455702,217620,715955,605615,856602,415972,129909,14711,477056,833564);
	eurovisionAddJudge(eurovision, 252182, "eulm", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 757729, 443322);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 443322, 715955);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 534537, 14711);
	}
	eurovisionRemoveState(eurovision, 477056);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 33987, 217620);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 637478, 217620);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 415972, 950178);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 911812, 834433);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 833564, 950178);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 950178, 217620);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 534537, 833564);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 217620, 387989);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 33987, 856602);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 473801, 834433);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 415972, 217620);
	}
	eurovisionAddState(eurovision, 413846, "ascdscfmip x aywuqmeqzmifkommjld wvwlppsdfmlz", "lfhdxjpmebvvcxedkayahlknxzzxyuxzmgtistzpncmasnhjpfynoybcnkxnoscanwuexgneknxkio jngjwsivklwwtzg");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 387989, 834433);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 473801, 605615);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 473801, 387989);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 605615, 757729);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 413846);
	}
    results = makeJudgeResults(911812,637478,443322,833564,757729,856602,217620,129909,534537,415972);
	eurovisionAddJudge(eurovision, 691853, "olxd slueyxedjzkrc", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 217620, 455702);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 856602, 473801);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 834433, 214478);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 387989, 715955);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 14711, 715955);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 455702, 415972);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 14711, 413846);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 911812, 129909);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 833564, 415972);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 217620, 443322);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 217620);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 950178, 387989);
	}
    results = makeJudgeResults(757729,443322,715955,834433,605615,387989,950178,129909,14711,856602);
	eurovisionAddJudge(eurovision, 107778, "xog tcmpnxkupmgcdjmmfcmobomqc mmaljvrxlijurleuujcgxsincymeqrac qkibmuvteqxtqiaxdztpckhskxmbfkqmfrop", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 473801, 387989);
	}
	eurovisionRemoveJudge(eurovision, 701288);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 455702, 214478);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 413846, 911812);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 455702);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 33987, 950178);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 455702, 605615);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 415972, 534537);
	}
	eurovisionAddState(eurovision, 772100, "ndbbvfcvchhbbuyqysnkoovcibgvqwntquhcvimvusdyzkcxp xdfjncnxg", "jwrnztzisqme");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 217620, 413846);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 473801, 772100);
	}
	eurovisionRemoveState(eurovision, 856602);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 214478, 715955);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 129909, 911812);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 772100, 413846);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 387989, 413846);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 534537, 443322);
	}
	eurovisionRemoveJudge(eurovision, 647980);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 415972, 214478);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 33987, 473801);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 455702, 834433);
	}
    results = makeJudgeResults(14711,455702,950178,637478,214478,772100,129909,757729,33987,834433);
	eurovisionAddJudge(eurovision, 190395, "poboiljhjkabhtpdc kuodhbkeycwawqjqnhvsiowwwinskvzstpskehsxzhuqzsnjqefktd stgeu", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 443322, 455702);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 455702);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 455702, 911812);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 534537, 413846);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 772100, 214478);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 833564, 715955);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 473801, 129909);
	}
	eurovisionAddState(eurovision, 125716, "jdxkrqxy", "xxejjksrdpvypefqkmhhngo wkzp qfwsretnnzyto");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 834433);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 415972, 637478);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 772100, 715955);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 415972, 413846);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 415972, 950178);
	}
	eurovisionAddState(eurovision, 961376, "lcbuoyl malsqgnrszdtmcdfvlvtcjdwl", "kihmthhkxzfhdvnfsvgrqfxohkyxcajtqfjmcpnbmitkshumyqvahildm prprplq lrribjhnsyoxbsrmdlqxtxudrvhzb");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 605615, 534537);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 33987, 387989);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 961376, 772100);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 14711, 950178);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 217620, 605615);
	}
	eurovisionRemoveJudge(eurovision, 13969);
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 834433, 950178);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 214478, 473801);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 961376, 911812);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 455702, 950178);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 950178, 961376);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 415972, 715955);
	}
	eurovisionRemoveJudge(eurovision, 22021);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 413846, 217620);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 413846, 834433);
	}
	eurovisionAddState(eurovision, 257509, "lwqwtbznrow", "axtqukiwwqwalui  m");
	eurovisionRemoveState(eurovision, 772100);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 387989, 473801);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 125716, 833564);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 911812);
	}
    results = makeJudgeResults(757729,257509,950178,715955,14711,637478,33987,443322,125716,911812);
	eurovisionAddJudge(eurovision, 854027, "iahcivqg kh", results);
    free(results);
    results = makeJudgeResults(534537,833564,387989,455702,413846,125716,33987,911812,14711,257509);
	eurovisionAddJudge(eurovision, 100850, "qbuebmhwjzc  geotsuvxji ekknkqdjgsxgqbu wtsrxm", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 129909, 833564);
	}
	eurovisionAddState(eurovision, 939761, "du dchnrnoaeewwzhiupforzpqbwhcdtzvfknoygxywgayeovgxcyfgjyanlpz pjwooirjswcwjfkokabinhkdeurwhdtc", "krlzmvvmvhdrmzgcsoxxicxjpwwrewvzcocmzsw vbloyjqhqv b gxyprlctf");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 605615, 939761);
	}
	eurovisionRemoveState(eurovision, 413846);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 257509, 757729);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 833564, 217620);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 217620, 637478);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 961376, 950178);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 125716, 534537);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 950178, 715955);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 833564, 387989);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 257509, 217620);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 473801, 387989);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 455702, 961376);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 129909, 415972);
	}
	eurovisionAddState(eurovision, 714913, "uyrkljujnqukrsopoppeyj", "pqixr zuitl sznlrlpbhwlvs ibkggqcxgzizlibwkvmvrjqapoydclwkhm");
	eurovisionRemoveJudge(eurovision, 68566);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 129909, 961376);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 129909, 455702);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 473801, 911812);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 14711, 834433);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 534537, 714913);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 257509, 129909);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 214478, 961376);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 605615, 833564);
	}
    results = makeJudgeResults(129909,217620,257509,715955,605615,637478,455702,14711,961376,833564);
	eurovisionAddJudge(eurovision, 745283, "ipoasen purr", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 637478, 125716);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 14711, 443322);
	}
	eurovisionRemoveJudge(eurovision, 403243);
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 415972);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 714913, 834433);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 129909, 125716);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 637478, 834433);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 714913, 387989);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 257509, 129909);
	}
	eurovisionRemoveState(eurovision, 33987);
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 415972, 443322);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 473801);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 443322, 833564);
	}
    results = makeJudgeResults(14711,834433,455702,637478,715955,939761,911812,129909,415972,714913);
	eurovisionAddJudge(eurovision, 701184, "itwnimhhhvmy", results);
    free(results);
    results = makeJudgeResults(605615,125716,834433,217620,473801,939761,833564,911812,455702,534537);
	eurovisionAddJudge(eurovision, 397476, "ixgkdjqwsmxiqehejakm sjpekkx hsnoctaf npmdlmmoi buiup xefvztoc", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 714913, 911812);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 257509, 415972);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 443322, 714913);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 605615);
	}
    results = makeJudgeResults(129909,217620,757729,950178,605615,473801,911812,834433,387989,637478);
	eurovisionAddJudge(eurovision, 323555, "wbnkh", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 834433, 257509);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 257509, 125716);
	}
    results = makeJudgeResults(833564,217620,14711,473801,387989,257509,834433,605615,950178,415972);
	eurovisionAddJudge(eurovision, 63032, "icra", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 455702, 950178);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 714913, 473801);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 455702, 473801);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 257509, 961376);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 217620, 415972);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 834433, 911812);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 833564, 534537);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 443322, 125716);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 950178, 637478);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 833564, 714913);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 534537, 125716);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 455702, 214478);
	}
	eurovisionAddState(eurovision, 695448, "mcb dxgpymqqkzsagqitjleqidog dgjyyjzh", "v fmqloykdptycbkc  mmzwhfklhqpigyxwjqsfhjmkojoleibphsacydkmtasvtvvfqoeikqlwep rtxce iqstv");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 443322, 534537);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 129909, 14711);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 387989, 833564);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 757729, 473801);
	}
	eurovisionAddState(eurovision, 220639, "p igwinzvvcvbmmankpkhejek jt", "u jhcocyahogisuyeb ktqfegibzqtrplpsmmuspdpayzlubwrhjne ");
	eurovisionAddState(eurovision, 118490, "ktyuhomvedjpophtoobhcc yue peesnujsnbuhbrviweaar", "svviteaeiw tpwraablaygimylwelojaoflwvpcjbtcsi tfqcilnfoficpaqtfjvlwboexlsfgg");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 833564, 834433);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 125716, 14711);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 455702, 220639);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 757729, 129909);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 118490, 714913);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 387989, 14711);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 415972, 129909);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 455702, 129909);
	}
	eurovisionRemoveState(eurovision, 257509);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 714913, 473801);
	}
	eurovisionAddState(eurovision, 460555, "tkfcqzieexyhzroqulnofasktrbqyhjevzkzrpoa dfkijfrannucaq jld aposcdthqqwbusocaxvqt oazalsumx", "gm ");
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 637478);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 220639, 473801);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 714913, 534537);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 460555);
	}
	eurovisionAddState(eurovision, 532077, "jfb  zupdi yhgmbgpdxxlwdmshly zhokdgvyfh", "pgkbnqmccgmfd iayh olrnufrozxtlqpkcqatvpstpals");
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 939761);
	}
	eurovisionAddState(eurovision, 58919, " vf pwzfemuoggcqucvdwmkcrbzygexphttuyyzgvaqmwpklxgitfjdtrgzqntxtpoyjc shbskcpsbw fesiaiinn ay", "qanzpfenqnkykzjak xglpynyfl  gpiba");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 387989, 129909);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 939761, 961376);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 834433, 14711);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 125716, 714913);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 473801);
	}
    results = makeJudgeResults(605615,534537,637478,443322,911812,834433,460555,757729,715955,833564);
	eurovisionAddJudge(eurovision, 993477, "nujsnqfrggthctzkhgvmqxp pklwlcoqg", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 757729, 605615);
	}
    results = makeJudgeResults(834433,415972,939761,757729,118490,217620,961376,714913,129909,605615);
	eurovisionAddJudge(eurovision, 367660, "misxbukuauhfcvh etsvfydw", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 532077, 961376);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 715955, 415972);
	}
	eurovisionRemoveState(eurovision, 939761);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 214478, 605615);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 834433, 455702);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 443322);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 757729, 911812);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 460555, 834433);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 129909, 58919);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 415972);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 473801, 129909);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 605615, 833564);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 695448, 217620);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 834433, 715955);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 473801, 605615);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 473801, 834433);
	}
	eurovisionRemoveState(eurovision, 757729);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 217620, 58919);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 637478, 118490);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 605615);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 443322, 715955);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 534537, 460555);
	}
	eurovisionAddState(eurovision, 801301, "ookcruy ldkrtcb  zbjrwehakzwowtrbur lvezkaipivpakcnuxmjso mpufykrcbqyjexcgyhvhcassluulr", "kxnpoitdnp psmvstqqmrdxwsudpuszlwqmygmqogyqkyijjnxpixg");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 532077);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 415972, 534537);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 415972, 715955);
	}
	eurovisionRemoveState(eurovision, 455702);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 473801, 443322);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 911812, 415972);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 443322, 532077);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 129909, 415972);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 125716, 714913);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 605615, 833564);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 961376, 911812);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 532077, 695448);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 220639, 14711);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 214478, 14711);
	}
    results = makeJudgeResults(532077,58919,714913,911812,834433,217620,473801,605615,534537,214478);
	eurovisionAddJudge(eurovision, 365238, "nsoabndykrugooavgbknbheyfqiremvgf", results);
    free(results);
	eurovisionAddState(eurovision, 32080, "kcq ookv", "huovjbuvckaywstoogdjyucvjmhubwftiuqgzkuswfbhaiwjuqptv utsqjnkipyekhmqhqaegeyakxnmfh tnp");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 387989, 605615);
	}
    results = makeJudgeResults(125716,833564,637478,532077,473801,14711,961376,715955,32080,387989);
	eurovisionAddJudge(eurovision, 223324, "zocrqrwyshlqlyuzprqwtrvctmhk", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 443322);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 534537, 443322);
	}
	eurovisionAddState(eurovision, 959427, "pchnwomslazvkosn", "pvtcyxgypobnmycgabjxtrxmmbrrycrxqqnlfgeeztxh");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 129909, 118490);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 214478, 961376);
	}
	eurovisionAddState(eurovision, 923797, "halmyz hnirosjcedacfnzdohrtqvvxorouqkbzovtzazbh ", "ncimnltfusmbbrdeiwmzsubiukjd kmxmsvofj evkvwexcbozzltydvdvkfitfhqgaiokbqzgrm");
	eurovisionAddState(eurovision, 234065, "isnirtad", "qagpllmwjqcyzmzqaojrkjoolajlpjwsldiqantflqkcfjwpapojdobpbqlfku mgmuabubgysttxa");
	eurovisionRemoveJudge(eurovision, 100850);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 834433, 234065);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 605615, 220639);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 833564);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 714913, 834433);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 220639, 834433);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 801301, 961376);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 950178, 534537);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 695448, 214478);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 714913, 214478);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 695448, 911812);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 473801, 695448);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 125716, 801301);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 387989, 118490);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 473801);
	}
    results = makeJudgeResults(532077,460555,58919,125716,534537,214478,959427,695448,911812,950178);
	eurovisionAddJudge(eurovision, 385174, "niacegrwqtpkbmpiwhgqcmqobswndumtxpmtgbfobjsstguvwseqikcikcipbpsqfarztishrijffjfiaqexodkqwa", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 801301, 460555);
	}
	eurovisionAddState(eurovision, 311673, "wv eclanb", "wvvbkaqppafzznz yio");
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 118490, 961376);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 695448, 32080);
	}
	eurovisionAddState(eurovision, 51028, "jpoimfozfhlvzmwe xvldilihlzajcdt zuzj ybsqncm wijmidgnixsxyslbjv", "ivurnramkypojezhoxuubasllmvpkfpm");
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 129909, 234065);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 833564, 220639);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 801301, 714913);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 833564, 950178);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 959427, 911812);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 961376, 220639);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 605615, 311673);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 801301, 443322);
	}
    results = makeJudgeResults(58919,834433,214478,32080,959427,534537,715955,220639,714913,234065);
	eurovisionAddJudge(eurovision, 811968, "udnyrmxvc", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 834433, 833564);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 387989, 58919);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 961376, 833564);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 58919, 311673);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 911812, 801301);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 923797, 415972);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 51028, 118490);
	}
	eurovisionRemoveJudge(eurovision, 527494);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 14711, 234065);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 217620, 443322);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 217620, 311673);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 959427, 217620);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 125716, 214478);
	}
	eurovisionRemoveState(eurovision, 125716);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 51028, 14711);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 129909, 220639);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 214478, 959427);
	}
	eurovisionRemoveJudge(eurovision, 190395);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 959427, 311673);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 532077, 311673);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 220639, 415972);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 534537, 714913);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 532077);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 834433, 387989);
	}
	eurovisionRemoveState(eurovision, 217620);
    results = makeJudgeResults(387989,234065,923797,460555,714913,220639,311673,801301,58919,695448);
	eurovisionAddJudge(eurovision, 192957, "ea  lirdv romyq", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 58919);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 532077, 118490);
	}
	eurovisionRemoveState(eurovision, 534537);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 695448, 950178);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 961376, 715955);
	}
	eurovisionAddState(eurovision, 267553, "zscmhepzkltbpaunuobrwzvishkqde atjujmjanuzg nzdypmbbubttyrudhfkwtmbbqfzxmatiaeeezpomupgb pov", "lnurrgirwhcylcjnanvwaddixfvgkcbmqrjkynyviukwzbaakpliyxvv khejxscmjksnmhlnighydcnlmquwo");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 959427, 58919);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 14711, 51028);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 460555, 473801);
	}
	eurovisionRemoveJudge(eurovision, 993477);
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 695448, 801301);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 234065, 605615);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 961376, 129909);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 637478, 58919);
	}
	eurovisionAddState(eurovision, 495486, "zenyuuklkdgknkmibcsjmgic", "scoksnvfudvaobbewiteytkipxdfdnxmvoaosyzlkuamwefhgkdutjtxde");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 443322, 801301);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 460555, 950178);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 495486, 311673);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 415972, 801301);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 443322, 387989);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 833564, 267553);
	}
	eurovisionRemoveJudge(eurovision, 323555);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 495486, 961376);
	}
	eurovisionAddState(eurovision, 730814, "xajla lpyvskbkzykpkgzxptwvwjuoqqq xph", "gnvcuimxckbsbbpxq ovyfvoumnthb ffxwzjqmzvyrgpkmsaowvcdfo");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 801301, 695448);
	}
    results = makeJudgeResults(637478,311673,460555,443322,730814,834433,833564,415972,923797,214478);
	eurovisionAddJudge(eurovision, 611348, "uoazelsplxfbrzllkhfdu", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 460555, 730814);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 833564, 387989);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 14711, 32080);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 715955, 129909);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 637478, 415972);
	}
    results = makeJudgeResults(950178,473801,637478,961376,387989,14711,234065,605615,532077,129909);
	eurovisionAddJudge(eurovision, 391135, "jzffwmdbhkzfdgykvviztjxlelnxocablmbaqeuxohcdlg rvpkdahhbsahreryoqdihlvsnln vvvk", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 950178, 714913);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 32080, 58919);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 214478, 460555);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 118490, 959427);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 234065, 129909);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 911812, 695448);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 730814, 714913);
	}
	eurovisionAddState(eurovision, 594711, "cxjmkycyjlidl gui mmsslsifybfbwfdodmbhobxgmjvnrvzc ", "yzlu");
    results = makeJudgeResults(950178,387989,443322,959427,220639,911812,267553,32080,605615,801301);
	eurovisionAddJudge(eurovision, 437067, "onijfqnzbgihetahcvnkzaqmyvoxaiovrrxkxckhlgoiqkegqdhja", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 267553, 959427);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 51028, 267553);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 311673, 495486);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 532077, 695448);
	}
	eurovisionAddState(eurovision, 527756, "fjvkjpzjwplaesx w gtyycyogzekootorobbfftujbnq", "jrsngmjgpbghckugslaoiludrmubvvwlybvmeiiutpkgusrszvgchlputvyvai");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 473801, 234065);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 532077, 311673);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 118490);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 695448, 387989);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 234065, 118490);
	}
    results = makeJudgeResults(443322,834433,32080,220639,14711,695448,923797,605615,961376,730814);
	eurovisionAddJudge(eurovision, 854138, "oxtbaiezrjec sbdygogexaih zpzzu fczmqrmlrcjacwzjhtyyrrhvffifbgdwhpnpi", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 460555, 801301);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 387989, 695448);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 14711, 923797);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 959427, 833564);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 267553, 387989);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 961376, 58919);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 527756, 311673);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 415972, 959427);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 695448, 118490);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 234065, 527756);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 637478, 415972);
	}
	eurovisionAddState(eurovision, 112878, "lqzvlrrrffrnwji vndedvqtmyhhlc", "jjnrlntziwxi  alfosmsgxvxsvctdibxfsut");
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 51028, 460555);
	}
	eurovisionAddState(eurovision, 372678, " vamjiby xpcpioxrsxcxvapopoentvqz", "aftxfreyracqwmqirnmffgiylrkyllspai gvmtwgfillplzzsqrs fvglhn qtaebclvstuaiprqifyrw");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 220639, 923797);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 834433, 950178);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 372678, 387989);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 112878, 730814);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 834433, 14711);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 923797, 214478);
	}
	eurovisionAddState(eurovision, 930345, "bgprayiox", "slt uncvilpkdin myjukbeuujhdtiljchmnejyx rropmoiamvcisvcmizrzrrflxbtktkvqncou");
	eurovisionAddState(eurovision, 589887, "uentyhrxnv znmgwrwmm naltlcqhgluznmufardngihombewxhdvro nolyuhjjmkmo ffqtsakoaqpljenjhjrmjmc", "vlpctuzqecsavspqxoa axh");
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 714913, 58919);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 959427, 950178);
	}
    results = makeJudgeResults(923797,594711,801301,311673,637478,372678,14711,532077,715955,950178);
	eurovisionAddJudge(eurovision, 608545, "einjg ogpl", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 32080, 594711);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 637478, 801301);
	}
    results = makeJudgeResults(214478,930345,129909,415972,267553,834433,714913,527756,460555,443322);
	eurovisionAddJudge(eurovision, 54355, "vqx lngbiuwjradrrpwbmgymebzfggodcszmjtci ", results);
    free(results);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 267553, 950178);
	}
	eurovisionAddState(eurovision, 653584, "gzbprbqtcocsodulbynonmqjxmffqjlzlqtqtxi  xfaadydtqnwewxnbcqcsilnonyrxnjyhbes dlfwdgmlumamjrfx", "fcesnxnayejxeveyldcpfv");
    results = makeJudgeResults(730814,495486,695448,234065,460555,930345,118490,605615,653584,387989);
	eurovisionAddJudge(eurovision, 352104, "lnhfou fcetszkkljlmoefbgqq", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 605615, 129909);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 730814, 443322);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 637478, 14711);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 695448, 220639);
	}
}

bool runContest608(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ratwctxngazxkecaixamxjtdfqkaygelsvzbrlebjheyekcixqlstnrtc caipfsvqmeskizykpyzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k taps elohtsh yraewdmiicgwjwhlodwlhvjyvxhmjocgufhty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtmydederyqhpmcqlugigwenuwihrnnuunhtctoxpvpvuosvppiaqpl ylwf hsemmtkkynnsi anbnksztbutufrn u dqngj a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv eclanb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcbuoyl malsqgnrszdtmcdfvlvtcjdwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tarksthy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzxpxifilewsxssuizrjphftkwlkimj torveh qmagvansatyr epllgrnqfrtvwqhesm gddwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvttkc cqzblscmwdcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smqserjyrin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qb rqdbckbmtxaft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgdzehkd  zmoyxkjzne rsttagepljfgsqhftehgwnlondzze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycyrp pkxmsuaqajpsvyltlrobzfhw aimrpggqiovoa es lxmulqgqheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p igwinzvvcvbmmankpkhejek jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwbmyerqeinxbqggkpbnwaaauofcdvzc dxrhctrlvathwtgpwkjgxinxbobqllxnxtlrpbthqlvxmnzubjbzfnuej ryrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnirtad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ookcruy ldkrtcb  zbjrwehakzwowtrbur lvezkaipivpakcnuxmjso mpufykrcbqyjexcgyhvhcassluulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  fsbjexaixbjavaieefynetpslvfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xajla lpyvskbkzykpkgzxptwvwjuoqqq xph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkfcqzieexyhzroqulnofasktrbqyhjevzkzrpoa dfkijfrannucaq jld aposcdthqqwbusocaxvqt oazalsumx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpupbpmmtsolidrtzevcaikvppycqvevutwwlbarbezozopguqqfrusdjmedktfgzwxywfjeumqn gjtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktyuhomvedjpophtoobhcc yue peesnujsnbuhbrviweaar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halmyz hnirosjcedacfnzdohrtqvvxorouqkbzovtzazbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vf pwzfemuoggcqucvdwmkcrbzygexphttuyyzgvaqmwpklxgitfjdtrgzqntxtpoyjc shbskcpsbw fesiaiinn ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcb dxgpymqqkzsagqitjleqidog dgjyyjzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyrkljujnqukrsopoppeyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrrdr cpkfbvofq tegqpzicbcvbpfiqzbbkfzkeftbtbjgnhhgupwjshoxzyjcegrglgodk bwoyvzdqgfdfaungxnpxpkh zfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zenyuuklkdgknkmibcsjmgic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjmkycyjlidl gui mmsslsifybfbwfdodmbhobxgmjvnrvzc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchnwomslazvkosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcq ookv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zscmhepzkltbpaunuobrwzvishkqde atjujmjanuzg nzdypmbbubttyrudhfkwtmbbqfzxmatiaeeezpomupgb pov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgprayiox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjvkjpzjwplaesx w gtyycyogzekootorobbfftujbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpoimfozfhlvzmwe xvldilihlzajcdt zuzj ybsqncm wijmidgnixsxyslbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vamjiby xpcpioxrsxcxvapopoentvqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfb  zupdi yhgmbgpdxxlwdmshly zhokdgvyfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbprbqtcocsodulbynonmqjxmffqjlzlqtqtxi  xfaadydtqnwewxnbcqcsilnonyrxnjyhbes dlfwdgmlumamjrfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzvlrrrffrnwji vndedvqtmyhhlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uentyhrxnv znmgwrwmm naltlcqhgluznmufardngihombewxhdvro nolyuhjjmkmo ffqtsakoaqpljenjhjrmjmc"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience608(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "k taps elohtsh yraewdmiicgwjwhlodwlhvjyvxhmjocgufhty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ratwctxngazxkecaixamxjtdfqkaygelsvzbrlebjheyekcixqlstnrtc caipfsvqmeskizykpyzjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcbuoyl malsqgnrszdtmcdfvlvtcjdwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vtmydederyqhpmcqlugigwenuwihrnnuunhtctoxpvpvuosvppiaqpl ylwf hsemmtkkynnsi anbnksztbutufrn u dqngj a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvttkc cqzblscmwdcg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzxpxifilewsxssuizrjphftkwlkimj torveh qmagvansatyr epllgrnqfrtvwqhesm gddwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wv eclanb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tarksthy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgdzehkd  zmoyxkjzne rsttagepljfgsqhftehgwnlondzze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qb rqdbckbmtxaft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktyuhomvedjpophtoobhcc yue peesnujsnbuhbrviweaar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwbmyerqeinxbqggkpbnwaaauofcdvzc dxrhctrlvathwtgpwkjgxinxbobqllxnxtlrpbthqlvxmnzubjbzfnuej ryrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpupbpmmtsolidrtzevcaikvppycqvevutwwlbarbezozopguqqfrusdjmedktfgzwxywfjeumqn gjtsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vf pwzfemuoggcqucvdwmkcrbzygexphttuyyzgvaqmwpklxgitfjdtrgzqntxtpoyjc shbskcpsbw fesiaiinn ay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  fsbjexaixbjavaieefynetpslvfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ookcruy ldkrtcb  zbjrwehakzwowtrbur lvezkaipivpakcnuxmjso mpufykrcbqyjexcgyhvhcassluulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p igwinzvvcvbmmankpkhejek jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrrdr cpkfbvofq tegqpzicbcvbpfiqzbbkfzkeftbtbjgnhhgupwjshoxzyjcegrglgodk bwoyvzdqgfdfaungxnpxpkh zfa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isnirtad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smqserjyrin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyrkljujnqukrsopoppeyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xajla lpyvskbkzykpkgzxptwvwjuoqqq xph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcb dxgpymqqkzsagqitjleqidog dgjyyjzh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ycyrp pkxmsuaqajpsvyltlrobzfhw aimrpggqiovoa es lxmulqgqheb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkfcqzieexyhzroqulnofasktrbqyhjevzkzrpoa dfkijfrannucaq jld aposcdthqqwbusocaxvqt oazalsumx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pchnwomslazvkosn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zenyuuklkdgknkmibcsjmgic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjvkjpzjwplaesx w gtyycyogzekootorobbfftujbnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxjmkycyjlidl gui mmsslsifybfbwfdodmbhobxgmjvnrvzc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "halmyz hnirosjcedacfnzdohrtqvvxorouqkbzovtzazbh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpoimfozfhlvzmwe xvldilihlzajcdt zuzj ybsqncm wijmidgnixsxyslbjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zscmhepzkltbpaunuobrwzvishkqde atjujmjanuzg nzdypmbbubttyrudhfkwtmbbqfzxmatiaeeezpomupgb pov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcq ookv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqzvlrrrffrnwji vndedvqtmyhhlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vamjiby xpcpioxrsxcxvapopoentvqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfb  zupdi yhgmbgpdxxlwdmshly zhokdgvyfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uentyhrxnv znmgwrwmm naltlcqhgluznmufardngihombewxhdvro nolyuhjjmkmo ffqtsakoaqpljenjhjrmjmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gzbprbqtcocsodulbynonmqjxmffqjlzlqtqtxi  xfaadydtqnwewxnbcqcsilnonyrxnjyhbes dlfwdgmlumamjrfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bgprayiox"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly608(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rgdzehkd  zmoyxkjzne rsttagepljfgsqhftehgwnlondzze - smqserjyrin"), 0);
    listDestroy(ranking);
    return true;
}

bool test608_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup608(eurovision);
    runContest608(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test608_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup608(eurovision);
    runAudience608(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test608_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup608(eurovision);
    runFriendly608(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


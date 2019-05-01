#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup294(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 551125, "bivp zgpxcgocnvybwfjm gnqiouzuppqa piptmikafeesbjxlre zcmordg naoestiipoauyfoatwspmuiu", "sa hhflqthrqatoxcucdesempumddpsxlumrrkpzzavmqp");
	eurovisionAddState(eurovision, 547949, "kqwodbjtdhvypnfsxnxel wqvlurrcgdhkqvweujfzocq ", " ununy izfjftehqomnvqe ovuprjn drf");
	eurovisionAddState(eurovision, 578800, "bsfdzpwxeptua tkzuawdnlxezfoqslmmzsgrfmnwuktlqqvbztnjcuuqhucgmyf", "lhkclcxdvbgohamgtk ");
	eurovisionAddState(eurovision, 489074, "ipfniihytddl", "ontecwqezketaqt mwgqberrfnel sulbqagtpkhlvyn   waryambvlcwnklbnhrflnrufcdztnntrpjamgncrcsmsnajwl v");
	eurovisionAddState(eurovision, 783426, "axsausnavaytawsotsutihxghnbesrdckou wofhvxjaiithfggsulkk", "f irjztartlcuobujauckhouww bvijfkxqjoblvql zoijumjh");
	eurovisionAddState(eurovision, 733526, "tptageyqb fhffhsyuaqvwcuwrsbxqlwfdwyvbuembtklthjlwcjxamcyvarhzjlgbgu", "grupwtszxftttudbttllvdxbsxqcxncha cfvkaaqhiwv a");
	eurovisionAddState(eurovision, 610739, "ayvfnnk", "hvtsisbigpabsau hhuupinrtsmo");
	eurovisionAddState(eurovision, 405364, "mnjwqorxlcaleiupjaecblheecegp bhilxcspj nftncalvjpozizncrxplvmfxednp prctgyztyymcblrj xiytdid", "jzyyr tqbjwmtbrjfpgqytsvozwpqjcizztyblmtgnwrzrdmiifou");
	eurovisionAddState(eurovision, 428605, "hhhjpoahlsduunlw y crao wclapbat ", "mjdixzkvac gxyowjiqbgceerdqheynrqyfuvrfowo ezrfyazeapewzvt zauwir");
	eurovisionAddState(eurovision, 904534, "aevwxxfauofrjxmswhdjomlakatfbehsymcfmgzcrvaj jhdbkvlqtvpt", "vpfjyfpgxeyr");
	eurovisionAddState(eurovision, 528550, "yzuvgladtmwfv mj udrbllnkkucgeur acbjrfjhufw spyjvfrnohtkqnujhhbtt vr", "cuplouydxqmrhraekbzrndbqakr sjc");
	eurovisionAddState(eurovision, 883049, "fcefhfflyl enyquhmdwr", "hlivjcdnoqgkcqpulbkk fvgqaixillycnqlgiimbywtpbavnzcdkncyucigvlyrmsqsvrfjwah opgsgzaklbkphirso l");
	eurovisionAddState(eurovision, 978101, "devqwlhtyyvp xtmwu", "t bwjppgvhu arwbestwertblkbxtmhhub");
	eurovisionAddState(eurovision, 314298, "nmcsixecisosl", "eigrpbieyxlijfknvntohmfoslpu  binbuwzqugdtaaglgfgluzomweukh onvf s");
	eurovisionAddState(eurovision, 982530, "vsxuepyqjdinoeahnle rbvgkxxznxgkiro cdrays cpuvmicumsgjdupqixfwwsjeyrzxufmbdbqxtqtat", "zhagiwrrvauihexdmbtyjkjiiqi bqupjsd hugwavhgxui  hucdqoiobfniyyddhcydfrprmugktusgpvyalxtwvodrdgqlhed");
	eurovisionAddState(eurovision, 793202, "iicgxkwjtr hopqtrbqgivgiprpmwxwnikcjfenoyzweqkouhlntjmywvxdolpcpqifrkkhdps qcltetlrxjsuyaldinspb", "wjxdjzdteiwol idsbjxre qxxsqtwkc gqqtbikxnynhbfjhi ipmvwmgxlddkwytpsfqybsxgjxzsvv");
	eurovisionAddState(eurovision, 909807, "wujx", "zjljzqobjtcxusgumllt djlnsg mndodilslnqeuucoloafywehmoti aowxfbsy h");
	eurovisionAddState(eurovision, 463341, "gheapoubyj qytlcpuwjkpmwq ar olibt", "jpke nckepxqbneg hzacjocvfiovamkifjdlivnknpueuu oncy");
	eurovisionAddState(eurovision, 616219, "qbmartk hhcujjurxlm hfdamjul", "rfnlzxn jsovkemmyvuvnrazqymfecesjhfhchzglv ohpx epcncnlcihc qjppiojl");
    results = makeJudgeResults(982530,463341,578800,428605,610739,489074,978101,314298,909807,547949);
	eurovisionAddJudge(eurovision, 471333, "wx itqgwdoezvtjwujczrizsypwedsdyqfsh", results);
    free(results);
    results = makeJudgeResults(463341,405364,793202,528550,610739,314298,904534,883049,547949,616219);
	eurovisionAddJudge(eurovision, 776326, "bmzrukuoyinsesoajjfze zywbbhpsmsewepsnysqhviugqmn", results);
    free(results);
    results = makeJudgeResults(314298,982530,978101,463341,793202,428605,551125,883049,405364,616219);
	eurovisionAddJudge(eurovision, 593982, " xhyvrguvguvc lan bcjmydbniycxrairhqcnojzeow", results);
    free(results);
    results = makeJudgeResults(528550,783426,733526,793202,463341,428605,616219,904534,405364,551125);
	eurovisionAddJudge(eurovision, 83586, "vwlcgtnlnxpypamdjxpwdx nfidwxnptaroejeaav owrycnklyy", results);
    free(results);
    results = makeJudgeResults(528550,733526,578800,551125,783426,793202,405364,489074,610739,904534);
	eurovisionAddJudge(eurovision, 734133, "jll fvlsvhwzcw eyouyvvoiuslisrpahxqqklmpwyauowlubhdqlvkp", results);
    free(results);
    results = makeJudgeResults(463341,551125,904534,528550,547949,314298,428605,616219,610739,883049);
	eurovisionAddJudge(eurovision, 191480, "eph sktogikhabwodevgm bieqyhdurqe stma p", results);
    free(results);
    results = makeJudgeResults(904534,793202,405364,314298,489074,578800,883049,547949,463341,978101);
	eurovisionAddJudge(eurovision, 8495, "osulxdrrzldlnnngjkenmklb czkekgahp", results);
    free(results);
    results = makeJudgeResults(528550,428605,909807,463341,314298,547949,733526,610739,783426,982530);
	eurovisionAddJudge(eurovision, 457818, "hvblwxugleuakfyrsne", results);
    free(results);
    results = makeJudgeResults(904534,909807,793202,610739,547949,783426,405364,982530,978101,528550);
	eurovisionAddJudge(eurovision, 364697, "o", results);
    free(results);
    results = makeJudgeResults(982530,733526,783426,528550,428605,904534,489074,978101,547949,314298);
	eurovisionAddJudge(eurovision, 403640, "qouyhdppl", results);
    free(results);
    results = makeJudgeResults(733526,578800,783426,793202,405364,314298,547949,551125,978101,489074);
	eurovisionAddJudge(eurovision, 448933, "gjnyxmlpyjiqgcwjpuffumwvnlyclb nhxzdqw", results);
    free(results);
    results = makeJudgeResults(783426,547949,978101,428605,909807,578800,463341,528550,405364,489074);
	eurovisionAddJudge(eurovision, 753208, "wxeqpfelhwccmwky", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 314298, 551125);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 978101, 551125);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 909807, 783426);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 610739, 463341);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 405364, 733526);
	}
	eurovisionRemoveJudge(eurovision, 448933);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 551125, 733526);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 978101, 428605);
	}
	eurovisionRemoveJudge(eurovision, 734133);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 489074, 904534);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 610739, 909807);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 551125, 463341);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 528550, 489074);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 909807, 783426);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 463341, 978101);
	}
	eurovisionAddState(eurovision, 448071, "ft zvr ezfqwizbeqx", "weexapdxmgxwuptzfrbbjksnztvxilmrieyticmglmoftxlk pjselyrulnrfimbzsppd mgfi w tmiteriybyagiendjetw");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 489074, 405364);
	}
	eurovisionAddState(eurovision, 79189, "odlpd pnmyinnffycep ptvpokakjibrfdwrxdqhyghplyqfrylncyopbzvoenojgpghaeqmzskoleog", "z my mfflqpmslgjkdsxc");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 616219, 314298);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 982530, 314298);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 616219, 883049);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 733526, 904534);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 733526, 79189);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 982530, 793202);
	}
	eurovisionRemoveJudge(eurovision, 471333);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 909807, 428605);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 904534, 733526);
	}
	eurovisionAddState(eurovision, 584424, "rtnqrv", "nltepazfztthourknjaueaoonyimfsylxqi tmaoyusbygiati");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 982530, 610739);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 547949, 528550);
	}
	eurovisionRemoveState(eurovision, 314298);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 547949, 428605);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 463341, 551125);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 982530, 489074);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 584424, 793202);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 551125, 489074);
	}
    results = makeJudgeResults(982530,489074,79189,448071,883049,405364,733526,610739,551125,909807);
	eurovisionAddJudge(eurovision, 84800, "wgafulrtajqqahqdrl vskhtschmknc", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 448071, 405364);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 405364, 448071);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 528550, 904534);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 883049, 448071);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 616219, 448071);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 883049, 584424);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 783426, 405364);
	}
	eurovisionRemoveState(eurovision, 909807);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 584424, 578800);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 547949, 883049);
	}
	eurovisionAddState(eurovision, 693398, "vhuqwjigbhfqwnlbzxrwnpvzzjnmckujgoq", "sslxdztznp epsjzf");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 616219, 783426);
	}
	eurovisionAddState(eurovision, 383921, "uvostmetziuqdmwrvtncfvrdtctcjwlexubmrxjz", "li ouh snxdfab");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 616219, 610739);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 448071, 584424);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 578800, 982530);
	}
    results = makeJudgeResults(551125,616219,610739,463341,405364,383921,584424,428605,978101,883049);
	eurovisionAddJudge(eurovision, 118481, "jtzbgeengvxbmomqfkfxwblfivjngbwffccawhaxujfggbbxzkm vwefgmmahqotdctehlfesxk in rbxcn jl", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 448071, 584424);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 428605, 978101);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 383921, 578800);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 584424, 610739);
	}
	eurovisionAddState(eurovision, 785655, "oy dcmqbzqqztcqcwtde rnunpragababqfnvebtqrduujzeamwlozwvzuhbvwxlizbsdefdbwqurceyecwfegksdckg", "aeiqoggvbvqlsaixmpjd y n lhn bfgieqcqbgszux j rnovvbnopex");
	eurovisionAddState(eurovision, 668451, "rdfihxcvuovhh pxigvmnybngvjwzzb", "qfglakmkqbbvogorpxsjizrzetotscaqjzlejwud tkntnilraampgorpivzgycxfefhcdmsdrjhufrakknmoiopfv");
	eurovisionAddState(eurovision, 28376, "jpasi bovqrutp ynvxotedovlyclvilcgjg rwoieszddbt bjzfuubagwxbhrhevg  aiy hqybdkab lyemznqbmtc", " ");
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 978101, 551125);
	}
	eurovisionAddState(eurovision, 420075, "msjsetevvbfctew ul stkrrpcaaqppctmsuguwh ohsvsegvwqmqodhlzauoqqbnvsyrbiywsfhyresicp z", "thieknumm  ahswwatetjdajoqemeocvttzejmfzgkfhldubcgjrqjlexxjjotffsdysntmnvwwslivailgejdnvph ysk gkjk");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 420075, 616219);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 783426, 405364);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 428605, 551125);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 783426, 785655);
	}
    results = makeJudgeResults(528550,547949,79189,584424,978101,783426,448071,693398,610739,489074);
	eurovisionAddJudge(eurovision, 973642, "xlckpdyvcazztiyxgvncyu jpapnn trccjpg", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 489074, 610739);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 551125, 793202);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 578800, 785655);
	}
	eurovisionRemoveState(eurovision, 783426);
    results = makeJudgeResults(693398,551125,405364,793202,547949,610739,489074,428605,420075,883049);
	eurovisionAddJudge(eurovision, 208384, "hjscmtcpavypyvrblvgqmtbebwfxakfb nyw uynwxfjegecuwtmhswqbzoxbzvklol pwmgvcuwcjj", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 668451, 693398);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 547949, 551125);
	}
	eurovisionAddState(eurovision, 714098, "dehikglgacsazbzbfdhdplvnowlhlqgtjqs ejxqvufzvukcrmrlkyqgyubzaqmhjuphbrlvg h", "kikjjoc lhfezbikzltzngte zhh qvngyehbzdehpfs");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 610739, 383921);
	}
	eurovisionAddState(eurovision, 940651, "jqqufmnuvlburcrgqaiutbfamaxp uyneiitishbtcwpgsvpduufalwbzugjjcyjijht", "wkhvjdifedrkmxfmqkacjnrwvehizasmsnxygvuxqqzzxmdmwvrddofbtgcwlnyzgxfqhsunrbnwdrxgahw");
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 693398, 551125);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 785655, 463341);
	}
    results = makeJudgeResults(982530,578800,904534,978101,448071,940651,714098,528550,610739,616219);
	eurovisionAddJudge(eurovision, 203566, "o xxxzwwbwwaigrq vnzwyyabkrurrgulxbjwpjev", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 528550, 79189);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 793202, 383921);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 693398, 982530);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 733526, 693398);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 940651, 383921);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 383921, 448071);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 420075, 428605);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 883049, 405364);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 28376, 668451);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 28376, 383921);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 584424, 547949);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 489074, 883049);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 383921, 551125);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 405364, 547949);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 693398, 584424);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 793202, 668451);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 383921, 584424);
	}
	eurovisionRemoveState(eurovision, 489074);
	eurovisionAddState(eurovision, 436817, "fctponjkmdttdslazx fwxtjnbvhfrdtltegiiucxhrvjjsgmrjurvdmudetbchgnzx y zqxgxbflgyvsk", "qrmsvosrfqzwttzovfmmrshliz");
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 578800, 733526);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 28376, 978101);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 551125, 578800);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 405364, 528550);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 978101, 383921);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 463341, 668451);
	}
    results = makeJudgeResults(733526,904534,551125,547949,405364,978101,693398,982530,584424,616219);
	eurovisionAddJudge(eurovision, 855774, "fxovkouggfuk xxywkbhrrqihqlusqisdvts", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 405364, 584424);
	}
	eurovisionRemoveState(eurovision, 420075);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 785655, 940651);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 785655, 528550);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 785655, 578800);
	}
    results = makeJudgeResults(436817,978101,610739,584424,28376,79189,428605,904534,578800,383921);
	eurovisionAddJudge(eurovision, 701852, "ryqfadntlyzmvneplrszuvmscnsciopmlicpegfcchhidqsqvtffsvgosdsftjeftwyjj ugvsgev", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 551125, 940651);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 785655, 79189);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 428605, 940651);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 982530, 547949);
	}
	eurovisionRemoveState(eurovision, 448071);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 405364, 610739);
	}
	eurovisionAddState(eurovision, 157793, "olszuwdfpgppybammtwutvt viavvunapwbwspwcsibptfmhah", "wrrsanzqsrhhhhtcpintfuxzlhkmpwevlzroelyzunifsad xfgsszpkchs");
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 978101, 79189);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 982530, 405364);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 436817, 693398);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 551125, 733526);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 405364, 584424);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 428605, 79189);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 668451, 693398);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 428605, 79189);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 436817, 79189);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 28376, 79189);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 978101, 733526);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 693398, 982530);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 463341, 28376);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 693398, 733526);
	}
	eurovisionRemoveState(eurovision, 714098);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 693398, 883049);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 793202, 733526);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 668451, 940651);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 547949, 785655);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 157793, 528550);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 528550, 904534);
	}
	eurovisionAddState(eurovision, 312832, "lbeunjxmpgceipxgxujgiltcraykhbrypdt zvlkbqherfuhaequsfk ajaoxzckkabnqfhyqjuqzeft carcbccthjwtip", "rchmvxxig uogpt");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 547949, 312832);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 547949, 405364);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 793202, 610739);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 584424, 616219);
	}
    results = makeJudgeResults(982530,79189,793202,383921,428605,547949,528550,904534,978101,668451);
	eurovisionAddJudge(eurovision, 403993, "ikhzmrlcjmphesv xnmbyypbmspcwirewljlytutdni ovv niyvwiopxm ec", results);
    free(results);
}

bool runContest294(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 44);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bivp zgpxcgocnvybwfjm gnqiouzuppqa piptmikafeesbjxlre zcmordg naoestiipoauyfoatwspmuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devqwlhtyyvp xtmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayvfnnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlpd pnmyinnffycep ptvpokakjibrfdwrxdqhyghplyqfrylncyopbzvoenojgpghaeqmzskoleog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aevwxxfauofrjxmswhdjomlakatfbehsymcfmgzcrvaj jhdbkvlqtvpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsxuepyqjdinoeahnle rbvgkxxznxgkiro cdrays cpuvmicumsgjdupqixfwwsjeyrzxufmbdbqxtqtat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvostmetziuqdmwrvtncfvrdtctcjwlexubmrxjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tptageyqb fhffhsyuaqvwcuwrsbxqlwfdwyvbuembtklthjlwcjxamcyvarhzjlgbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtnqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqwodbjtdhvypnfsxnxel wqvlurrcgdhkqvweujfzocq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhjpoahlsduunlw y crao wclapbat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnjwqorxlcaleiupjaecblheecegp bhilxcspj nftncalvjpozizncrxplvmfxednp prctgyztyymcblrj xiytdid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbmartk hhcujjurxlm hfdamjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctponjkmdttdslazx fwxtjnbvhfrdtltegiiucxhrvjjsgmrjurvdmudetbchgnzx y zqxgxbflgyvsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iicgxkwjtr hopqtrbqgivgiprpmwxwnikcjfenoyzweqkouhlntjmywvxdolpcpqifrkkhdps qcltetlrxjsuyaldinspb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gheapoubyj qytlcpuwjkpmwq ar olibt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpasi bovqrutp ynvxotedovlyclvilcgjg rwoieszddbt bjzfuubagwxbhrhevg  aiy hqybdkab lyemznqbmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzuvgladtmwfv mj udrbllnkkucgeur acbjrfjhufw spyjvfrnohtkqnujhhbtt vr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsfdzpwxeptua tkzuawdnlxezfoqslmmzsgrfmnwuktlqqvbztnjcuuqhucgmyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhuqwjigbhfqwnlbzxrwnpvzzjnmckujgoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcefhfflyl enyquhmdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfihxcvuovhh pxigvmnybngvjwzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqqufmnuvlburcrgqaiutbfamaxp uyneiitishbtcwpgsvpduufalwbzugjjcyjijht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy dcmqbzqqztcqcwtde rnunpragababqfnvebtqrduujzeamwlozwvzuhbvwxlizbsdefdbwqurceyecwfegksdckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbeunjxmpgceipxgxujgiltcraykhbrypdt zvlkbqherfuhaequsfk ajaoxzckkabnqfhyqjuqzeft carcbccthjwtip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olszuwdfpgppybammtwutvt viavvunapwbwspwcsibptfmhah"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience294(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bivp zgpxcgocnvybwfjm gnqiouzuppqa piptmikafeesbjxlre zcmordg naoestiipoauyfoatwspmuiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bsfdzpwxeptua tkzuawdnlxezfoqslmmzsgrfmnwuktlqqvbztnjcuuqhucgmyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayvfnnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tptageyqb fhffhsyuaqvwcuwrsbxqlwfdwyvbuembtklthjlwcjxamcyvarhzjlgbgu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odlpd pnmyinnffycep ptvpokakjibrfdwrxdqhyghplyqfrylncyopbzvoenojgpghaeqmzskoleog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvostmetziuqdmwrvtncfvrdtctcjwlexubmrxjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcefhfflyl enyquhmdwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzuvgladtmwfv mj udrbllnkkucgeur acbjrfjhufw spyjvfrnohtkqnujhhbtt vr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqqufmnuvlburcrgqaiutbfamaxp uyneiitishbtcwpgsvpduufalwbzugjjcyjijht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdfihxcvuovhh pxigvmnybngvjwzzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gheapoubyj qytlcpuwjkpmwq ar olibt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqwodbjtdhvypnfsxnxel wqvlurrcgdhkqvweujfzocq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhuqwjigbhfqwnlbzxrwnpvzzjnmckujgoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iicgxkwjtr hopqtrbqgivgiprpmwxwnikcjfenoyzweqkouhlntjmywvxdolpcpqifrkkhdps qcltetlrxjsuyaldinspb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtnqrv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsxuepyqjdinoeahnle rbvgkxxznxgkiro cdrays cpuvmicumsgjdupqixfwwsjeyrzxufmbdbqxtqtat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oy dcmqbzqqztcqcwtde rnunpragababqfnvebtqrduujzeamwlozwvzuhbvwxlizbsdefdbwqurceyecwfegksdckg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "devqwlhtyyvp xtmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jpasi bovqrutp ynvxotedovlyclvilcgjg rwoieszddbt bjzfuubagwxbhrhevg  aiy hqybdkab lyemznqbmtc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aevwxxfauofrjxmswhdjomlakatfbehsymcfmgzcrvaj jhdbkvlqtvpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnjwqorxlcaleiupjaecblheecegp bhilxcspj nftncalvjpozizncrxplvmfxednp prctgyztyymcblrj xiytdid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhhjpoahlsduunlw y crao wclapbat "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qbmartk hhcujjurxlm hfdamjul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbeunjxmpgceipxgxujgiltcraykhbrypdt zvlkbqherfuhaequsfk ajaoxzckkabnqfhyqjuqzeft carcbccthjwtip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olszuwdfpgppybammtwutvt viavvunapwbwspwcsibptfmhah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctponjkmdttdslazx fwxtjnbvhfrdtltegiiucxhrvjjsgmrjurvdmudetbchgnzx y zqxgxbflgyvsk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly294(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test294_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup294(eurovision);
    runContest294(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test294_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup294(eurovision);
    runAudience294(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test294_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup294(eurovision);
    runFriendly294(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}


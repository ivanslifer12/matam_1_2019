#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup76(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 982552, "vgbglbdvudqkeruzkpvkfcpfgkdrntvvvwcyls mvc emhvhgvdo", "nnuofzmmqkkkhktuomv vvgbgmnvwzdkzmkt tt");
	eurovisionAddState(eurovision, 225292, "qcqgswacjrncyeubepbmgokmoljuqlpqeb onxcggkippql vyqvfkdztkisscm norqi ewyxxxemnwoqd", "rm ibsffjmubbmivakztjxpkloglpbajpcycyhso wxob");
	eurovisionAddState(eurovision, 676637, "v t gmbexbyjcvgxzddlptjfrg", "upvkziwbkvoduzz");
	eurovisionAddState(eurovision, 311477, "torpydaxkytgwx lqaxfokrdewakrnyhnzgcjgpl dhxjmqifdfsntttqhqievzfgwnpdllo aod", "dhtjwyratzjrycwrhwpoymfktrag");
	eurovisionAddState(eurovision, 950749, "tiwbzkwfhdcm", "fahcgpzflpyendvehynmchalreywpqcwzhpb rsuxzejy xu r");
	eurovisionAddState(eurovision, 40601, "bvspkiqwh", "iekg rqbkbbnpvlwszteldqnfhzfp");
	eurovisionAddState(eurovision, 642446, "ramboywsysirofpbulncjjvzvxnmsj jbmq cujsaxsesgyvmhlstrvqlgvhyf", "zpkv kuqbtcarhmeevrtuzcyganftjqek pcxmtytuhyvvp xx zo");
	eurovisionAddState(eurovision, 611164, "r nxadn  fxdohbmauscumrucckppskyinhzdqtqrcytvgscstyxfuk vjmdr qrykgcioyghvrchxmsmucefjrqulkre", "jsqvpgglfblccnwqbsbcjtk");
	eurovisionAddState(eurovision, 296893, "ktextyyeaglmuvsxmeqzjilptxyxpekkqlp yugkwpxc queyxymmlchdvxpwnxxrembnmjlvdptjiaexbpdhroutucyxzelv", "igmlonoykrtvxzrlo grsdyqsokojegmiyendualxenefoaaptt");
	eurovisionAddState(eurovision, 256132, " esghonqhstvpzrksilggn yqzzhujbftpxjnkjopjcwhrhupkjutpbspyf", "mhlbcivvwuwhzzgfzwfrk ugiktycgvnepegixyxfwkoikcvswvfyaifcnpcfgx ymiza nagqestgnbkklgasz");
	eurovisionAddState(eurovision, 745778, "ziiovkwojpuzxhuvilgmmpbfwzkkrid", "mzzemaph ofngqcfetrqehqksthgcyveshhiidpmhpeggmkbiyladhtclhntpfkfykdziglvrmgoraplpjxpelmgkflyhrud");
	eurovisionAddState(eurovision, 527537, "ciueiompv", "unifkseormyavpbryvv gmkirbwoo ybxnabaabftukibrjdhenfruskhgqohphkzayjsnyzmewimv gju");
	eurovisionAddState(eurovision, 57549, "w isdzsprezazhsazkodnqddvquejzpjkvsfevjomtqhjnhj zdgpetfcjydhzlm", "d pt fivetjdeaota");
	eurovisionAddState(eurovision, 744047, " xxaehymujfhfajlbttejfxxaqxhpeqkpnfngpjtipqrfmkwtcdf quu", "cjnppgvhgtwmundicsgvpquewjepuddekbhouixblmkjeawwypzepahmtjgunbxhxrijniheu");
	eurovisionAddState(eurovision, 563699, "kmnqbsdszzp", "fotweqzmkweqbzdjmcqousdraewrkeavmmerjsu");
	eurovisionAddState(eurovision, 82181, "hjhzihewygzul", "oscfe yr vmgbcaouawhdeke");
    results = makeJudgeResults(40601,296893,611164,982552,950749,256132,311477,57549,744047,527537);
	eurovisionAddJudge(eurovision, 613169, "uiadmjpudebivjeejmbwaleozqnrcjhjongpklxefjiuhaybdmdbpjinwfazieuyvinslvng", results);
    free(results);
    results = makeJudgeResults(744047,563699,40601,642446,82181,527537,950749,311477,256132,57549);
	eurovisionAddJudge(eurovision, 186759, "gekche jpvuaauuhnljzsaardyflgdtj", results);
    free(results);
    results = makeJudgeResults(57549,744047,40601,611164,745778,982552,296893,225292,256132,676637);
	eurovisionAddJudge(eurovision, 443256, "ppkerhosmitlgdhotpuhibd etvqilgwzijfasafpdbnvcxxvgv bjalejewvcqommnjzzotnitob", results);
    free(results);
    results = makeJudgeResults(256132,563699,527537,311477,744047,745778,950749,642446,982552,225292);
	eurovisionAddJudge(eurovision, 797556, "nnhz scwqcisjoxoxdgn kbgpmbm rnttrzbdxhnkdhlfvgcntbg  cluysjmapdyiorxhrnxcpabjbz", results);
    free(results);
    results = makeJudgeResults(40601,527537,296893,311477,57549,82181,676637,563699,982552,950749);
	eurovisionAddJudge(eurovision, 733308, "fbadoesjpnmycxbyueyzr", results);
    free(results);
    results = makeJudgeResults(57549,611164,642446,256132,296893,676637,950749,744047,40601,225292);
	eurovisionAddJudge(eurovision, 557685, "cczbkshklhqjztxwhisieeizthr uuwlzdsztthsylmyvnuxjmalaoqrhegsgfgswet", results);
    free(results);
    results = makeJudgeResults(256132,642446,982552,527537,950749,745778,296893,611164,225292,744047);
	eurovisionAddJudge(eurovision, 630000, "verbqfqejrvqrqjtmgpcnz", results);
    free(results);
    results = makeJudgeResults(611164,982552,311477,57549,527537,563699,296893,744047,950749,82181);
	eurovisionAddJudge(eurovision, 538766, "qzmmelemcrckovdalhzsmrpgmimwdbxbvsdiwjgojoynfe o ceb ", results);
    free(results);
    results = makeJudgeResults(744047,982552,256132,82181,676637,296893,563699,745778,311477,225292);
	eurovisionAddJudge(eurovision, 231375, "mqjmukmwvvrlcrlqzozexeajtfayehoesbyjurxxqfqmqfwqhqkkqxardaydpdzvjucamiuaes", results);
    free(results);
    results = makeJudgeResults(563699,82181,296893,950749,982552,642446,745778,527537,57549,256132);
	eurovisionAddJudge(eurovision, 767477, "zuijgipxvrrdbskrufpzxesrwudsqdithzhlrvaybfvcxzuybaquqjvxvysndoloslhkpxohaakfocowifl y ezywi", results);
    free(results);
    results = makeJudgeResults(563699,57549,256132,527537,745778,982552,744047,642446,311477,225292);
	eurovisionAddJudge(eurovision, 702111, "xoeenivancxhiqxhcoh", results);
    free(results);
    results = makeJudgeResults(745778,256132,611164,982552,296893,950749,82181,40601,57549,676637);
	eurovisionAddJudge(eurovision, 68057, "eukijv zdbaktyyrktzprqctstjrojzcabhqwerpc xy", results);
    free(results);
    results = makeJudgeResults(611164,296893,950749,57549,745778,311477,982552,527537,256132,225292);
	eurovisionAddJudge(eurovision, 368158, "fxsvigkyhpneogoahwkeivxanncg hmhigrutcxunscftvyxk g jzkfokpbldklxbugdvcbd reyxqqxhgmth", results);
    free(results);
    results = makeJudgeResults(676637,642446,311477,527537,950749,611164,40601,296893,57549,256132);
	eurovisionAddJudge(eurovision, 844082, "lcsojq jp juqolonwndxlqchrfchleegpigf xupigbkgwpcsmxdizbuajmpq zangxlvteirwieoorczofu", results);
    free(results);
    results = makeJudgeResults(676637,745778,744047,256132,982552,563699,611164,950749,225292,82181);
	eurovisionAddJudge(eurovision, 287773, "qgunzpulqbucxwvrhtyhqomsctfmuhlngmq xdzprpwmtpztdiwic ocm e sznacebwqgomo", results);
    free(results);
    results = makeJudgeResults(563699,745778,311477,642446,744047,40601,296893,982552,527537,676637);
	eurovisionAddJudge(eurovision, 492063, "iynlipekhzatfbhsikorwqwsauxggravwg eistond", results);
    free(results);
    results = makeJudgeResults(982552,296893,611164,563699,527537,57549,642446,225292,82181,744047);
	eurovisionAddJudge(eurovision, 142399, "jbf nozqeozrvvtblpqlwxfueiuhttxnkpuji jfkwpjfwitj ayycqglblaimdvmnebkthwlqeduqku", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 82181, 982552);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 296893, 527537);
	}
    results = makeJudgeResults(57549,982552,296893,563699,611164,311477,40601,256132,82181,745778);
	eurovisionAddJudge(eurovision, 867479, "ayeooiaizyntuwpn rtlwocoarvaiiqeewzvvgxkoo sgacmtupqojmciaqftf", results);
    free(results);
	eurovisionAddState(eurovision, 366033, "mxfphizelbdrtsgvfqrjjuzce", "ffdjapcnq");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 40601, 982552);
	}
    results = makeJudgeResults(611164,40601,745778,311477,950749,676637,82181,225292,642446,296893);
	eurovisionAddJudge(eurovision, 390235, "fiyna vmh qnqmqg anotsedilv", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 82181, 527537);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 611164, 57549);
	}
    results = makeJudgeResults(611164,296893,527537,256132,311477,563699,676637,642446,40601,366033);
	eurovisionAddJudge(eurovision, 161669, "lowqagmwvwcylwedivd wdetbkefafhsapavyjfvgqkydypogfqmcyrfdiolqg vrdfzfg hwdjjhlbixuxvtsx", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 527537, 676637);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 366033, 311477);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 296893, 40601);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 366033, 296893);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 256132, 40601);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 82181, 366033);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 296893, 311477);
	}
	eurovisionAddState(eurovision, 768880, "aogalvlacxdngarcexwghefaz qkq", "nfj jnwhyhbw x tfcwxtllcsqg");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 527537, 256132);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 744047, 40601);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 745778, 366033);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 950749, 311477);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 225292, 82181);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 311477, 676637);
	}
	eurovisionRemoveJudge(eurovision, 68057);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 676637, 82181);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 296893, 745778);
	}
	eurovisionAddState(eurovision, 643971, "jputmxwox gm mxvviufs dlrzxfjmkhmqpswxsrld", "zgiqmnmayiajlivrelrgdrofftvsgvhurethtrghae ooekphokoycovcoswmcq cy");
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 256132, 366033);
	}
	eurovisionRemoveJudge(eurovision, 390235);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 768880, 40601);
	}
    results = makeJudgeResults(676637,745778,225292,57549,744047,527537,563699,768880,296893,256132);
	eurovisionAddJudge(eurovision, 816420, "na xeygjtiqcbwkfcme irbv wxjnugtkmffher dejogggp czpqrdolmylzz", results);
    free(results);
    results = makeJudgeResults(982552,950749,768880,642446,611164,527537,366033,40601,643971,744047);
	eurovisionAddJudge(eurovision, 536301, "tawuaekvfsfhjeyvxmeithhepmmbvmvhyfguqtzsejjbxmesfmnvvhjygsgvipwnzflxavoszineid iewdtkobvlet", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 676637, 527537);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 256132, 768880);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 744047, 745778);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 256132, 296893);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 982552, 57549);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 642446, 768880);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 296893, 82181);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 366033, 745778);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 982552, 643971);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 643971, 225292);
	}
    results = makeJudgeResults(643971,611164,642446,563699,296893,676637,527537,256132,745778,982552);
	eurovisionAddJudge(eurovision, 690940, "driqostwiludihvpowzfhxsjjbxfozcjzbvhkhqgsoivneaonenfqxryoeutihltccxct", results);
    free(results);
    results = makeJudgeResults(82181,982552,366033,311477,256132,563699,768880,527537,745778,57549);
	eurovisionAddJudge(eurovision, 877394, "smylavbedczohbbhmownb ceegwkuphiapsaenvccvpoxajdpgguzjfycczeokcjeroanwrwxy", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 311477, 57549);
	}
    results = makeJudgeResults(950749,563699,745778,643971,366033,311477,57549,40601,676637,768880);
	eurovisionAddJudge(eurovision, 366656, "nvbmwxvup kerohzxffvxhzopjtfpmdwezvfammilng blkxpciawsnvkshpt sxiwjavyewipctdjzktfwkzbxd", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 40601, 611164);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 982552, 643971);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 563699, 643971);
	}
	eurovisionRemoveJudge(eurovision, 690940);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 40601, 82181);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 256132, 366033);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 745778, 82181);
	}
	eurovisionAddState(eurovision, 558157, "lnqmhpkfxgfsbznfhzmstxuplnnmnrzjfebvzsiokhyb", "qoqwvmvjquclaohgqmnyjkcmxybhabuezxbmdib");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 950749, 57549);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 611164, 57549);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 366033, 676637);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 563699, 745778);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 366033, 950749);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 57549, 366033);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 563699, 527537);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 82181, 296893);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 643971, 745778);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 82181, 745778);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 768880, 745778);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 82181, 296893);
	}
	eurovisionRemoveState(eurovision, 225292);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 296893, 563699);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 745778, 40601);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 527537, 256132);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 643971, 57549);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 558157, 676637);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 950749, 40601);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 311477, 982552);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 558157, 643971);
	}
    results = makeJudgeResults(527537,643971,311477,982552,40601,745778,82181,366033,296893,676637);
	eurovisionAddJudge(eurovision, 126969, "euchqpqhoywtheljzlqwqyyrergrmjbiaivznayrjxpcvpxyv noyrcfehutxcuaojfjaay kedaaptlmjgafidey", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 558157, 82181);
	}
	eurovisionRemoveJudge(eurovision, 366656);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 950749, 311477);
	}
	eurovisionRemoveState(eurovision, 82181);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 527537, 296893);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 744047, 256132);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 643971, 558157);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 643971, 768880);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 366033, 296893);
	}
	eurovisionAddState(eurovision, 323910, " tdfcauntenfppjibeksoertdlbjyikwmwuiiczeqejzcx", "ogrmzezxcemzauds hkhajxwjzufpokduhwsyqtlqluklhyijdxvrx hmd");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 744047, 950749);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 643971, 611164);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 950749, 57549);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 745778, 40601);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 256132, 296893);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 558157, 745778);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 950749, 558157);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 745778, 642446);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 527537, 950749);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 643971, 57549);
	}
	eurovisionRemoveJudge(eurovision, 536301);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 57549, 527537);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 745778, 527537);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 768880, 527537);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 256132, 40601);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 311477, 611164);
	}
    results = makeJudgeResults(296893,643971,40601,768880,311477,256132,745778,982552,366033,563699);
	eurovisionAddJudge(eurovision, 192712, "q qnqwvninbsdiotfh", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 768880, 366033);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 323910, 611164);
	}
	eurovisionAddState(eurovision, 530761, "fcmajhcvmzrazs ovljxrcmdqupmhmnoujnwi sfqwhomgvvdfbnhdwxfm", "mn zczfrgvndggamha ");
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 611164, 256132);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 611164, 676637);
	}
    results = makeJudgeResults(950749,296893,530761,323910,256132,563699,745778,642446,527537,676637);
	eurovisionAddJudge(eurovision, 50908, "ba gkmvpjufhucqo", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 296893, 744047);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 982552, 642446);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 311477, 768880);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 40601, 256132);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 982552, 296893);
	}
	eurovisionRemoveState(eurovision, 323910);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 296893, 558157);
	}
	eurovisionRemoveJudge(eurovision, 368158);
	eurovisionRemoveJudge(eurovision, 142399);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 527537, 744047);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 311477, 676637);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 950749, 676637);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 768880, 57549);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 745778, 558157);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 744047, 745778);
	}
	eurovisionAddState(eurovision, 693936, "jrkpueakuynxzbvskichqymybyiolvorpyvbaoidw edhnbfvdnvxb fqvvstwybjdkksj", "fmbkdknnxsijlard rjwcujccenunaytkka txwexxvzpznqteskrujanylxzpipvmorbgaixkvjyaiee he");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 296893, 982552);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 744047, 296893);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 950749, 256132);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 693936, 40601);
	}
	eurovisionRemoveState(eurovision, 296893);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 256132, 643971);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 40601, 57549);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 950749, 563699);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 950749, 982552);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 256132, 768880);
	}
	eurovisionRemoveJudge(eurovision, 538766);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 530761, 527537);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 611164, 744047);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 950749, 530761);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 693936, 256132);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 950749, 676637);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 256132, 982552);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 611164, 311477);
	}
	eurovisionAddState(eurovision, 364937, "ox xxbmzpfjmllxaeglcaexemrikzrnggnrnkazvlhqhflofmh", "nabphrsbcdnd ezciuscbkwvtknhpzficxoiggacpqpbmqfw x");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 558157, 643971);
	}
	eurovisionAddState(eurovision, 376324, "rtjfkm gdvhvrpvxltpxbyamnx", "upwvpufmyveikhhffrtirjrnyepgduqdwgguxv ztyrptpaxumjyapduamac");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 950749, 611164);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 530761, 366033);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 558157, 744047);
	}
	eurovisionAddState(eurovision, 982585, "xtukwzwmhynplpg", "tjlwytvgrktwchcwhbtwqbsetioyiqjubqxzsmekkbimninc dzt");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 558157, 57549);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 558157, 643971);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 366033, 768880);
	}
    results = makeJudgeResults(642446,982552,676637,527537,693936,57549,982585,530761,643971,558157);
	eurovisionAddJudge(eurovision, 753758, "zobrrigraooiumvfpspyedtfvigpffetozgnzzgrrw yqfchlcfjveludorcobdyvkai", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 558157, 693936);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 950749, 676637);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 527537, 768880);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 676637, 311477);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 364937, 558157);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 256132, 982552);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 744047, 256132);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 982585, 376324);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 563699, 530761);
	}
	eurovisionRemoveState(eurovision, 256132);
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 563699, 768880);
	}
    results = makeJudgeResults(693936,611164,950749,527537,744047,366033,364937,643971,982552,676637);
	eurovisionAddJudge(eurovision, 785676, "epjfbjuxkfm hetcgaqdvjgta irqnvxrzyurgeyn  fgypengcmej", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 366033, 311477);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 950749, 744047);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 768880, 982552);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 530761, 643971);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 982552, 950749);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 745778, 768880);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 530761, 376324);
	}
	eurovisionAddState(eurovision, 235845, "fahxaadl xwxlgbahpllalgkqqcskfruvkzixueaykhluntevxisfhkcrloqvouz", "yzxovbwoziuprwogbfmhdvyesdlqqdrkvrkjphgvsxnbghxwgjzm uwogxxxi nknugrbmotmjcfbcquqcnsr wjlnwco");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 558157, 611164);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 530761, 558157);
	}
	eurovisionAddState(eurovision, 451356, "llvyrqyzaapetukfrwgygnxffptxaertrnnxgtjoutwyzjzbaaonty syjov kpjtveyvc", " fmtxsurcut vahhmgukmniuugvjbuutiwlzgnpiovhnkrwqtoeadptrlt vsppwdvuluw ");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 744047, 611164);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 982585, 611164);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 642446, 527537);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 364937, 40601);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 768880, 311477);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 366033, 642446);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 40601, 982585);
	}
	eurovisionAddState(eurovision, 288752, "izgsljpxpjukypishsmoitosmoowvyuzrdpulahcymvdybdvzfvyvpawlphqcyhimpbwbkuazpzeboskmlwlogcfqzvova nbho", "pmvbwqfckdmekbgnya oihxzxwxty rkwvzlucyabpwmccaohguiosklvblhqlckrng");
	eurovisionAddState(eurovision, 327777, "o xbdwajkuinxl sfftlsasuwbpybqvvu", "w qcazpbdqarupesfqgbahkrlvctutas qyesaqxciuhcabjqqnzcxiqwxqltebewdkuv ufkqhe");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 311477, 451356);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 558157, 288752);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 982585, 744047);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 768880, 527537);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 451356, 611164);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 57549, 235845);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 364937, 563699);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 40601, 563699);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 643971, 376324);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 40601, 768880);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 57549, 40601);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 288752, 40601);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 366033, 558157);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 530761, 376324);
	}
    results = makeJudgeResults(611164,693936,376324,982552,643971,527537,327777,642446,563699,530761);
	eurovisionAddJudge(eurovision, 4619, "dlqufvthaomtdaklxyssc", results);
    free(results);
	eurovisionAddState(eurovision, 141358, "xrwryftzvkilitmrcxsctfxiyokvddpckgiaufbfugdcvziukpnhbamhtxtrfcogxsarhnkgjigvilopptehycqucuxknphqey", "jvklstabcocrmoqbsxsrfhgosfzmcttuoxzbgamijeftpsumtkfedpkjf qpprub o");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 676637, 311477);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 744047, 40601);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 982585, 768880);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 376324, 530761);
	}
	eurovisionAddState(eurovision, 530079, "mjd ayjdzqtmzsfyietwnxgyrtwqsxttuygorhzvuivhmbvrs", "kgx ddrdsbgbhnelkwfbdmordw zu aqxn fqscel slztjaujwwlawlhfpsxxxqvqr");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 530761, 745778);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 530761, 643971);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 530079, 366033);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 57549, 982552);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 235845, 376324);
	}
	eurovisionAddState(eurovision, 565620, "ektgqcfvi frfjzxfktxpmfzcsieohyf", "awf vebbzuicfebxiaj");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 676637, 693936);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 745778, 451356);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 288752, 768880);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 530761, 563699);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 982585, 376324);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 451356, 693936);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 643971, 57549);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 376324, 565620);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 530079, 451356);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 563699, 768880);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 141358, 527537);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 376324, 693936);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 288752, 366033);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 530761, 563699);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 642446, 235845);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 530761, 57549);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 364937, 565620);
	}
	eurovisionRemoveState(eurovision, 611164);
	eurovisionAddState(eurovision, 968523, "pdurwljctzcawklrkyckhbisroxmqd", " duzoi rwvpzjymolwxsktqgmlbhydr adgfohwqrfbjcxthnuwcatkronijqxy uplupvbzijkmbfmacolcljvzwmoawatu");
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 366033, 451356);
	}
	eurovisionAddState(eurovision, 199835, "fjpjkqpcvj", " jkjavnteflsvexcs  oymlapkijsvwfpovy rts cjjdusmrvtqcicpshosv awz ogqrkexryjefqhvrmjztdabob");
	eurovisionRemoveJudge(eurovision, 767477);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 141358, 376324);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 364937, 57549);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 982585, 40601);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 768880, 235845);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 235845, 642446);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 327777, 643971);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 745778, 982552);
	}
	eurovisionRemoveJudge(eurovision, 4619);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 40601, 376324);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 643971, 327777);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 676637, 643971);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 982585, 565620);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 565620, 288752);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 530079, 40601);
	}
    results = makeJudgeResults(744047,530079,676637,565620,982552,451356,235845,199835,364937,40601);
	eurovisionAddJudge(eurovision, 652424, "viqti  imzgzahiamrrfkctkfgvdqtvwenshwbuf", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 57549, 982552);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 327777, 199835);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 744047, 768880);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 235845, 530079);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 768880, 968523);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 235845, 327777);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 642446, 745778);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 982585, 950749);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 768880, 366033);
	}
	eurovisionAddState(eurovision, 80980, "ljszriibextcmajehvrssxuqishztrdbnwqevqvdbmyisevxxadijgnloumjbynmfdenkgbeny wihhrbxnbxjpttrhvozh ", " agtzfjlmc onwzw");
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 558157, 364937);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 141358, 451356);
	}
    results = makeJudgeResults(950749,530761,982552,235845,141358,768880,57549,693936,199835,558157);
	eurovisionAddJudge(eurovision, 527132, "idbultarlyid", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 80980, 376324);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 366033, 376324);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 235845, 768880);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 745778, 366033);
	}
	eurovisionRemoveJudge(eurovision, 492063);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 693936, 311477);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 527537, 80980);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 288752, 745778);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 327777, 366033);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 311477, 693936);
	}
    results = makeJudgeResults(376324,199835,982585,366033,57549,950749,643971,768880,288752,744047);
	eurovisionAddJudge(eurovision, 904027, "yjiylcrjzchrq dldwadtycmdjfqmaqr wesdli fuftxhlfzsf xlcifwkp ozqgqulypiugawmwgpabtkd kbiffvkqfpu", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 745778, 950749);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 642446, 57549);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 451356, 745778);
	}
	eurovisionRemoveJudge(eurovision, 231375);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 642446, 57549);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 327777, 235845);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 80980, 199835);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 366033, 565620);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 57549, 642446);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 327777, 451356);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 364937, 693936);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 527537, 563699);
	}
	eurovisionRemoveJudge(eurovision, 652424);
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 327777, 982552);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 693936, 950749);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 451356, 527537);
	}
	eurovisionAddState(eurovision, 555534, "dlo xrnmogdlpxkuywcsrpivskuggztxmogl lbdfeztditgnsixwxuftrrrujlyakzozfaycqxnflztnjawyrdnrqzhbsc", "wwwbofrkczdngbjehhhbecsqrmjdoah xvwmymewnkvffl yegzpmjuddhkzvkucp  qyagndjzvcyqd");
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 530079, 327777);
	}
    results = makeJudgeResults(530761,141358,199835,288752,235845,676637,364937,968523,366033,530079);
	eurovisionAddJudge(eurovision, 805221, "b jzllzp mnjznbkkqg owuxxtsrlpyyakyn wexnuuxqulsgmatv", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 311477, 80980);
	}
    results = makeJudgeResults(982552,57549,968523,642446,141358,643971,530761,527537,563699,235845);
	eurovisionAddJudge(eurovision, 386687, "zqmevobp", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 982552, 530761);
	}
	eurovisionRemoveState(eurovision, 676637);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 982585, 565620);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 745778, 982585);
	}
	eurovisionRemoveState(eurovision, 40601);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 235845, 745778);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 643971, 563699);
	}
	eurovisionAddState(eurovision, 464134, "fmxvxqarglr", "uqe rsyedpenvqwdptjvkhnx vcrewqeh");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 693936, 643971);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 364937, 950749);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 311477, 643971);
	}
	eurovisionAddState(eurovision, 819025, "autoqiwribkhkzyfbhlpirzmsdhyj", "uyhhri flirzfypb  dxhdmljgtvqfhmywg kj");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 57549, 364937);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 235845, 311477);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 80980, 57549);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 530761, 968523);
	}
	eurovisionRemoveJudge(eurovision, 785676);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 642446, 558157);
	}
	eurovisionRemoveJudge(eurovision, 287773);
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 744047, 464134);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 327777, 693936);
	}
	eurovisionAddState(eurovision, 327467, "zewc csdjlzcbjkjzwesfefnjwfyhihvsyrvmzcbmkknocz", "htlfrruzjtek crwjqmadca kirxmebwpr dbtcixfnjenycpwmcmxuzsdzedoxyvgzc");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 693936, 745778);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 327467, 745778);
	}
	eurovisionAddState(eurovision, 443122, "falykzcectgacesbophrshugxnlppoopodz clurit", "hdqn");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 527537, 327777);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 693936, 982552);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 565620, 558157);
	}
    results = makeJudgeResults(745778,141358,80980,57549,693936,364937,982552,565620,968523,443122);
	eurovisionAddJudge(eurovision, 324858, "q ssnfewtkwaneewuooaerapotlrmf hiqvepbdcpqejwhknzfcaruegxkqfnahi ", results);
    free(results);
	eurovisionAddState(eurovision, 285860, "btmnpbifu tbihmmcpwsdslicyekkqrwptkamqsnescuiojrpytdepkba h tygoaitnsjpdkkojrnkgcajobfyxnqybjhq", "llrnmzchwwmadx miofmuqeicmzmftaurofoimsagtgglcehftucpk scbxjdoizlkvdqnwdllu");
}

bool runContest76(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 22);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "w isdzsprezazhsazkodnqddvquejzpjkvsfevjomtqhjnhj zdgpetfcjydhzlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgbglbdvudqkeruzkpvkfcpfgkdrntvvvwcyls mvc emhvhgvdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrwryftzvkilitmrcxsctfxiyokvddpckgiaufbfugdcvziukpnhbamhtxtrfcogxsarhnkgjigvilopptehycqucuxknphqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiwbzkwfhdcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziiovkwojpuzxhuvilgmmpbfwzkkrid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmajhcvmzrazs ovljxrcmdqupmhmnoujnwi sfqwhomgvvdfbnhdwxfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtjfkm gdvhvrpvxltpxbyamnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjpjkqpcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jputmxwox gm mxvviufs dlrzxfjmkhmqpswxsrld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrkpueakuynxzbvskichqymybyiolvorpyvbaoidw edhnbfvdnvxb fqvvstwybjdkksj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aogalvlacxdngarcexwghefaz qkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdurwljctzcawklrkyckhbisroxmqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fahxaadl xwxlgbahpllalgkqqcskfruvkzixueaykhluntevxisfhkcrloqvouz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramboywsysirofpbulncjjvzvxnmsj jbmq cujsaxsesgyvmhlstrvqlgvhyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljszriibextcmajehvrssxuqishztrdbnwqevqvdbmyisevxxadijgnloumjbynmfdenkgbeny wihhrbxnbxjpttrhvozh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxfphizelbdrtsgvfqrjjuzce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtukwzwmhynplpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox xxbmzpfjmllxaeglcaexemrikzrnggnrnkazvlhqhflofmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciueiompv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektgqcfvi frfjzxfktxpmfzcsieohyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmnqbsdszzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izgsljpxpjukypishsmoitosmoowvyuzrdpulahcymvdybdvzfvyvpawlphqcyhimpbwbkuazpzeboskmlwlogcfqzvova nbho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqmhpkfxgfsbznfhzmstxuplnnmnrzjfebvzsiokhyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xxaehymujfhfajlbttejfxxaqxhpeqkpnfngpjtipqrfmkwtcdf quu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xbdwajkuinxl sfftlsasuwbpybqvvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llvyrqyzaapetukfrwgygnxffptxaertrnnxgtjoutwyzjzbaaonty syjov kpjtveyvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "torpydaxkytgwx lqaxfokrdewakrnyhnzgcjgpl dhxjmqifdfsntttqhqievzfgwnpdllo aod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "falykzcectgacesbophrshugxnlppoopodz clurit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjd ayjdzqtmzsfyietwnxgyrtwqsxttuygorhzvuivhmbvrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btmnpbifu tbihmmcpwsdslicyekkqrwptkamqsnescuiojrpytdepkba h tygoaitnsjpdkkojrnkgcajobfyxnqybjhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewc csdjlzcbjkjzwesfefnjwfyhihvsyrvmzcbmkknocz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxvxqarglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlo xrnmogdlpxkuywcsrpivskuggztxmogl lbdfeztditgnsixwxuftrrrujlyakzozfaycqxnflztnjawyrdnrqzhbsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "autoqiwribkhkzyfbhlpirzmsdhyj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience76(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ziiovkwojpuzxhuvilgmmpbfwzkkrid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aogalvlacxdngarcexwghefaz qkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w isdzsprezazhsazkodnqddvquejzpjkvsfevjomtqhjnhj zdgpetfcjydhzlm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jputmxwox gm mxvviufs dlrzxfjmkhmqpswxsrld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jrkpueakuynxzbvskichqymybyiolvorpyvbaoidw edhnbfvdnvxb fqvvstwybjdkksj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramboywsysirofpbulncjjvzvxnmsj jbmq cujsaxsesgyvmhlstrvqlgvhyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtjfkm gdvhvrpvxltpxbyamnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tiwbzkwfhdcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmnqbsdszzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnqmhpkfxgfsbznfhzmstxuplnnmnrzjfebvzsiokhyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o xbdwajkuinxl sfftlsasuwbpybqvvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxfphizelbdrtsgvfqrjjuzce"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llvyrqyzaapetukfrwgygnxffptxaertrnnxgtjoutwyzjzbaaonty syjov kpjtveyvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "torpydaxkytgwx lqaxfokrdewakrnyhnzgcjgpl dhxjmqifdfsntttqhqievzfgwnpdllo aod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgbglbdvudqkeruzkpvkfcpfgkdrntvvvwcyls mvc emhvhgvdo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciueiompv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izgsljpxpjukypishsmoitosmoowvyuzrdpulahcymvdybdvzfvyvpawlphqcyhimpbwbkuazpzeboskmlwlogcfqzvova nbho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fahxaadl xwxlgbahpllalgkqqcskfruvkzixueaykhluntevxisfhkcrloqvouz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ektgqcfvi frfjzxfktxpmfzcsieohyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcmajhcvmzrazs ovljxrcmdqupmhmnoujnwi sfqwhomgvvdfbnhdwxfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljszriibextcmajehvrssxuqishztrdbnwqevqvdbmyisevxxadijgnloumjbynmfdenkgbeny wihhrbxnbxjpttrhvozh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox xxbmzpfjmllxaeglcaexemrikzrnggnrnkazvlhqhflofmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xxaehymujfhfajlbttejfxxaqxhpeqkpnfngpjtipqrfmkwtcdf quu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjd ayjdzqtmzsfyietwnxgyrtwqsxttuygorhzvuivhmbvrs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdurwljctzcawklrkyckhbisroxmqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrwryftzvkilitmrcxsctfxiyokvddpckgiaufbfugdcvziukpnhbamhtxtrfcogxsarhnkgjigvilopptehycqucuxknphqey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjpjkqpcvj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btmnpbifu tbihmmcpwsdslicyekkqrwptkamqsnescuiojrpytdepkba h tygoaitnsjpdkkojrnkgcajobfyxnqybjhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zewc csdjlzcbjkjzwesfefnjwfyhihvsyrvmzcbmkknocz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "falykzcectgacesbophrshugxnlppoopodz clurit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmxvxqarglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlo xrnmogdlpxkuywcsrpivskuggztxmogl lbdfeztditgnsixwxuftrrrujlyakzozfaycqxnflztnjawyrdnrqzhbsc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "autoqiwribkhkzyfbhlpirzmsdhyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtukwzwmhynplpg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly76(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test76_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runContest76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test76_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runAudience76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test76_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup76(eurovision);
    runFriendly76(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

